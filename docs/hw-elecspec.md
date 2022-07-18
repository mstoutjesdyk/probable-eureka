This page is still under construction and solutions have not been confirmed.

### Absorbance Calculations

2-Aminopurine (2AP) in a pH 7, 0.1M KCl solution has a 303 nm molar extinction coefficient
of 6 000 M$^{−1}$ cm$^{−1}$ . What is the absorbance of 1 mM and 0.1 nM 2AP when measured in a
cell with a 1 mm pathlength?

!!! danger ""
    
    We will be utalizing the Beer-Lambert Law, which states
    
    $$
    A = \text{log}~\left( \frac{I_0}{I} \right) = \epsilon l c
    $$
    
    where $A$ is the absorbance, $I$ is the intensity of light passing through the solution, $\epsilon$ is the molar absorption coefficient, $l$ is the length of the solution the light will pass through, and $c$ is the concentration of the solution.
    We are given the following information.
    
    $$
    \epsilon_{303} = 6000~\text{L/mol cm};
    $$
    
    $$
    l = 0.1 ~\text{cm};\\
    $$
    
    $$
    c = 1 ~\text{mM}, 0.1 ~\text{nM}.
    $$
    
    In our first case where the 2AP has a concnetration of 1 mM:
    
    $$
    A = \left(6000 ~\text{L/mol cm}\right)(0.1 ~\text{cm})\left(0.001~ \text{mol/L}\right)
    $$
    
    $$
    A = 0.6
    $$
    
    For the case of 0.1 nM:
    
    $$
    A = \left(6000 ~\text{L/mol cm}\right)(0.1 ~\text{cm})\left(1 \times 10^{-10} ~\text{mol/L}\right)
    $$
    
    $$
    A = 6.0 \times 10^{-8}
    $$
    
    These calculations demonstrate the linear relationship of the Beer-Lambert Law; as concentration decreases, absorbance will decrease proportionally.
    
### Raman Scattering vs. Fluoresence

Describe a way (either steady-state or time-resolved) to distinguish Raman scattering from
fluorescence.

!!! danger ""

    ![](/img/ground-state.png){width="250"height="300"align=right}
    
    Using ladder and Feynman diagrams for fluorescence (F) and Raman Scattering (R).
    
    We define the ground state by $\ket{1}\bra{1}$, the vibrationally excited state (VES) by $\ket{2}\bra{2}$, and the electroniclly excited state (EES) by $\ket{1'}\bra{1'}$.
    
    Generally, both fluorescence and Raman scattering can be explain in two interactions, as shown in the figure on the right.
    There will be some incident light, $\omega_1$, which will excite an electron from the ground state to the EES. Spontaneous emission occurs in the form of $\omega_2$ when there is a transition from the EES to the VES. in fluorescence, $\omega_2$ can be refered to as the fluorescence frequency; in Raman scattering, $\omega_2$ is known as the scattered frequency. Note that in both fluorescence and Raman scattering, the direction of $\omega_2$ will be random (the phton will be emitted in all directions in space).
      
    The figures directly below is a representation of four interactions in the form of ladder diagrams and Feynman diagrams.
    To help with understanding these diagrams, reference this table:
    ![](\img\notes-diagrams.png){width="800"align=right}<br>

    For Raman scattering specifically, we have intensities, $\omega_1, \omega_2$, which are sometimes referred to as the 'pump' and 'probe', respectively. The order of interactions are:
    
    $$
    \omega_1 \rightarrow \omega_1^* \rightarrow \omega_2 \rightarrow \omega_2^*
    $$
  
    During stimulated Raman emission, these interactions essentially amoun to losing the 'pump' photon and gaining a 'probe' photon.
    
    For fluorescence, the order of interaction is:
    
    $$
    \omega_1 \rightarrow \omega_2 \rightarrow \omega_1^* \rightarrow \omega_2^*
    $$
        
    !!! danger ""
    
        ![](/img/ladder.png){height="350"}
    
    We know that if the energy of a photon is greater or equal to the differene between the ground state and the excited state (it is resonant with a molecular transition), the molecule can absorb that photon and undergo a transition. In this excited state, the molecule has several options:
    
       - it may lose some or all of its energy in an interaction with another molecules;
    
       - it may fall apart if the extra energy is too much, or;
       
       - it may emit the extra energy as a photon.
        
    This last case is known as fluorescence and is the result of that resonant process.
    
    Raman scattering, on the other hand, is not a resonant process. Rather, the energy of the photon is not of particular importance. A molecule will recieve EM radiation and re-radiate it This will typically be at the same energy needed for Rayleigh scattergin. Sometimes some of the energy is stored as molecular vibrational energy, and if the molecule is already in an vibrationally excited state, the energy will be emitted as a photon, with the scattered light seeing a shift in the wavelength from its incident EM radiation. This is demonstrated below.
    
    !!! danger ""
    
        ![](/img/feynman.png){width="700"height="400"}
        
    We can therefore seee that there is incident light in the form of $\omega_1$ acting on the ket bind to turn the $\ket{1}$ coherence into the $\ket{1'}$ EES coherence. The imaginary component, $\omega_1^*$, is emitted to turn the $\ket{1'}$ coherence into the VES coherence, $\ket{2}$. The state at this point is now $\ket{2}\bra{1}$. There is no population of the EES. Instead, there is coherence between the two VESs, $\ket{1}\bra{1}$ and $\ket{2}\bra{2}$.
    
    Lorem Ipsum...
    
    Additionally, it may be useful to think of these situations in their density matrix representations. For fluorescence and Raman scattering, respectively, we have:
    
    $$
    \hat\rho_F = \ket{1}\bra{1} \rightarrow \ket{1'}\bra{1} \rightarrow \ket{1'}\bra{1'} \rightarrow \ket{2}\bra{1'} \rightarrow \ket{1}\bra{1}
    $$

    $$
    \hat\rho_R = \ket{1}\bra{1} \rightarrow \ket{1'}\bra{1} \rightarrow \ket{2}\bra{1} \rightarrow \ket{2}\bra{1'} \rightarrow\ket{1}\bra{1}
    $$
    
    Note that there is only one difference betweeen the F and R density matrices in the fourth matrix element. For fluorescence, this element implies no vibrational coherence with a total population of the EESs. For Raman scattering, this element implies coherence between the VESs, and no populations of the EESs.
    
### Fluoresnce Emission Spectrum of Proteins
Using an excitation wavelength of 295 nm, you can measure the fluorescence emission spec-
trum of a protein, which binds to DNA depending upon the concentration of the small
nucleotide cyclic adenosine monophosphate (cAMP). The protein has a single tryptophan
and one tyrosine and forms a dimer at saturating concentrations of cAMP.

1. Please explain the following observations:

    (a) In the native, ligand-free state (i.e., no cAMP and no DNA), the fluorescence
emission has a maximum at 330 nm.
 
    (b) When cAMP is bound, the emission maximum shifts to 325 nm.
 
    (c) When the protein is folded in 8 M urea, the emission maximum shifts to 350 nm.

2. Suggest one or two experiments to test your explanations.

!!! danger ""

    First, let us discuss tryptophan (Trp) and tyrosine (Tyr). Trp is more fluorescence
    compared to Tyr. Its fluorescence properties are solvent dependent, in that the spectrum will
    shift to shorter wavelengths, and increase in intensity, as the polarity of the solvent decreases.
    Tyr is excited at similar wavelengths as Trp, but will emit at different wavelengths. Tyr is
    also less fluorescent than Trp. At 280 nm, both Trp and Tyr will be excited; to excite Trp
    only a wavelength of 295 nm is needed. Now, in the native folded state, both Trp and Tyr will
    be generally located in the core of the protein. In the unfolded state, or partially folded state,
    Trp and Tyr will become exposed to the solvent. Therefore, we can make the assumption
    that in the native, ligand-free state the fluorescence emission has an emission peak at 330 nm
    due to the fact that Trp and Tyr are both in the hydrophobic environment of the protein. In
    this medium, the relative polarity is low. When Trp and Tyr are moved into a hydrophilic
    environment due to binding of cAMP, for example, the relative polarity shifts to medium
    or high. This shift in polarity lowers the emission wavelength. For the situation where the
    protein is folding in 8 M urea, there will be denaturing of the proteins, such that hydrophobic
    parts will become exposed. Essentially, the urea will cause the proteins to fold more loosely,
    which will effect the emission wavelength by increasing it.
    
    For experiments, I propose determining the level of polarity of each of the situations, since I
    made the assumption that the polarity was the main factor affecting the emission maximum.
    Additionally, I would suggest determining the emission spectrum at different concentrations
    of cAMP.

### Fluoresence Correlation Spectroscopy Curves
The cAMP-binding protein in the presence of saturating concentrations of cAMP forms a
dimer that can bind to a specific site on a 100 base-pair DNA oligo (K d = 2 nM). You decide
to study the protein-DNA interaction using fluorescence correlation spectroscopy (FCS). You
can generate a single Cys mutant and label it with Alexa-488- a small fluorophore excited by
488-nm light. Draw and label FCS curves appropriately scaled for the following situations:

1. Diffusion of 5 nM protein dimer (saturating cAMP).

2. 5 nM dimer + cAMP after the addition of 100 nM DNA (100 base-pair oligo with
specific dimer site).

3. Diffusion of 1 nM dimer (saturating cAMP).

4. 1 nM dimer + cAMP after the addition of 100 nM DNA (100 base-pair oligo with
specific dimer binding site).

!!! danger ""

    In fluorescence correlation spectroscopy (FCS), changes in the fluorescence in-
    tensity reflect concentration fluctuations. The auto-correlation of a system evaluates the
    temporal progression around the system’s equilibrium, and reveals the time required for
    a molecule to diffuse through a particular volume. The amplitude of the auto-correlation
    function is influenced by the number of molecules that are detectable. The auto-correlation
    function can consist of multiple sigmoid components due to multiple signal fluctuations on
    different time scales.
    
    Slow fluctuations of fluorescence intensity demonstrate a slow diffusion over a longer time
    scale; rapid fluctuations indicate a faster diffusion over a shorter time scale for a particle with
    a large diffusion coefficient. Essentially, an increase in the diffusion coefficient will correspond
    to a decrease in the time scale for the auto-correlation function to fall by half.
    FCS can be used to monitor binding. Because there is more than one species within the
    solution, we should expect two sigmoid components, one for the free molecules, and one for the
    bounded molecules. We should also consider that since the amplitude of the auto-correlation
    function depends on the inverse of the average number of molecules. Thus, we should expect
    that a FCS curve for the situation with only protein will have a greater amplitude than the
    situation with dimer and DNA.

    !!! danger ""
        <figure markdown>
        ![](/img/fcs-13.png)
        <fig caption>FCS curves for situations 1 (blue) and 3 (black). Since the amplitude of $G(\tau)$ depends on $1/N$, we should expect to see the situation with 1 nM dimer to have the greatest amplitude. 
        </fig caption>
        </figure>
        
    !!! danger ""
        <figure markdown>
        ![](/img/fcs-24.png)
        <fig caption>FCS curves for situations 2 (blue) and 4 (black). Since there are 3 species present (protein dimer, cAMP, and oligo), we should expect to see three sigmoids.
        </fig caption>
        </figure>

### Fret Relationships

![](/img/fret-relation.png){width="300"align=right}

Assume that a FRET donor D
has a single exponential decay in the absence of ac-
ceptor A and that the orientation factor is $κ_2$ = 2/3.
Draw fluorescence decay curves (log of intensity vs
time) for the following situations (label and provide
explanations):

1. D to A distance = $R_0$ ; r = $R_0$ .

2. D to A distance >> $R_0$ ; r = 1.5$R_0$.

3. D to A distance << $R_0$ ; r = 0.5$R_0$.

(Figure was taken from ["Basics of FRET Microscopy"](https://www.microscopyu.com/techniques/fluorescence/basics-of-fret-microscopy.com).)

!!! danger ""
    
    Fluorescence resonance energy transfer (FRET) involves a donor molecule in an excited electronic state and an acceptor molecule that can accept the transferred excitation energy from the donor, typically through dipole-dipole coupling.
    The dipole-dipole coupling can be described as an interaction dependent on the overlap of the emission spectrum of the donor molecule, and the absorption spectrum of the acceptor molecule. This overlap is represented by the figure on the right, and it dictates if there will be an energy transfer between the molecules.
    
    The energy transfer efficiency between the two molecules will decrease proportionally to the distance, $r$, that is seperating them.   
    The rate of energy transfer is:
    
    $$
    k_r = \frac{1}{\tau_D}\left(\frac{R_0}{r} \right )^6
    $$
    
    where $\tau_D$ is the donar lifetime in the absence of the acceptor, and $R_0$ is the Forster distance.
    
    FRET efficiency is:

    $$
    E_{FRET} = \left[1 + \frac{r}{R_0}\right]^{-6}
    $$

    Now, the relative distances between the donors and acceptors is not uniform; rather, it follows the following distribution function:

    $$
    E_{FRET} = \int_{0}^{\infty}{f(r)} \left[1 + \frac
    {r}{R_0}\right]^{-6} dr
    $$

    where $f(r)$ is the normalized distribution of the donor-acceptor distances.
    Finally, the intensity of the fluorescence for detected excited molecules can be expressed by:
    
    $$
    I(t) = k \int_{0}^{\infty}f(r) ~\text{exp}\left[-\frac{t}{\tau} - \frac{t}{\tau}\left(\frac{R_0}{r} \right)^6 \right ]
    $$

    Using this equation, we can determine the fluorescence decay curves, shown below. For simplicity, we assume $k=1$, and $f(r) = 1$. We will also set $x=t/\tau$ amd $d = R_0/r$, such that:
    
    $$
    f(x,d) = ~\text{exp}(-x-xd^6),
    $$
    
    which can then be ploted for the varying D values.
    
    (See also: A. Grinvald, E. Haas, and I. Z. Steinberg, Proc. Nat. Acad. Sci. USA 69, 2273 (1972).)
    
    !!! danger ""
        <figure markdown>
        ![](/img/decay-curve.png)
        <fig caption>Fluorescence decay curves for varying donar-acceptor distances ($d= R_0/r$). When the donor to acceptor distance $r$ is greater than $R_0$, we find that the (blue) curve is less steep. For the distance to be less than $R_0$, such that $d=2$, we find that the (green) curve descends rapidly. 
        </fig caption>
        </figure>
    
    !!! danger ""
        <figure markdown>
        ![](/img/semilog-decay-curve.png)
        <fig caption>Semi-log plot of fluorescence decay curves for varying donar-acceptor distances. The intersection between $1/x$ and the other curves will give the characteristic lifetime.
        </fig caption>
        </figure>
    