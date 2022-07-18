# Monte Carlo Method

The Monte Carlo method is a stochastic approach that can be used to identify the effect noise has on the reliability of determined parameters. With the Monte Carlo approach, the statistical confidence limits of each Parameter can be determined.

When running a simulation, the metrics we chose to compare to the actual data need to include the percent error observed from the means of the Monte Carlo parameter distributions:[^WilliamsGorbetDemeler2018]

$$
\%~\text{Error} = 100~ \% \left[\frac{\sqrt{(X_{e}-X_{m})^{2}}}{X_{e}} \right],
$$

where $X_{e}$ is the expected simulated parameter, and $X_{m}$ is the observed mean from the Monte Carlo distribution.

The average 95% confidence interval (CI) from each Monte Carlo parameter distribution is:

$$
95\%~\text{CI Error} = 100~\% \left[ \frac{\frac{1}{2}
\left(\sqrt{(X_{e} - X_{95l})^{2}}+\sqrt{(X_{e} - X_{95h})^{2}}\right)}{X_{e}}\right]
$$

where $X_{95l}$ is the low 95% confidence interval, and $X_{95h}$ is the high 95% confidence interval.

[^WilliamsGorbetDemeler2018]: <div class="csl-entry">Williams, T. L., Gorbet, G. E., &#38; Demeler, B. (2018). Multi-speed sedimentation velocity simulations with UltraScan-III. <i>European Biophysics Journal</i>, <i>47</i>(7), 815-823. https://doi.org/10.1007/s00249-018-1308-0</div>

### Recipe for Monte Carlo
1. Obtain a best-fit solution from model function fit and confirm that the residuals are random and without systematic deviation

2. Generate new synthetic Guassian noise with the same quality as was observed in the original experiment and add it to the best-fit solution

    * Bootstrapping: permute a percentage of residuals. Take any residual, positive or nagative, and place it elsewhere in the data. The assumption here is that the likelihood of a residual's magnitude is the same anywhere in the dataset.

    * Generating Gaussian Noise: run a 5-7 point Gaussian kernel over the residual vector from the best fit and use the Box-Buller algorithm to generate random new noise with the same quality at that position based on the varience obtained from the 5-point kernel. Essentially: take the absolute value of the residual values from 5-7 poiints, and smooth them with a gaussian kernel. The average residual value is fed into the Box-Muller function to generate a new random residual that has a Guassian probabiliyt distribution with a mean of the average residual value.

       Generaton of Guassian Noise is preferred beacuse the quality of the noisevaries at different points in the cell and also varies with absorbance.

3. Re-fit the solution

4. Repeat steps 2 - 4 at least 100 times and collect all parameter values

5. Calculate statistics from Monte Carlo distribution for each parameter

Once a Monte Carlo analysis is completed, a frequency distribution of parameter values for each parameter is obtained, and statistics for the distribution can be calculated.

### Monte Carlo on UltraScan LIMS III
