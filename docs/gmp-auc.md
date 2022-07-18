# What is Good Manufacturing Practices?

!!! danger ""

    This page is mainly based on the research presented in:
    
    <div class="csl-entry">Savelyev, A., Gorbet, G. E., Henrickson, A., &#38; Demeler, B. (2020). Moving analytical ultracentrifugation software to a good manufacturing practices (GMP) environment. <i>PLOS Computational Biology</i>, <i>16</i>(6), e1007942. https://doi.org/10.1371/journal.pcbi.1007942</div>

    <div class="csl-entry">Stoutjesdyk, M., Henrickson, A., Minors, G., Demeler, B. (2020). A calibration disk for the correction of radial errors from chromatic aberration and rotor stretch in the Optima AUC<sup>TM</sup> analytical ultracentrifuge. <i>European Biophysics Journal</i>, <i>49</i>(8). https://doi.org/10.1007/s00249-020-01434-z</div>
    
    <div class="csl-entry">Zhao, H., Ghirlando, R., Alfonso, C., Arisaka, F., Attali, I., Bain, D. L., Bakhtina, M. M., Becker, D. F., Bedwell, G. J., Bekdemir, A., Besong, T. M. D., Birck, C., Brautigam, C. A., Brennerman, W., Byron, O., Bzowska, A., Chaires, J. B., Chaton, C. T., Cölfen, H., Schuck, P. (2015). A multilaboratory comparison of calibration accuracy and the performance of external references in analytical ultracentrifugation. <i>PLoS ONE</i>. https://doi.org/10.1371/journal.pone.0126420</div>
    
Good Manufacturing Practices (GMP) are a set of operating and instrument standards which dictate a processes control requirements and documentation. GMP environments provide assurances to the consumer and any regulatory agencies that:

a. best practices were followed;
  
b. results are validated, and can be audited;

c. quality standards are observed, and;

d. any risks are minimized throughout the procedure.

<span style="font-size: 20px";>GMP Obstacles in AUC</span>

Within the AUC lab, there are several issues that can be determined which affect the authenticity of data analysis procedures.

1. Human error can be found in the form of the manual process of sample handling and AUC cell loading. 
There is a certain dexterity that is required to achieve reproducible loading volumes, as well as proper alignment of cells in the rotor.

2. While the AUC is a highly sophisticated instrument, it comes with a large number of operational variable, which would need individual validation, before their effect on results can be minimized.

3. There is weakness in the chain of data custody. 
This impairs the audit trail, and can allow for potential manipulation/falsification of primary research data. 
For example, the traditional data acquisition software is disconnected from the analysis process,
and thus requires manual data transfer between multiple computers.

4. Traditional data acquisition is performed on undocumented software.
This software is often closed-source freeware, preventing any source code auditing, 
leaving no assurances for the users that the software follows any stringent GMP documentation requirements.

5. Important parameters are not routinely checked for consistency. 
Resolution information content is affected by: number of scans in the experiment, duration of experiment, loading volume, and column length. 
Loading concentration can affect the mass action of reversible systems and non-ideality parameters.
Chromatic aberration can cause incorrect radial reporting when recording wavelengths. 

6. Data quality is not checked for consistency. 
Data editing, analysis algorithms, and analysis parameters can be left up to an user to change at will. 
Data interpretation is affected by analysis parameters (grid size, grid resolution, edited data ranges, buffer corrections)
and hardware parameters (rotor stretch corrections).

7. Reporting is not an automated process. The processing of data is manual and based on a subjective interpretation of results. 
That interpretation does not necessarily include standard metrics for comparison
that can be automated and applied without user bias.

<span style="font-size: 20px";>Hardware Effects</span>

A recent multi-labratory study demonstrated the importance of accurate reference materials to provide improved validation for the AUC.[^Zhao2015] Accurate reference materials are also useful in that they will complement the resolution gains offered by modern analysis software. The following hardware components of the AUC instrument have been found to affect analysis results.

[^Zhao2015]: <div class="csl-entry">Zhao, H., Ghirlando, R., Alfonso, C., Arisaka, F., Attali, I., Bain, D. L., Bakhtina, M. M., Becker, D. F., Bedwell, G. J., Bekdemir, A., Besong, T. M. D., Birck, C., Brautigam, C. A., Brennerman, W., Byron, O., Bzowska, A., Chaires, J. B., Chaton, C. T., Cölfen, H., Schuck, P. (2015). A multilaboratory comparison of calibration accuracy and the performance of external references in analytical ultracentrifugation. <i>PLoS ONE</i>. https://doi.org/10.1371/journal.pone.0126420</div>

$\textbf{Rotor Speed}$

$\textbf{Recorded Time and Centrifugal Force Integrals}$

$\textbf{Radial Calibrations}$

$\textbf{Temperature}$

$\textbf{Optical Systems: Light Intensity, Alignment, and Focus}$

$\textbf{Chromatic Aberration}$

While investigating the accuracy of radial recordings made on the Optima AUC, it was noted that there was the presence of wavelength dependence on the radial positions collected as a result of chromatic aberration, a phenomenon related to the variability of refraction at different wavelengths.

$\textbf{Stretching or Contracting of the Rotor in Response to Speed Changes}$ 

What is rotor stretching and how do we know it is occuring? We noticed that the Lamm Equation was being solved with incorrect boundary conditions. Typically, we expect the bottom of the cell to be routinely held constant at the known position at rest. However, the absolute radial position of the sample cell was shifting. Finite element solutions of the Lamm Equation require accurate knowledge of the boundary consitions, which include the radial positions of the meniscus and bottom location ofthe sample cell. Any error in these boundary conditions, or the absolute radial positionscollected will affect the fitte values of the sedimentation and diffusion coefficients. This error propogates to the calculations of biomolecular attributes. Stretching or contracting of the rotor changes these boundary conditions, and thus must be known. Specifically, the titanium rotors, when spun at very high speeds, were stretching a finite amount, changing the boundary conditions of the experiment compared to those at rest or a different speed. 

![Adiabatic Temperature Graph](/img/temp-adiabatic.png){:style="float: right;margin-right: 20px;margin-top: 10px;"width="450"}

Consider the figure to the right: this is a temperture-time graph for a rotor spinning from rest to 60,000 RPM, resting for 15 mins, and then decelerating back down to rest.
Notice how there is a temperature decrease intially as the rotor accelerates; the acceleration period takes ~5 minutes. As the speed increases the rotor needs energy to stretch out and so it takes it from its environment. The chamber will notice this change and correct the temperature to the stated temperature. This correction occurs while to rotor spins at 60,000 RPM for 15 minutes. After this time has elapsed, the rotor spins down to rest and no longer needs the heat energy it took from the environment and so it releases it, causing an increases in temperature. Again, the chamber will correct for this change. The valley and peak have approximately the same area, and this change in temperature is adiabatic.


 

