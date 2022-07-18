# Chromatic Aberration

!!! danger ""

    This page is based on the reserach presented in:
    
    <div class="csl-entry">Stoutjesdyk, M., Henrickson, A., Minors, G., Demeler, B. (2020). A calibration disk for the correction of radial errors from chromatic aberration and rotor stretch in the Optima AUC<sup>TM</sup> analytical ultracentrifuge. <i>European Biophysics Journal</i>, <i>49</i>(8). https://doi.org/10.1007/s00249-020-01434-z</div>
    
There are up to a hndred user-selectable wavelengths between 190 nm and 800 nm to use for collecting data on the Optima AUC during a single experiment. 

Using the calibration disk, described [here](/cal-hard), the chromatic aberration effects are shown since scanning the disk at different wavelengths produce different radial positions for the same physical location. Total radial deviations ranged between 40 $\mu$m- 380 $\mu$m. At the greatest deviation, 380 $\mu$m, the error contributed to as much as 0.66% in the measure of the sedimentation coefficient. The largest errors occur near the top of the cell, decreasing twowards the bottom. This means several things: first, the absolute measurement is incorrect, and; secondly, the radial deviation contributes to an pparently non -constant $s$ value.

<span style="font-size: 20px";>Causes</span>

While the exact cause is not precisely known, these deviations are likely a result of imperfections in the AUC's optical system, specifically the non-vertical light beam tracing. The lack of perpendicular incident light is supported by the appearance of shadows on one side of the calibration disk's edges. As shown below in $\textbf{Figure 1}$, the shadow produces a zig-zag effect on the deviatons from the predicted positions.

There is additionally a wavelength-dependent variablity in the radial scaling between the top and bottom of the cell. There is a change in the absolute deviation when the inner edge deviations are compared with the outer edge deviations, with the lower wavelength producing a higher magnitude of total offset.

!!! danger ""

    ![](/img/wavelength-edges.png)
   
    $\textbf{Figure 1}$ Edge position deviaitions from predicted positions for observations made at: 200 nm (black), 230 nm (red), 300 nm (green), 460 nm (blue), and 750 nm (magenta).

    $\textbf{Table 1}$ Edge positions in cm at rest versus predicted, measured at 250 nm.
   
    \begin{array}{llll}
    \hline
    \text{Edge} & \text{Measured (cm)} & \text{Predicated (cm)} & \text{Difference (cm)} \\
    \hline
    1 & 5.94974 & 5.929 & -2.07E-02 \\
    2 & 6.05122 & 6.025 & −2.62E-02\\
    3 & 6.11951 & 6.097 & −2.25E-02\\
    4 & 6.26084 & 6.237 & −2.38E-02\\
    5 & 6.32905 & 6.308 & −2.11E-02\\
    6 & 6.44025 & 6.425 & −1.53E-02\\
    7 & 6.56951 & 6.550 & −1.95E-02\\
    8 & 6.67923 & 6.658 & −2.12E-02\\
    9 & 6.74475 & 6.728 & −1.68E-02\\
    10 & 6.88611 & 6.868 & −1.81E-02\\
    11 & 6.95078 & 6.939 & −1.18E-02\\
    12 & 7.09261 & 7.077 &−1.56E-02\\
    13 & 7.15398 & 7.146 & −7.98E-03 \\
    \hline
    \end{array}
    
    <div class="csl-entry"><span style="font-size: 11px";>Stoutjesdyk, M., Henrickson, A., Minors, G., Demeler, B. (2020). A calibration disk for the correction of radial errors from chromatic aberration and rotor stretch in the Optima AUC<sup>TM</sup> analytical ultracentrifuge. <i>European Biophysics Journal</i>, <i>49</i>(8). https://doi.org/10.1007/s00249-020-01434-z</span></div>
    

<span style="font-size: 20px";>Correction Methods</span>

A calibration curve based on the shift in edge position as a function of wavelength can be constructed to correct for the wavelength-dependent variations. 

Another correction method involves measuring the position of a meniscus over the wavelength range. In this method, the meniscus positions of 4-8 samples filled with 0.23 ml of water can be repeatedly scanned in intensity mode at 62 wavelengths, spanning 190 nm to 800 nm in 10 nm intervals. The optimal rotor speed is 14,000 rpm, since at that speed, the scanning time is minimized due to the synchronization with the flash rate of the flash lamp.

The following is the recommended procedure for how to build a calibration file from using the meniscus position method. A pdf version of this protocol is avaliable [here](/pdf/Documentation/ChromaticAberrationProfile.pdf).

1. <span style="color:#00008B";>Import the Calibration Data</span> into UltraScan's <span style="color:#00008B";><u>Utilities: View Raw Optima Data</u></span> module.

2. <span style="color:#00008B";>Zoom on the mensicus region</span> for each channel while in intensity mode. For each channel, a csv file will be generated into the UltraScan imports data folder. This dataset maps the radial position of the meniscus minima against wavelength.
    
3. Use a third party spreadsheet program to <span style="color:#00008B";>average the meniscus positions. Subtract the 250 nm value</span> from each wavelengths radial position. The 250 nm position is assumed to be correct if the instrument has been radially calibrated with the manufacturer's counterbalance at that wavelength. Assume this position to be the true offset with zero correction.
    
4. <span style="color:#00008B";>Fit the averaged data</span> with a parameterizing curve (with 1 nm increments).
    
5. Upload the chromatic aberration profile into the <span style="color:#00008B";><u>Edit: Preferences: Instrument Preferences</u></span> instrument configuration.

!!! danger "Chromatic Aberration Profile Example"

    ![](/img/chromatic-ab.png)
    $\textbf{Figure 2}$ Example of the chromatic aberratio error in the Optima AUC.
    
    RED: deviation from the radial calibration at 250 nm for four averaged meniscus positions. Data is fitted to a 5-th order polynomial.
    
    BLUE: observed meniscus positions for the four input menisci after correction. All four positions now show < 0.001 cm error.
    
    
    
    
    
    