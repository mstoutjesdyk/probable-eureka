<span style="font-size: 30px";>Sedimentation Velocity Analysis Flowchart</span>


## <span style="font-size: 26px";> 1. Import Experimental Data</span>

## <span style="font-size: 26px";> 2. Edit Data</span>



## <span style="font-size: 26px";> 3. Time Derivative Analysis</span>

This step will provide an range for the sedimentation coefficient for use in the upcoming analysis steps. 

1. Open [<span style="color:#00008B";>Velocity: Time Derivative</span>](/velocity-timederiv) and select <span style="color:#00008B";> Load Experiment</span> to load the experimental data.

2. Adjust analysis controls:
    
    Set <span style="color:#00008B";>Data Smoothing</span> to ~ 10.

    Set <span style="color:#00008B";>Boundary Pos (%)</span> to 0.

    Create an <span style="color:#00008B";>Exclusion Profile</span> for scans that do not exhibit a stable upper plateau.

    Select <span style="color:#00008B";>Average S</span> to plot the dc/dt S-value distribution (default setting).

    Adjust <span style="color:#00008B";>S-value cutoff</span> as needed.

The correct S limits to choose are the left and right limits of the S-value distribution where all signal returns to baseline. The minimum S-value allowed is 0.2 S.


## <span style="font-size: 26px";> 4. 2DSA: Fit Time Invariant Noise</span>

This step can be done locally on UltraScan's 2DSA module, but the following assumes the use of the USLIMS site.

1. Log into the [<span style="color: #006400";>US3 LIMS portal</span>](https://uslims.uleth.ca) and navigate to <span style="color: #006400";>Analysis: Queue Setup.</span> 

2. <span style="color: #006400";>Load the Dataset.</span>

3. Setup 2DSA Control

    a. <span style="color:#006400";>Set the $s$-value Limits</span> from the range obtained in Step 3.

    b. <span style="color:#006400";>Set $f/f_{0}$ Limits</span> to 1-4 or adjust the upper limit based on prior knowledge of the sample.

    c. <span style="color: #006400";>Set the Resolution.</span> The default for both $s$ and $f/f_{0}$ is 64. The resolution is the number of points into which this variable will be discretized. For example, if the range is selected from 1-5, and the resolution is set to 40, there will be 10 grid points/$s$-value, resulting in an increment of 0.1 S.

    d. <span style="color: #006400";>Set the Grid Resolution.</span> The default resolution of 64 will be sufficient for most situations. When you have a very poly-disperse or heterogeneous sample you may have to go higher. Larger values will increase compute time. A good strategy is to check if there are noticeable jumps in the fit. If there are, increase the resolution. If you are trying to fit a bi- or tri-modal system, you may be able to get a higher resolution by using the custom grid method, and use the appropriate resolution for each grid.

    e. Select <span style="color: #006400";>Fit Time Invariant Noise.</span>
    
    f. Leave all other settings at default values.

4. <span style="color: #006400";>Submit the Job</span> to your desired cluster. <span style="color: #006400";>Check Queue Viewer</span> for job completion.
    
5. Open [<span style="color: #00008B";>Velocity: FE Model Viewer</span>](/velocity-femodel) to confirm the results. <span style="color: #00008B";>Load the Dataset</span> of the newly generated time invariant noise file. The file will be of the format "2DSA.run_name". Remember to <span style="color: #00008B";>Save Results.</span>

If random residuals are obtained, proceed with step 5, but if residuals do not look random, and a strong diagonal line in the residual bitmap is apparent, investigate range settings for S and f/f0 settings and repeat 2DSA with improved ranges.
   
Note: Do not set the lower s-value limit too low, as this could create artificially low-s species signal if a baseline or slowly changing baseline exists. These artifacts are better handled in the time invariant noise. 



## <span style="font-size: 26px";> 5. 2DSA: Fit Meniscus, TI Noise, RI Noise</span>

1. Log into the [<span style="color: #006400";>US3 LIMS portal</span>](https://uslims.uleth.ca) and navigate to <span style="color: #006400";>Analysis: Queue Setup</span> to <span style="color: #006400";>Load the Dataset.</span> By default, it will load the dataset that was saved from the previous step.

2. Setup 2DSA Control

    a. <span style="color:#006400";>Set the $s$-value and $f/f_{0}$ Limits.</span> Use the same range settings as in Step 4.

    b. <span style="color: #006400";>Set the Resolution</span> and <span style="color: #006400";>Set the Grid Resolution.</span> 

    c. Select <span style="color: #006400";>Fit Time Invariant Noise</span> and <span style="color: #006400";>Fit Radially Invariant Noise,</span>

    d. Select <span style="color: #006400";>Fit Meniscus</span>. The fitting should occur over 0.03 cm with 10 points.

4. <span style="color: #006400";>Submit the Job</span> to your desired cluster. <span style="color: #006400";><u>Check Queue Viewer</u></span> for job completion.

5. Open [<span style="color: #00008B";>Utilities: Fit Meniscus.</span>](/utilities-fit) 

6. Click on <span style="color: #00008B";>Scan Database</span> (if using the database) and check the status line for new results. 

7. Go to <span style="color: #00008B";>File: Load</span> to load the desired meniscus fit.

8. After updating the meniscus, <span style="color: #00008B";>confirm the deletion</span> of the scans that resulted in non-optimal RMSD values. 

9. Open [<span style="color: #00008B";>Velocity: FE Model Viewer</span>](/velocity-femodel) to confirm the results. <span style="color: #00008B";>Load the Dataset</span> by selecting the file of the format "2DSA.FM.run_name". Remember to <span style="color: #00008B";>Save Results.</span>


## <span style="font-size: 26px";> 6. 2DSA: Iterative</span>

1. Log into the [<span style="color: #006400";>US3 LIMS portal</span>](https://uslims.uleth.ca) and navigate to <span style="color: #006400";>Analysis: Queue Setup</span> to <span style="color: #006400";>Load the Dataset.</span> 

2. Setup 2DSA Control

    a. <span style="color:#006400";>Set the $s$-value and $f/f_{0}$ Limits.</span> Use the same range settings as in Step 5.

    b. <span style="color: #006400";>Set the Resolution</span> and <span style="color: #006400";>Set the Grid Resolution.</span> 

    c. Select <span style="color: #006400";>Fit Time Invariant Noise</span> and <span style="color: #006400";>Fit Radially Invariant Noise,</span>

    d. Select <span style="color: #006400";>Iterative Refinement</span> and <span style="color: #006400";>Set Refinement Level</span> to 10 iterations.
    
3. <span style="color: #006400";>Submit the Job</span> to your desired cluster. <span style="color: #006400";>Check Queue Viewer</span> for job completion.

4. Open [<span style="color: #00008B";>Velocity: FE Model Viewer</span>](/velocity-femodel)to confirm the results. <span style="color: #00008B";>Load the Dataset</span> by selecting the file of the format "2DSA.IT.run_name". Remember to <span style="color: #00008B";>Save Results.</span>

All subsequent analyses methods should now be based on the model generated in this final 2DSA refinement step.

At this point, multiple analysis options exist depending on the properties of the analyte distribution. If a paucidisperse solution is obtained, parsimonious regularization with the genetic algorithm method is appropriate. Otherwise, the data should be analyzed only by the 2DSA analysis in conjunction with a 50-iteration Monte Carlo analysis. Both options are explained below. 


## <span style="font-size: 26px";> 7. Genetic Algorithm Analysis (optional)</span>

Perform this step if the refined 2DSA data is appropriate for genetic algorithm analysis.

1. Open [<span style="color: #00008B";>Velocity: Initialize Genetic Algorithm.</span>](/velocity-initializega)

2. <span style="color: #00008B";>Load the Model</span> from Step 6 into the initialization program.

3. <span style="color: #00008B";>Assign Initialization</span> and <span style="color: #00008B";>Save Results.<span>

4. Log into the [<span style="color: #006400";>US3 LIMS portal</span>](https://uslims.uleth.ca) and navigate to <span style="color: #006400";>Analysis: Queue Setup</span> to <span style="color: #006400";>Load the Dataset</span> to Genetic Algorithm analysis.

5. Select and <span style="color: #006400";>Load the gadistro File</span> from the UltraScan/results/run-id directory for the correct triple.

6. Open [<span style="color: #00008B";>Velocity: FE Model Viewer</span>](/velocity-femodel) to confirm the results. <span style="color: #00008B";>Load the Dataset</span> by selecting the file of the format "2DSA.GA.run_name". Remember to <span style="color: #00008B";>Save Results.</span>

## <span style="font-size: 26px";> 8. 2DSA Monte Carlo Analysis (recommended)</span>

1. Log into the [<span style="color: #006400";>US3 LIMS portal</span>](https://uslims.uleth.ca) and navigate to <span style="color: #006400";>Analysis: Queue Setup</span> to <span style="color: #006400";>Load the Dataset</span>.

2. Select <span style="color: #006400";>50 Monte Carlo Iterations.</span>

    If the 2DSA distribution appears to be a sparse solute situation, and not a smooth continuous distribution of many species, you can further refine the data with a parsimonious regularization using the GA analysis.

    When using 2DSA Monte Carlo distributions for the GA initialization, make sure to use the manual GA initialization method in [<span style="color: #00008B";>Velocity: Initialize Genetic Algorithm.</span>](/velocity-initializega)

5. Select and <span style="color: #006400";>Load the gadistro File</span> from the UltraScan/results/run-id directory for the correct triple.

6. Open <[span style="color: #00008B";>Velocity: FE Model Viewer</span>](/velocity-femodel) to confirm the results. <span style="color: #00008B";>Load the Dataset</span> by selecting the file of the format "2DSA.MC.run_name". Remember to <span style="color: #00008B";>Save Results.</span>

## <span style="font-size: 26px";> 9. Perform Monte Carlo GA Analysis (optional)</span>

1. Using the results from Step 7, <span style="color: #00008B";>Initialize Genetic Algorithm - Monte Carlo.</span> 

2.  Log into the [<span style="color: #006400";>US3 LIMS portal</span>](https://uslims.uleth.ca) and navigate to <span style="color: #006400";>Analysis: Queue Setup</span> to <span style="color: #006400";>Load the Dataset</span> from Step 6 (default).

3. Select a multiple of 8 for the <span style="color: #006400";>Monte Carlo iterations</span> (48, 56 or 64 are good choices).

4. Select <span style="color: #006400";>parallel processing with 8 program groups.</span>

5. Select and <span style="color: #006400";>Load the gadistro File</span> from the UltraScan/results/run-id directory for the correct triple.

6. <span style="color: #006400";>Submit</span> to desired cluster. 
    
7. Open [<span style="color: #00008B";>Velocity: FE Model Viewer</span>](/velocity-femodel) to confirm the results. <span style="color: #00008B";>Load the Dataset</span> by selecting the file of the format "2DSA.GA.run_name" generated from the GA distribution model. Remember to <span style="color: #00008B";>Save Results.</span> 


## <span style="font-size: 26px";> 10. Perform van Holde-Weischet Analysis</span>

1. Open [<span style="color: #00008B";>Velocity: Enhanced van Holde - Weischet</span>](/velocity-evhw)

2. <span style="color: #00008B";>Load</span> the desired experiment, applying the noise files from Step 6.

3. Check the boxes for <span style="color: #00008B";>Plateaus from 2DSA</span> and <span style="color: #00008B";>Use Enhanced vHW</span>

4. Adjust analysis controls:

    <span style="color: #00008B";>Back Diffusion Tolerance</span> to between 0.101 or 0.201
    
    Increase <span style="color: #00008B";>Divisions</span> to 150 
    
    Increase <span style="color: #00008B";>Data Smoothing</span> to 11
    
    <span style="color: #00008B";>% of Boundary</span>
    
    <span style="color: #00008B";>Boundary Position</span>

    If appropriate, delete early scans to improve resolution and reduce noise. Only keep 
scans and boundary portions that contribute to well correlated line fits in the 
linear extrapolations.

5. <span style="color: #00008B";>Select Groups</span>, if appropriate, to generate weight averaged s-values for discrete 
species

6. <span style="color: #00008B";>Display Distribution Plot.</span> 
    
    A mono-disperse solution is shown by a straight line on the distribution plot. Ensure that the line is smooth without any kinks or back-bends. If there are kinks or back-bends, adjust <span style="color: #00008B";>Divisions</span>, <span style="color: #00008B";>Data Smoothing</span>, and <span style="color: #00008B";>Scan Exclusion</span> profiles.
    
7. Select <span style="color: #00008B";>Display Histogram</span> in the <span style="color: #00008B";>Distribution Plot</span> module.
    
    Adjust <span style="color: #00008B";>Histogram Sensitivity</span> to ~40

8. <span style="color: #00008B";>Save Data</span> and distributions.




## <span style="font-size: 26px";>11. Overlay Combined Distributions</span>

All van Holde - Weischet distributions and finite element models can be combined into a single plot for easy comparison.

1. Open [<span style="color: #00008B";>Velocity: Combine Distribution Plots (vHW)</span>]() for van Holde - Weischet plots.

2. Use [<span style="color: #00008B";>Velocity: Combine discrete Distributions</span>]() for all finite element models (2DSA, GA, Monte Carlo).



## <span style="font-size: 26px";> 12. Perform Parametrically Constrained Spectrum Analysis</span>
