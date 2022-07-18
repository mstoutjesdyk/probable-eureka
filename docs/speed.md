# Speed and Duration



For a starting point, you can use either UltraScan or SEDFIT to simulate the sedimenation data for varying masses and shapes of molecules.

Remember that using the fastest rotor speed possible will give the best resolution for the sedimentation coefficient, and using slower rotor speeds increases the resolution of the diffusion properties. Of course, you can conduct multiple experiments at various speeds in order to thouroughly characterize the sedimentation data. However, overall, rotor speed should be selected with the purpose of acheiving the fastest sedimentation rate while still allowing for boundary spreading.

For example:

- Molecules between 50kDa to 3MDa: 20,000 < RPM < 60,000

- Molecules between 150 kDa and 200 kDa, WITH 1.5 < $f/f_0$ < 2: 30,000 < RPM < 45,000

Depending on the information that is being measured from a sample, the choice of speed will be a compromise between maximum resolution and the accurate determination of the diffusion coefficients.



Correira and Stafford proposed the following rule of thumb for choosing rotor speed. This is specifically for situations when you want to determine the molar mass from both $s$ and $D$. First, let

$$
\sigma \equiv \frac{\omega^{2}s}{D} = \frac{M(1-\bar\nu\rho)\omega^{2}}{RT}.
$$

We can multiple $\sigma$ by $1 = t/t$ to get:

$$
\sigma = \frac{\omega^{2}st}{Dt}.
$$

We also have that $\omega^{2}st =\text{ln}(r/r_{m})$, and we have the mean squared distance moved by diffusing particles is given by $\bar x^{2} = 2Dt$. Therefore, $\sigma$ for a velocity run will give the optimal determination for both the sedimentation and diffusion coefficients for a single species. That is,

$$
\sigma = \frac{\text{ln}(r/r_{m})}{0.5\bar x^{2}}
$$