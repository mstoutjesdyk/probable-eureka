// multispeed.cpp: C++ program to estimate rotor speed for experiments with
// multiple speed steps when the sample is heterogeneous. Written in standard C++
// This program can be compiled with gcc:
// g++ multispeed.cpp
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int next_rpm (int);
double calc_time(int, double);
double calc_b (double, int, double);
double omega_s (int);
double m, meniscus=5.9, b=7.2, largest_s=4e-12;
int first_speed=6000, rotor_max=50000;

int main (int argc, char *argv[])
    
{
char str;
if (argc == 1)
{
cout << "\nAssuming meniscus=5.9 cm, maximum sed. coeff=40e-13 s,\n";
cout << "lowest speed=6,000 rpm, maximum speed=50,000 rpm.\n";
cout << "\nYou can also specify your own values on the command line:\n";
cout << "Usage: ./a.out <meniscus> <maximum sed. coeff> <lowest speed> <maximum speed>\n";
cout << "\nHit enter to continue...\n";
cin.get();
}
else if (argc != 1 && argc <= 4)
{
cout << "Usage: ./a.out <meniscus> <maximum sed. coeff> <lowest speed> <maximum speed>\n";
}
else
{
meniscus = atof(argv[1]);
largest_s = atof(argv[2]);
first_speed= atof(argv[3]);
rotor_max = atof(argv[4]);
}
double tmp;
vector <vector <double> > position;
vector <double> t;
vector <double> s;
vector <int> rpm;
int i=0, j=0, k;
rpm.clear();
rpm.push_back(first_speed);
s.push_back(largest_s);
t.clear();
vector <double> pos;
pos.clear();
// set up vector of rpm values:
cout << "\nRotor speeds:\n";
while (rpm[i] <= rotor_max)
{
cout << "rpm[" << i << "]: " << rpm[i] << endl;
rpm.push_back(next_rpm(rpm[i]));
i++;
pos.push_back(meniscus); // all species start at meniscus
}
position.push_back(pos);
cout << "\nS values:\n";
cout << "s[" << 0 << "]: " << s[0] << endl;
for (j=1; j<i; j++) // largest s is already in vector, so start at j=1
{
s.push_back(s[j-1] - s[0]/i);
cout << "s[" << j << "]: " << s[j] << endl;
}
k=1;
cout << "\nMeniscus positions and times:\n\n";
for (i=0; i<rpm.size(); i++)
{
pos.clear(); //delete vector for next round
m=position[i][0];
cout << "Meniscus for species " << k << ": " << m;
t.push_back(calc_time(rpm[i], s[k-1])); //needs b and m
cout << " using " << t[i]/3600.0 << " hours for speed "
<< rpm[i] << " and s: " << s[i] << endl;
int c=0;
for (j=i+1; j<s.size(); j++)
{
m=position[i][c+1];
cout << "Meniscus for species " << j+1 << " (s: " << s[j] << "): "
<< m << ", which moved to: ";
pos.push_back(calc_b(s[j], rpm[i], t[i])); // needs m for each solute
cout << pos[c] << " at " << rpm[i] << "rpm\n";
c++;
}
cout << endl;
position.push_back(pos);
k++;
if (k>rpm.size()-1) break;
}
cout << "Times for each speed:\n\n";
for (i=0; i<rpm.size()-1; i++)
{
cout << "rpm " << i+1 << ": " << rpm[i] << " ("
<< t[i]/3600 << " hours or " << t[i] << " seconds)\n";
}
cout << endl;
}
// function calc_b() calculates the distance a particular s-value
// sediments during a given time and with a given rotor speed:
//
double calc_b(double s, int rpm, double t)
{
return(m*(exp(s*omega_s(rpm)*t)));
}
// function calc_time() calculates the time it takes for a particular
// s-value to sediment from starting position m to bottom of cell:
//
double calc_time(int rpm, double s)
{
return(log(b/m)/(s*omega_s(rpm)));
}
double omega_s(int rpm)
{
return(pow((double) rpm * M_PI/30.0, 2.0));
}
// function next_rpm() assumes doubling of centrifugal force
// with each speed step. Other profiles can be programmed here:
//
int next_rpm(int rpm)
{
double tmp;
tmp = (double) rpm*rpm;
tmp*=2;
tmp = pow(tmp, 0.5);
rpm = (int) tmp/100;
rpm *= 100;
return(rpm);
}