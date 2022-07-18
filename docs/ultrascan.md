!!! danger ""

    The UltraScan-III and LIMS-III software were developed by:

    Emre Brookes, Weiming Cao, Bruce Dubbs, Gary Gorbet, Kip Jay, Jeremy Mann, Suresh Marru, Shabhaz Memon, Marlon Pierce, Alexey Savelyev, Raminder Singh and Dan Zollars.

    Project Director: Borries Demeler

    Other individual contributors to the UltraScan project can be found [here](https://ultrascan.aucsolutions.com/contributors.php).
    
    For more information, please visit: [http://www.ultrascan.aucsolutions.com/](http://www.ultrascan.aucsolutions.com/)

## UltraScan Software

!!! warning ""

    ![](/img/ultrascan.png){width="800"}
    
    The UltraScan software is copyright protected by international laws. The copyright is jointly owned by Borries Demeler, PhD (1989-present) and The University of Texas Health Science Center at San Antonio (1997-2018), AUC Solutions (2015-present), University of Montana (2018-present) and University of Lethbridge (2018-present). All rights reserved.
    
    The entire software, including documentation, source code, LIMS and grid middleware components are protected by the GNU Lesser General Public License, version 3. 
    
UltraScan is a comprehensive data analysis software package for hydrodynamic data from analytical ultracentrifugation experiments. The software features an integrated data editing and analysis environment with a portable graphical user interface. UltraScan provides the highest possible resolution for sedimentation velocity experiments using high-performance computing modules for 2-dimensional spectrum analysis, genetic algorithm, and for Monte Carlo analysis. A MySQL database backend is integrated for data management, and the UltraScan LIMS system provides web-based access to the database and supercomputing functionality. Supercomputing resources are provided through a NSF Teragrid Science Gateway. Special care has been taken in the design of the software to guarantee an optimum in flexibility, user-friendliness, stability and convenience. The software is written in C++.

The software features popular sedimentation velocity and equilibrium analysis methods as well as simulation modules, utilities, and editing modules with support for velocity and equilibrium experiments, single and multi-channel centerpieces, absorbance and interference optics. All analysis methods generate ASCII formatted data suitable for import into third-party plotting programs, and contains a built-in postscript printer engine to generate publication - quality graphical representations of analysis data.

UltraScan is offered in two versions, UltraScan-II and UltraScan-III. The latter is a complete rewrite of the former, with many new features and a greatly improved interface. UltraScan-III was released in the summer of 2011 and will eventually replace the older version. We will maintain UltraScan-II to assure access to legacy data because UltraScan-III is not backward compatible with UltraScan-II. New users are encouraged to switch to UltraScan-III. In addition to numerous interface changes, the most important changes in UltraScan-III are listed below:

UltraScan-III adheres to the [OpenAUC](/openAUC) standard.

* Can be used simultaneously in a local disk-only mode without the requirement for network connectivity, or fully integrated with network capability, including a database and supercomputing backend
    
* Contains a local 2DSA that is multi-threaded to take advantage of multi-core technology
    
* All hydrodynamic models are represented in a single, generalized and standard structure that can be interpreted by the ASTFEM simulator and understood throughout the program.

* All experimental data are stored in a new binary format that achieves 60-80% compression from the legacy Beckman data format
    
* All network communications are SSL encrypted and provide data privacy and security. Data ownership in the database is on a per-user level now
    
* A master password mechanism facilitates switching between multiple resources.
    
* A new rotor stretch calibration routine assures maximum accuracy for individually calibrated rotors
    
 * A new reporting system provides much improved control over result report formatting
    
* Plots can be exported not only as bitmap, postscript, or PDF but also as SVG files which can be edited later on
    
* Finite element analysis for all methods, as well as data management is greatly improved to reduce the workflow without compromising flexibility

The LIMS component of UltraScan, coupled with the high-performance computing backend dramatically improves analysis speed and throughput and allows simultaneous analysis of a virtually unlimited number of experiments. Any institution, academic or for profit can obtain free data storage and supercomputing analysis resources through an NSF TeraGrid allocation grant issued to Borries Demeler.  

A quick-start manual for UltraScan can be found [here](https://ultrascan.aucsolutions.com/quickstart.php).

## US-LIMS

The [US-LIMS website](https://uslims.uleth.ca/uslims3_CCH/) offers access to the UltraScan Laboratory Information Management System (USLIMS), an XSEDE Science Gateway supported by an allocation through an XSEDE community account. 

This system provides web and database support for users of the UltraScan software. You can use this portal to access data associated with your sedimentation experiments, and share your data with collaborators. Authorized users can also use this site to model analytical ultracentrifugation experiments with UltraScan's high-performance analysis modules by submitting analysis jobs to computing clusters available at the University of Texas Health Science Center and XSEDE sites at the Texas Advanced Computing Center and at Indiana University. 

These services are made available through an NSF XSEDE community account. Funding for this facility is provided through multiple sources:

* Department of Biochemistry, University of Texas Health Science Center at San Antonio
    
* User fees collected from collaborators and users of the UltraScan facility at UTHSCSA.
    
* San Antonio Life Science Institute Grant #10001642

* The National Science Foundation, Grants DBI-9974819, ANI-228927, DBI-9724273, TG-MCB070038 (all to Borries Demeler)

* The National Institutes of Health, Grant NCRR-R01RR022200 (to Borries Demeler)



!!! warning ""

    When publishing, please credit our facility as follows:

    Calculations were performed on the UltraScan LIMS cluster at the Bioinformatics Core Facility at the University of Texas Health Science Center at San Antonio and multiple High Performance Computing clusters supported by NSF XSEDE Grant #MCB070038 (to Borries Demeler).
    
## Using UltraScan with the Optima AUC

The Optima AUC from Beckman Coulter allows for the implementation of appropriate workflow validations, instrument diagnostics, and greater automation in the data aquisition and analysis processes.

Since the Optima can be networked over Ethernet, data aquisition can be accomplished by a computer that is configured with the open source Linux operating system, to utalize a PostgreSQL relational database.
This database stores experimental data, run profiles, and system status information. Experimental data is stored in 8 byte double percision format, allowing for the full accuracy of the detector to be perserved.
This is unlike the older Proteomelab instruments, which stored data in ASCII format. Using a binary data system allows for faster input/output, and faster network transfer speeds.

Additionally, interacting with PostgreSQL allows for:

1. remote submission of experimental analysis profiles;

2. automatic operation of instruments;

3. remote monitoring;

4. fully automated data transfer to an analysis computer in native format;

5. access to fine-grained, real-time system data with 1 second resolution, featuring the insturments time, rotor force integral, and temperature, and;

6. implementation of audit trails for data access at all levels.
