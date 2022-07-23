# Sedimentation Equilibrium 

<figure class="video_container">
<iframe id="embed-iframe" allowTransparency="true" allow="encrypted-media *" allowfullscreen height="415" width="460" border="0" scrolling="no" frameborder="0" marginwheight="0" marginwidth="0" src="https://www.jove.com/embed/player?id=52404&t=1&s=1&fpv=1" ><p><a title="Sedimentation Equilibrium of a Small Oligomer-forming Membrane Protein: Effect of Histidine Protonation on Pentameric Stability" href="https://www.jove.com/v/52404/sedimentation-equilibrium-small-oligomer-forming-membrane-protein">Sedimentation Equilibrium of a Small Oligomer-forming Membrane Protein: Effect of Histidine Protonation on Pentameric Stability</a></p></iframe>
</figure>

!!! danger ""

    This page is based on the research presented in:
    
    Cole et al. Methods Cell Biol. 2009. Section IX: Sedimentaiton Equilibrium
    

Remember that SE does not have the resolving power of SV experiments. While the advantage of using a sedimentation equilibrium (SE) experiment is that is removes all hydrodynamic effects, allowing for purely thermodynamics analysis, SE has higher and stricter requirements for sample purity and homogeneity. Therefore, it is critical to charaterize samples by SV prior to SE. 

# Experimental Design

SE expereiments can use three different centerpiece styles.

<u> Short-Column</u>
    
- Capacity: 8 channels for holding four sample-reference pairs. 
    
- Volume: Each channel holds 15 $\mu$L for a colum height of 700 - 800 $\mu$m. 
    
- Time: It will reach equilibrium within two hours.[^Yphantis1960]

- Use: rapid survays over range of concentrations/conditions.[^Laue1992]

<u> Long-Column</u>
    
- Capacity: 6 channels for holding three sample-reference pairs. 
    
- Volume: Each channel holds 130 $\mu$L for a colum height of 300 $\mu$m. 
    
- Time:

- Use: determining molecular weights, self-associations, hetero-associations, etc.

[^Laue1992]: 

[^Yphantis1960]:

When characterizing a system over a wide range of concentrations, it is recommended to use 1:1, 1:3, and 1:9 dilutions for the long column centerpeices, and 1:1, 1:2, 1:4, and 1:8 dilutions for the short column centerpeices. The highest concentration sample should be loaded closest to the rotor center and the most dilute sample furthest away. This allows for a greater gravitational effect on the dilute sample, and it minimizes concentration gradients in the most concentrated sample.

It is usually not important to allow for a temperature equilibration period before spinning the rotor in SE expereiments. 

## Rotor Speed

It is recommended (for standard 3 mm column heights) to choose a speed such that $\sigma$ ~ 2 cm$^{-2}$for the monomer. Furthermore, for a typical protein, the speed can be estimated by the following equation:

$$
\text{RPM} \approx (4 \times 10^6)\sqrt{(1/M)}.
$$

For typical experiments, you should produce data at three or four speeeds usng 1.2-fold or 1.5-fole intervals between each spped, with the protocol going from the lowest speed to the highest, allowing for the system to reach equilibrium in a reaonsable time frame.

## Time to Reach Equilibrium

The time to reach equilibrium depends on a number of factors:

* mass 

* shape

* solvent viscosity

* distanec between meniscus and base (column height)

Additionally, this time may be extended by slow association and disassociation rates. Remember that slow aggregation can cause a loss of material in successive scans and  prevent reaching equilibrium. Other problems include sample hydrolysis or denaturation.
To avoid this, some samples can be stabalized using alternate buffer compositions, adjusting the temperature, or changing the protein construct. You can also adjust the column heigh to achieve rapid equilibrium.

# Analysis

## Non-Linear Least Squares

The model for single ideal species is typically:

$$
S(r,\lambda) = \delta_{\lambda} + \epsilon_{\lambda}c_{0}~\text{exp}\left[\frac{M_{b}\omega^{2}}{RT}\left(\frac{r^{2} - r^{2}_{0}}{2} \right) \right]
$$

where $S(r,\lambda)$ is the signal, whether absorbance, fringe displacement, or fluorescence, at a radius $r$ and wavelength $\lambda$, $\delta_{\lambda}$ is the wavelength-dependent baseline effect, and $\epsilon_{\lambda}$ is the extinction coefficient.