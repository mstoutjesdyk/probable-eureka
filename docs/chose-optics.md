How do you chose what optical system to use? The logistics of each optical system has already been discussed [here](/optics). 
Here, advantages and disadvantages of each system is presented, as well as some considerations to be aware of. 

The choice varies depending on your sample: what are the components? what is the concentration?

## Absorbance Optics

OPTICAL DENSITY: Boasts a lower limit of ~0.1 OD due to the low signal-to-noise ratio (optimal at 230 nm).

Generally should not be used for samples with an optical density above 1.0 OD. At that point, there may be non-linearity of the absorbance signal.

WAVELENGTHS:

Use lower wavelengths for small protein concentrations.

Protein extinction is usually 3-10 fold better when using 230 nm over 280 nm. Do not measure at concentrations above 0.9-1.0 O.D. Check extinction profiles of your sample.

In SV-AUC, do not change the wavelength mid-run. When measuring multiple concentrations at different wavelengths, perform multiple runs.

For DNA and DNA-protein complexes: scanning at 260 nm enables much lower sample concentrations, due to the high extinction profiles of DNA.

BUFFERS: 

Buffers should not absord, or only a very little. This requirement can mean that you must exclud strong UV-absorbing species such as DTT.

Always check aborbance again a water blank to confirm the level of baseline absorbance. Most of the signal should come from the sample, not the buffer. All together, both analyte and bufffer should not exceed the dynamic range of the detector.



INTENSITY VS ABSORBANCE MODE:
#### Measuring in Intensity Mode vs. Absorbance Mode
Cn be used to measure samples in the reference channel as long as the total OD is less than 0.5 OD to avoid resetting of PMT setting.

In general, fill centerpiece as full as possible (~0.46 ml), but leave some room above the meniscus to provide an air region for intensity referencing.

Requires time/radially invariant noise removal by fitting with [2DSA](/2dsa.md).

Reduces stochastic noise by a factor of the square root of 2.

Provides absolute intensity data to check instrument performance.

 When designing AUC experiments for UV optics it is highly recommended to measure in intensity rather than absorbance mode. Unlike absorbance data, intensity data is not convoluted with the random noise acquired in a reference measurement, producing better fits with lower RMSD values. In the process of collecting absorbance data in the Beckman XL-A, the reference channel data is subtracted from the sample channel data, thereby convoluting the random noise from the reference channel with the random noise from the sample channel. Whenever two noisy vectors are added or subtracted from each other, the noise level increases by the square root of 2, or a factor of ~ 1.4. The UltraScan software used in our laboratory is perfectly capable of accurately calculating the baseline levels of any experimental dataset using established algorithms, so a reference subtraction as done in absorbance experiments is no longer needed.

There are other advantages: In intensity mode both channels are scanned into separate datasets, making it possible to double the capacity of the instrument by using both channels for samples. There is only one catch: The OD in the reference channel must be less than 0.5 OD (as detected in a 1.2 cm pathlength cell), regardless of wavelength, to prevent a resetting of the photomultiplier gain set. If the total OD (including baseline absorbance compared to ddH2O) is less than 0.5 OD, the gainsets will not be changed. A gainset adjustment in the XLA during the experiment has important consequences: The data will be rescaled at a different scale, the baselines will shift, and the entire experimental data can no longer be globally analyzed in a single fit. Each dataset acquired at a different gainset needs to be analyzed separately (although the individual datasets can still be combined to be analyzed in a global fit). But this is tedious and inconvenient.

This limitation actually works in our favor: For many proteins it is interesting to study the protein at different concentrations. If a protein is reversibly self-associating, measuring a 0.3 and a 0.9 OD concentration under the same conditions will reveal mass action effects and tell us if the protein is self-associating. Hence, it is advisable to always measure at least two concentrations of each sample (0.3 and 0.9 OD, as measured in a standard 1.0 cm pathlength cuvette), with the 0.3 OD sample placed into the reference channel, and the 0.9 OD sample into the sample channel. 

####Advantages
Great for low concentrations of proteins or nucleic acids
Always good to measure at lower concentrations; molecules sediment and diffuse ideally, and you avoid concentration-dependent non-ideality.

Uses absorbance maximum.
Where do you get the most signal? Pick those wavelengths.

Flexible wavelength selection.

Second channel can be used another sample in intensity mode.

supports MWL-AUC on Optima.

####Disadvantages

Slow scanning speed (worse on XL-A). slit assembly motor is much faster than servo-motor.

Monochromator does not reset properly, so you can only use one wavelength (XL-A only)

Intensity variation as a function of wavelength (see [Xenon Lamp Maintenance](/maint.md)).

Sensitive to refractive artifacts causing distortions in radial position. Worse for higher refractive solutions.

Buffers should be non-absorbing

## Rayleigh Interference Optics
Has a lower sample concetration limit (~0.1 mg/ml) but can allow for the use of much more concentrated samples.

Will observe the signal for all buffer components; requiring the subtration of buffer components using reference samples.

#### Advantages
Great for samples with high refractive indices.

Fast scanning speed, measuring every 5 seconds.

No temporal distortion. One snapshot for each hole. Good for fast sedimenting samples.

high radial resolution, low stochastic noise

no buffer interference, allowing for arbitrary buffers to be use.
#### Disadvantages
Sensite to refractive index artifacts such as wiener skewing and lens effect
Use shorter path length or have lower concentrations to avoid wiener skewing.

Exact meniscus match required between buffer channel and sample channel to measure refractive index differences.

Sample must be dialyzed or column purified. Buffer components may sediment and change the concentration over time of the cell, and adds a singal.

Lower capacity: second channel cannot be used for a seperate sample. Only 3 cells for An-60,  7 cells for An-50. Needs counterbalance.

## Fluorescence Optics (488 nm)

Generally enhances the dynamic rane by extending into the low end of sample concentration into the low nano molar, depending on labeling efficiency and fluorophore quantum yield.

the minimal FDS power setting still enable the use of low-micromolar concentrations

Zhao et al 2014 report that fluorescent optics can provide uable data for concentrations as low micro-molar.

LABELING REQUIREMENTS: fluorphores with 488-nm exitation maxima are ideal to use, but other dyes can be used if they have higher final concentrations for producing a singal equivalent to samples with the 488-nm excitation maxima.

When labing native functional groups, make sure that its behavior is equivalent to that of the unlabelled protein.
#### Advantages
Exquisite selectivity to measure tagged molecule and can be used against an impure background

Very high sensitivity (down to pM concentrations)

No refractive artifacts

Fast scanning speed (all cells and channels are scanned simultaneously)

No buffer interference

Great for hetero-interactions, in-vivo studies, GFP fusions proteins.
#### Disadvantages
Relatively high stochastic noise

Most samples must be tagged by a fluoropore.
