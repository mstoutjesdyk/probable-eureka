
## Deriving the Lamm Equation

Start with the continuity equation (conservation of mass):

$$
\left(\frac{\partial c}{\partial t}\right)_{t} = -\text{Div}[J_{total}],
$$

with $J_{total = J_{sed} + J_{dif}}$, where:

$$
J_{sed} = c\frac{\partial r}{\partial t} = c\omega^{2}sr,
$$

and

$$
J_{dif} = -D\left(\frac{dc}{dr}\right).
$$

After subsituting, we arrive at:

$$
\left(\frac{\partial c}{\partial t}\right)_{r}= -\nabla \left[c\omega^{2}sr^{2}-Df\left(\frac{dc}{dr}\right)_{t}\right].
$$

When we convert this equation to use cylindrical equations, we arrive at the Lamm equation, described by Ole Lamm in 1929, which explains the process of sediementation and diffusion in a sector-shaped cell:

$$
\frac{\partial{c}}{\partial{t}} = D \left(\frac{\partial^2{c}}{\partial{t}^2} + \frac{1}{r}\frac{\partial{c}}{\partial{t}}\right) - s \omega^2 \left(r\frac{\partial{c}}{\partial{t}} + 2c\right).
$$

$$
\frac{\partial{c}}{\partial{t}} = -\frac{\partial}{r\partial r} \
eft{c\omega^{2}sr^{2} - Dr \left(\frac{dr}{dr}\right)_{t} \right}
$$

For multiple non-interacting species, we can write simultaneous Lamm equations:

$$
\sum \frac{\partial{c}}{\partial{t}} = -\sum \frac{\partial}{r\partial r} \
eft{c\omega^{2}sr^{2} - Dr \left(\frac{dr}{dr}\right)_{t} \right}
$$

## Solutions 