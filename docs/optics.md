The data collected from an AUC is a record of the concentration distribution, with the more direct method involving a set of concentration measurements at different radial positions and at given times. For solutes that obey the Beer-Lambert law, detection can be done by measurig the absorbance of the sample at a given wavelength at fixed positions in the cell.

![](/img/AUC-instruments.jpg)

!!! warning "Classes of AUC Detectors"

    1.  UV/Vis absorption optics
    
    2. Fluorescence
    
    3. Interference
    
    4. Turbidity/ Light Scattering

## Absorbance 

The basic principle of absorption optics is described by the Beer-Lambert Law:

$$
A = \log{\frac{I_{0}}{I}} = \epsilon c a,
$$

where $A$ is the absorption, $I$ is the intensity of light, $\epsilon$ is the specific decadic absorption coefficinet, $c$ is the concetration of the sample, and $a$ is the optical path length.

!!! warning ""

    ![](/img/uv-abs-optics.png){width="800"align=center}
    
    Ralston G (1993) Introduction to analytical ultracentrifugation. Beckman Instruments, Fullerton, C

The absorbance optics in the Beckman Coulter AUCs use high-intensity xenon flash lamps that allow for the use of wavelengths ranging from 190 nm to 800 nm. The lamp is fired briefly as the sector passes the detector. A slit below the sample allows for samling of different radial positions. Multiple readings at the same position can be collected and averaged, minimizing noise.
The triggering of the lamp is based on the exact measurement of the actual rotor speed, which is realized by a Hall-effect sensing devices based on the over-speed disk on the bottom of the rotor. As the over-speed disk passes a sensing device, an electrical signal is induced. The position of the cell, and that of the cell sector, can then be determined. The duration of a single fash is about 2 -3 $\mu$s, and with a maximum shot frequency of 100 Hz, the flash lamp can flash every ten revolutions at the maximum speed of 60,000 rpm.

The apperature of the lens-slit assembly determines radial resolution. It moves using a step-motor (XLA) driven by a motor. The step width, $\Delta$r can be adjusted is necessary. The lens focuses the light on the photomultiplier tube, which measures the intensity of light passing through the measuring cell. 

The camera lens of the lens-slit assembly creates an image of a slice of constant radius. Another aperature at the bottom of the lens-slit assembly reduces the stray light.


Samples can be examined in concentrations that are too dilute for systems such as Schlieren optics. This accessability to lower concentrations means that one can now examine stronger interactions, $K > 10^{7}$ M$^{-1}$.

DRAWBACKS: duration of measurement; Wiener skewing


## Fluorescence

Fluorescense optics generally use ~4000 um for the standard 12-mm centerpeices, and ~6000 um for the 3-mm centerpeices.


## Rayleigh Interference Optics

This technqiue relies on the fact that the velocity of light that is passing through a region of higher refractive index is decreased.

Monochromatic light passes through two fine parallel slits. Each one is below each sector of a double sector cell. As the light waves emerge from the enterence slits and pass thrugh the sectors, they undergo interference to yield bands of alternating dark and light fringes. When the samples refractive index is higher than the reference s refractive index, its light wave is be slower relative to the references light wave. As a reult, the positions of the fringes will be shifted vertially, proportional to the concentratio differences relative to that of some reference point.
If the concentration of a reference point is known, we can determine the concentration at any other point:

$$
c_{r} = c_{r,ref} + a \Delta j,
$$

where $\Delta j$ is the vertial fringe shift, and $a$ is some constant that relates the concentration to the fringe shift.

## Schlieren Refractometry

Here, light passing through a region of the cell where concentration is changing will be deviated radially. The Schlieren optical system will convert this radial deviation into a vertial displacement of an image. This displacement is proportional to the concentration gradient (and the refractive index). A reference channel is necessary to determine where light is not radially deflected. 
