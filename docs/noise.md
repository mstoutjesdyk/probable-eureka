<br> 
MS: &#x2717; 
<br> 
BS: &#x2717; 

# Noise Considerations

Our modeled solution will be affected by random noise, time-invariant noise, the available signal, and its ratio to the random noise. How then can we deal with the uncertainty of our solutions resolution? 


First, we can improve the signal to noise ratio. This can be done by: 

1. Obtaining lots of high-quality data 

2. Exploiting the entire dynamic range of the acquisition system 

3.  Reducing noise and only using a well-functioning instrument 

4. removing systematic noise from experimental data   

Additionally, we can: 

* Replace fitting parameters with experimentally determined values from separate experiments 

* Explore the parameter space with a grid method, then parsimoniously regularize solution with GA, and use Monte Carlo to explore confidence regions 

* Perform global fits for multiple experimental conditions to improve signal  

There are three ways to reduce or eliminate noise to reduce the number of solutions. 

1. Fit the noise. 

2. Maintain an exceptionally well-tuned instrument. 

3. Design your experiment to optimize the quality of data. 

# <span style="font-size:20px";>Types of Noise </span>

There are at least three types of noise to consider when performing SV-AUC experiments:[^1] 

![](img\noise\timein-noise.png){width="300"align=right} 

1. <u>Time-invariant noise</u> which produces a constant offset at a fixed radial position, and is identically valued at every observation. This type of noise is caused by imperfections in the optical track; for example, a fingerprint or scratch on a sample cell window. 

![](img\noise\radialin-noise.png){width="300"align=right} 

2. <u>Radially-invariant noise</u> which has a constant offset at a fixed time, and has identical values at every radial position. 

3. <u>Normally distributed noise</u> from non-linearity in the optics, intensity fluctuations of the lamp flashes, refractive artifacts, and systematic contributions of unknown sources.![](img\noise\random-noise.png){width="300"align=right} 

[^1]: Emre H. Brookes and Borries Demeler. 2010. Performance optimization of large non-negatively constrained least squares problems with an application in biophysics. In Proceedings of the 2010 TeraGrid Conference (TG '10). Association for Computing Machinery, New York, NY, USA, Article 5, 1??9. https://doi.org/10.1145/1838574.1838579 

  
# <span style="font-size:20px";> Fitting Noise </span> 

![](img\noise\quality-fit.png)   

![](img\noise\adding-noise.png) 

![](img\noise\subtract-noise.png) 

SedFit uses an algebraic noise decomposition strategy based on direct least-squares modelling. There is no increase in the statistical noise, and you can obtain explicit estimates for the magnitude of the systematic noise components. However, there are two limitations to keep in mind when using this method of systematic noise decomposition: 

1. Calculated systematic noise is an estimate and model dependent.  

We can only assume the calculated noise to reflect a true baseline signal if we have a good fit for our sedimentation data. 

2. There is no fundamental difference in the effect of systematic noise on the data analysis from a time-difference analysis. 

Fortunately, for larger data sets, the baseline is usually well-determined, and so the issues described above are not largely problematic. 

# <span style="font-size:20px";>TI Noise in TI Signals</span>

*** Work on this matter is being done by Saeed Mortezazadeh, post-doctoral fellow at the University of Lethbridge. *** 

When performing equilibrium experiments, it is not possible to distinguish the time-invariant noise patterns from the signals due to the balancing of the sediment flux with the diffusion flux (Fick's Laws). 

Solution 1: run empty cells and collect the intensity data patterns of each radial point and wavelength. The volume of the data collected must be significant (due to the presence of statistical noise in each scan) so that a time-invariant pattern can be averaged over all scans. 

It is important to note that while the AUC Optima claims to emit light with a one nanometer resolution over a 190 nm to 700 nm range, different patterns can be observed in both the shape and intensity of scans. This is especially prevalent at lower wavelengths and it seems that the monochromatic optical system does not completely split the light, and as a result, the light emitted at a particular wavelength can be partially mixed with neighboring wavelengths.   

The intensity of each scan is calculated by averaging the intensity of all radial points: 

$$ 
\hat I = \frac{1}{N}\sum^{N}_{i=1} I (R_{i}). 
$$ 
 

The root mean square deviation (RMSD) is calculated to quantify the shape of each scan: 

$$ 
\text{RMSD} = \sqrt{\frac{1}{N} \sum^{N}_{i=1}(I(R_{i}) - \hat I)^{2}}. 
$$ 

The mean and RMSD overlap of scans are clearly visible between neighboring wavelengths. 

How do we determine which scan belongs to which wavelength? 

1. Calculate the histogram (probability distribution function) of the RMSD values for each wavelength using the core density equilibrium method. 

2. Scans with similar scans are consider to be in a cluster; histograms are used to cluster scans of all wavelengths. 

3. The main scans of corresponding scans are assumed to be the scans belonging to the cluster with the highest probability distribution.  

4. If the non-original clusters overlap with the main cluster of adjacent wavelengths, the corresponding scans are transferred to the adjacent wavelength. 

The procedure for this method is imbedded in UltraScan, and the steps are outlined here. 

  

  

  

 

 