
# Model Building
To build a model, one needs to understand the physical properties of the obersved process. Many processes can be described using differential equations. When solved, these equations can describe a linear or non-linear model.
    
!!! note "TL;DR: How to Build Models "

     Modeling involves the description of some observable data using a mathematical equation that describes the underlying physical properties of the experiment.

    Our process is as such:

    1. We need to identify a general, mathematical model that can represent the observed data. The parameters of the model describe the specifics of the data.

    2. We need to determine the values of the parameters in the model that best fit our data. This is accomplished by a fitting algorithm that minimizes the differences between the data and the model. Generally, an initial estimate is required that is then improved. 

    3. We need to estimate the error in the parameters we determined in the fitting process to obtain the confidence intervals

??? danger "<span style= "color: #d9534f;">EXAMPLE: Radioactive Decay Model Building</span>"

    !!! danger "   "
    
        Hypothesis: The rate of decay is proportional to the number of nuclei present
   
        Mathematical Model:
        
        $$
        \frac{\partial N}{\partial t} = -a N
        $$

        Solve:
        
        $$
        N = N_{0} e^{-a(t+t_{s})}+ b
        $$
<br>
MODELS FOR REACTING SYSTEMS:
The magnitude of the measureable off-rate depends on the rotor speed and sedimentation coefficient.

For faster rotor speeds, higher molecular weight and globular shape will favour the measurement of faster rate constants. 

# Data Fitting
Any observable process that influences the measurement needs to be acccounted for in order for models to yeld any meaningful result. 
The object is then to minimize the residuals between the model and the data.

Iverse preoblem: extracting parameters from a simulated solution by fitting the model to experimental data.

A non-parametric fit is used to smooth data for display, where the instrinsic model is of little intrest, and hence the parameters are not needed.

## Method of Least-Squares
When useing the Method of Least Squares, we make the following assumptions:

* The model is a truthful representation of reality.

* All error is ssociated with a dependent variable. 

* All experimental noise is considered to be of Gaussian distribution.

The minimum in the differences occur when the derivative of our objective function with respect to the parameters is zero, so we need to differentiate it with respect to the parameters of interest, a and b.
This will lead to a system of linear equations.

Any observable process that influences the measurement needs to be accounted for in order for the model to yield meaningful results. Our objective is then to minimize the residuals between the model and the data:

$$
MIN \sum_{i=1}^{n} \left( \frac{Data_{i} - Model _{i}}{uncertainty_{i}}\right)^{2} = MIN \chi^{2}.
$$

Extracting parameters from the simulated solution by fitting the model to experimetal data is called an $\bf{\text{Inverse Problem}}$.

LEAST-SQUARES EQUATION FOR STRAIGHT LINES:
The equation for a straight line is a linear equation: y = mx +b. Remember our least squares equation above; for a straight line, it changes to:

$$
\sum_{i=1}^{n} \left( \frac{D_{i} -(a+bx_{i})}{\sigma_{i}}\right)^{2} =  \chi^{2}(a,b).
$$

The distances from the experimental data and the linear fit are measured to be perpendicular to the data (see figure), and the objective of this method is to find the equation of a straight line that minimizes the distance between the data and the fit.

![](\img\linear-fit.png){width="300"align=right}<br>

SOLVING THE LEAST SQUARES EQUATION (LINEAR LINE):
The minimum in the differences between our data and our fit occurs when the derivative of our function (with respect to the parameters) is zero. Therefore, we must take our least squares equation and  differentiate it:

$$
\sum_{i=1}^{n} \left( \frac{D_{i} -(\bf{a} +\bf{b}x_{i})}{\sigma_{i}}\right)^{2} =  \chi^{2}(\bf{a,b}).
$$

With respect to parameter $a$:

$$
\frac{\partial \chi^{2}(\bf{a,b}) }{\partial \bf{a}} = 0 = -2 \sum_{i=1}^{n}\left( \frac{D_{i} - \bf{a} - b x_{i}}{\sigma_{i}^{2}}\right).
$$

With respect to parameter $b$:

$$
\frac{\partial \chi^{2}(\bf{a,b})}{\partial \bf{b}} = 0 = -2 \sum_{i=1}^{n}\left( \frac{x_{i}(D_{i} - a - \bf{b} x_{i})}{\sigma_{i}^{2}}\right).
$$

This will lead to a system of linear equations:

$$
\sum_{i=1}^{n} \frac{\bf{a}}{\sigma_{i}^{2}} + \sum_{i=1}^{2} \frac{\bf{b}x_{i}}{\sigma_{i}^{2}} = \sum_{i=1}^{2} \frac{D_{i}}{\sigma_{i}^{2}};
$$

$$
\sum_{i=1}^{n} \frac{\bf{a}x_{i}}{\sigma_{i}^{2}} + \sum_{i=1}^{2} \frac{\bf{b}x_{i}^{2}}{\sigma_{i}^{2}} = \sum_{i=1}^{2} \frac{D_{i}x_{i}}{\sigma_{i}^{2}}.
$$

When in matrix form, this system of equations can be solved by using Cramer's rule, such that:

$$
x_{1} = \frac{b_{1}a_{22}-b_{2}a_{12}}{a_{11}a_{22}-a_{12}a_{21}}, ~~ x_{2} = \frac{b_{2}a_{11}-b_{1}a_{21}}{a_{11}a_{22}-a_{12}a_{21}}.
$$

## Linear Models

As discussed above, we know that the equation for a linear equation is $y = a + bx$, and we know that the equation is linear in the coefficients that are fitted. In fact, the equation doesnt have to be that of a straight line to be considered linear. Rather, we can express it with a polynomial:

$$
y = c_{0} + c_{1}x^{1} + c_{2}x^{2} + ... + c_{n}x^{n}.
$$

Then, as long as the coefficients are linear, the equation will be considered a linear fitting equation. It does not matter how wildly non-linear the terms of the independent variable are. For example, our variables can be exponentials, or trignometric functions (all of which are not linear):

$$
y = c_{0} + (x-\sin(x^{3})c_{1} + \exp^{-(4-3x)}c_{2} + \ln(3x^{4})c_{3} + ... + c_{n}X_{n},
$$

with $X_{n}$ being any non-linear term. That being said, sometimes we may want to constrain the value of a paramater. For example, suppose we do not want the amplitude of an exponential term to turn negative during the fitting process. We can prevent this by fitting the log of a number, such that the fitted value will never be negative.

$$
y = \bf{a} e^{bx} + c \rightarrow e^{\ln(\bf{a}) + bx} + c; ~~ e^{ln(a)} = a.
$$

??? danger "<span style ="color: #d9534f;"> EXAMPLE: Linearization</span>"

    !!! danger "Linearization of a Non-Linear Equation"
        
        Suppose we have an exponential equation of the form:
    
        $$
        y = c_{1}e^{c_{2}x}.
        $$
    
        To linearize it, we take the natural logarithm on both side. 
    
        $$
        \ln(y) = \ln(c_{1}\cdot e^{c_{2}x}) = \ln(c_{1}) + c_{2}x.
        $$
<br> 
## Non-Linear Regression

What is the importance of an equation being linear or non-linear? It turns out that non-linear functions require fitting using iterative approaches, while linear functions can be fitted using a single interation.
Consider the Jacobian matrix for non-linear systems:

$$
\bf{J} = \frac{d \bf{f}}{d \bf{x}} =  \frac{\partial \bf{f}}{\partial x_{1}} \cdots \frac{\partial \bf{f}}{\partial x_{n}}=
\begin{bmatrix}
\frac{\partial f_1}{\partial x_1} & \cdots &
\frac{\partial f_1}{\partial x_n} \\
\vdots & \ddots & \vdots \\
\frac{\partial f_m}{\partial x_1} & \cdots &
\frac{\partial f_m}{\partial x_n}
\end{bmatrix}
$$

We are hoping to iteratively improve the parameter estimates by following along the gradient of the error functino in the direction of maximum imporovement. This requires knowledge of the partial derivatives of each parameters at each point in the experiment. Let us therefore take:

$$
\bf{J} (a-g) = \Delta y,
$$

where $\bf{J}$ is the Jacobian matrix, shown above, $g$ is the current parameter estimate, $a$ is the adjustment made to the parameter estimate in the current iternation, and $\Delta y$ is the difference between the experimental data and the model. To solve for the value of $a$:

$$
\bf{J}^{T}J (a-g) = \bf{J}^{T}\Delta y.
$$
Once here, we have two options. Option 1:

$$
(\bf{J}^{T}\bf{J}^{-1})\bf{J}^{T}(a-g) = (\bf{J}^{T}\bf{J})^{-1}\bf{J}^{T} \Delta y.
$$

Option 2 is when $\bf{J}^{T}\bf{J}$ is positive, so that we can use the [Cholesky decomposition](https://en.wikipedia.org/wiki/Cholesky_decomposition) ($\bf{J}^{T}\bf{J} = \bf{LL}^{T}$). 

We then iterate until the function converges.

??? danger "<span style="color:#d9534f;">EXAMPLE: Appropriateness of Fitting Approaches</span>"

    !!! danger "For each of the following situations, what is the fitting approach. Is it non-parametric, gradient descent, grid method, or stochastic? Is it linear or non-linear in its fitting parameters? If the appraoch is non-parametric, propose a function for it."
        
        A. Smoothing a set of noisy data with a recognizable wave pattern
    
        B. Fitting parameters $a$ and $b$ from function:
        
        $$
        F(x) = a_{0} + a_{1}\log(ax) + a_{2}\sin(b-x^{2}) + c
        $$
    
        C. Fitting paramaters $a_{i}$ from function:
        
        $$
        F(x) = \sum_{i=0}^{100}a_{i}e^{b_{i}(x^{2}-c^{2})},~~\text{where}~ b_{i} = \frac{1}{100}.
        $$
    
        D. Fitting paramaters $a_{j}$ from function:
        
        $$
        F(x) = a_{0} + a_{1}\log(bx) + a_{2}\sin(a_{3}-x^{2}) + c
        $$
    
        E. Fitting parameters $a, b$, and $c$ from function:
        
        $$
        F(x) = \log(ax) + \sin(bx^{2}) + c
        $$
    
        F: Fitting parameters $a_{1}$ to $a_{8}$:
        
        $$
        F(x) = a_{1}\log(a_{2x}) + \frac{a_{3}\sin(\sqrt{2}a_{4}x^{2})}{a_{7}x^{3}} + a_{5}e^{a_{6}x^{2}/2} + a_{8}
        $$
<br>

# Experimental Uncertainties, Error Surfaces, and Fit Quality

![](\img\uncertainty.png){width="300"align=right}

EXPERIMENTAL UNCERTAINTIES: The uncertainty of an measurement can be determined by repeating the expriment several times. Each time, a slightly different value is obtained for the experimental observation. If we assume a Gaussian distribution of errors in the measurement, we can determine the standard deviation, $\sigma$, of the distribution of measured parametes. Then we can use $\sigma$ to set the error bars on the measurement and to scale the contribution of a datapoint to the sum of residuals.

To calculate the standard deviataion, use the following equation:

$$
\sigma = \sqrt{\frac{1}{n} \sum_{i=1}^{n} (x_{i} - \bar x)^{2}},
$$

where $\bar x$ is the average of all measurements.

![](\img\error-surface.png){width="300"align=right}

ERROR SURFACES: Each parameter combination a, b results in a unique error when fitted to the experimental data. The optimal solution occurs where the error is the smallest. Ideally, the error surface is continuously differentiable. 

GOODNESS OF FIT:
The quality of the fit is determined by the randomness of the residuals, and the root mean square deviatio (RMSD). The randomness of the residuals can be measured by determining the runs. Runs (R) are the number of consecutive positive (p) or negative (n) residuals from the mean.

$$
R_{T} = \frac{R-\bar R}{\sigma_{R}}
$$

where $R_{T}$ is the measure of randomness, and:

$$
\bar R = \frac{2np}{n + p} + 1
$$

$$
\sigma_{R}^{2} = \frac{2np(2np-n-p)}{n+p)^{2}(n+p-1)}.
$$

# Optimization Methods

For linear fits, our options for optimizing methods include straight line fits, generalized inear least squares, non-negative constrained least squares, multi-dimensional spectrum analyses, and non-parametric fits. Examples of non-parametric fits are B-splines and polynomial smoothing.

For non-linear optimizatin using gradient descent methods for functions of type, $y = F(a_{i},x_{i})$, we can use Levenberg-Marquardt, Gauss-Newton, Quasi-Netwon, conjugate gradients, tangent approximation, or neural networks. A problem with non-linear least squares optimization is that for multi-component systems, the algorithm gets easily stuck in local minima and the solution will depend on the starting points. This problem gets worse when there are more parameters.

??? note "<span style="color: #1f9bcf;">TL;DR: Optimization Methods</span>"

    !!! note " These will be discussed in more detail on their own pages."
    
        2DSA: Provides degenerate, linear fits to experimental data over a finite domain, identifying regions with signal in the mass/shape domain, used to remove systematic noise contributions
        
        GA: provides parsimonious regularization of 2DSA spectrums, statisfies Occam's razor. Also used for fitting of discrete, non-linear models (reversible associations, non-ideality, co-sedimenting solutes)
        
        MC: used to measure the effect of noise on fitted parameters, yields parameter distribution statistics
        
        PCSA: used to regularize 2DSA, enforces a unique mapping of one molar mass/sedimentation coefficient per frictional ratio.
<br>
There are also stochastic (Monte Carlo, simulated annealing, random walk, and genetic algorithms) and deterministic fitting methods.

For comparrison:

STOCHASTIC:

- large search space possible

- generally slow converging

- excellent convergence properties with enough time

- computer-intensive

- suitiable for many parameters

- good for ill-conditioned error surfaces

- derivates not needed

DETERMINISTIC:

- small search space

- suitable for a few parameters only

- well-conditioned error surface

- very fast convergence

- requires derivatives
