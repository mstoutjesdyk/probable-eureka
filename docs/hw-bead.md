This page is still under construction and solutions have not been confirmed.


Let us define our variables: $\bf{F}_{i}$ is the frictional force exerted upon the solvent by the i-th bead. $\eta_{o}$ is the solvent viscosity. $\sigma_{i}$ is the radius of the i-th bead. $\bf{T}_{i,j}$ is the Rotne-Prager-Yamakawa hydrodynamic interaction tensor, modified by Garcia de la Torre and Victor Bloomfield for non-overlapping beads of different sizes. $\bf{v}^{0}_{i}$ is the velocity of the unperturbed solvent. $\bf{u}_{i}$ is the velocity of the i-th bead. $\bf{R}_{i,j}$ is the distance vector between the centers of bead $i$ and bead $j$, while $R_{i,j}$ is the distance.

Osen Tensor:

Compute $\bf{T}_{i,j} = \bf{T}_{1,2}$ for $N=2$ with spheres of radius $\sigma_{1} = 1$ and $\sigma_{2} = 2$ with standard (x,y,z) coordinates of (-1,0,0) and (2,0,0), respectively, with solvent viscosity, $\eta_{0} = 1$.

$$
\bf{T}_{i,j} = \frac{1}{8\pi\eta_O R_{i,j}} \left(\bf{I} + \frac{\bf{R}_{i,j}\bf{R}_{i,j}}{R_{i,j}^2}\right)
$$

$$
\bf{T}_{i,j} = \frac{1}{6\pi\eta_0\sigma}\left( \left(1 - \frac{9R_{i,j}}{32\sigma}\right)\bf{I} + \frac{}{32\sigma R_{i,j}}\right)
$$

$$
\bf{T}_{i,j} = \frac{1}{8\pi\eta_0 R_{i,j}} \left(\bf{I} + \frac{\bf{R}_{i,j}\bf{R}_{i,j}}{R_{i,j}^2} + \frac{\sigma_{i}^{2} + \sigma_{j}^{2}}{R_{i,j}^2} \left( \frac{\bf{I}}{3} - \frac{\bf{B}_{i,j}\bf{B}_{i,j}}{R_{i,j}^2}\right) \right)
$$