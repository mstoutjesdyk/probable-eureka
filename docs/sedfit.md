SEDFIT analyses its samples completely indepedently. It assumes the efualts for all values, unless otherwise entered. It has a calculator utility, as well as SEDNTER.

Contains utility for model-independent analysis by van Holde-Weischet transformation. However, implementation is limited, as a smaller number of scans that satisfy strich requirements with low optical noise is necessary to generate distributions that are not dominated by experimental noise. This results in fewer boundary divisions, and fewer data sets for the vHW.

Contains options for various specific model types and weight-averaged integration of resulting values.

Model selection by the user allows for calculating sedimentatino coefficients or molecular weight distributions with a single $f/f_0$ for all species, two $f/f_0$, or multiple $f/f_0$, through countinous c(s), continuous c(s) with biomodal $f/f_0$, and continous c(s,$f/f_0$), respectively.

Can easily be constrained using prior sample knowledge. Models are included to test thermodynmic non-ideality, non-interacting species, etc.

May be preferable for analyses that are only concerned with sedimenation/molecular weight distributions, ignoring diffusion/shape.

Requires export of results into extension program SEDPHAT.


!!! note " Main Features of SedFit"

    * analysis for data from sedimentation velocity, dynamic light scattering, and sedimentation equilibirium experiments
    
    * continuous size-distributions c(s) with maximum entropy regularization
    
    * size-and-shape distriutions c(s,M)
    
    * Bayesian incorporation of prior for enhanced resolution of distributions
    
    * Lamm equation models for discrete non-interacting species, self-associating systems, non-ideal sedimentation
    
    * apparent sedimentation coefficient distribution ls-g*(s) and van Holde-Weischet analysis G(s) 
    
    * all sedimentatio celocity models for drect boundary modeling with algebraic noise elimination
    
    * corrections for water compressibility (and compressible organix solvents
    
    * continou size-distribution models for dynamic light scattering and sedimentation equilibirum
    
    * numerious statistical functions, loading options, and general purpose tools
    
    * extension to global analysis in SedPhat
    
    
SedFit Illustrations:

The main idea behind SedFit involves loading data from the entire sedimentation process, using stsytematic noise decomposition and subtratction, and modelling with finite element solutions of the Lamm equation.
    
As also described and shown [here](https://sedfitsedphat.github.io/sedfit_example.htm) and [here](https://sedfitsedphat.github.io/sedfit_example.htm), the following is an example of sedimentation velocity analysis using SedFit.
    
    
    
    
    
    
    
  