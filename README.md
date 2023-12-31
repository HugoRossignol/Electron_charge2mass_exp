# Electron_charge2mass_exp

Short script to process experimental results and compute the electron charge to mass ratio with the distributions.

## Code to run on Signaloid

File: charge2mass.c

Simply copy and paste this code into the Signaloid Cloud code editor and run it to obtain the predicted results and distributions.

<img title="Distribution of the measured charge to mass ratio." alt="Dist_q/m" src="Dist_q_m.png">

## Experiment Details

The repository mimics results taken from an experiment for which the aim is to measure the electron's charge-to-mass ratio. The accepted value is 1.758820 × 10<sup> 11 </sup> C/kg.

The experiment follows the Thompson method for measuring the charge-to-mass ratio of electrons. The main physical equation governing the experiment is given by,

$$\frac{q}{m} = \frac{2V}{B^{2} R^{2}}$$

where the left-hand term is the charge-to-mass ratio, $V$ is the accelerating voltage, $B$ the magnetic field that induces circular paths of the emitted electrons and $R$ is the radius of their trajectory.
$B$ is expressed in terms of the current $I$, used to generate the field, $B = kI$. $k$ is a constant, taken to be $7.5\pm0.51 \times 10^{-4}$ T/A. In this repository, the experimental noise on $V$, $I$ and $R$ is assumed to be 
gaussian, with parameters:

|  Variable | $\mu$  | $\sigma$  |
|---|---|---|
| $V$ (V)     |    82.8   |    2.0      |
| $I$ (A)     |    1.4   |     0.1     |
| $R$ (cm)     |    2.92   |   0.11       |

The data for these, taken across 1000 samples is given in csv files (V.csv, I.csv, R.csv).

From the mean values, the estimated ratio is 1.77 $\pm$ 0.37 $\times 10^{11}$ C/kg. However, if one calculates this "on the fly", using the individual entries of each distribution and averaging the computed ratios, the value is of 1.81 $\times 10^{11}$ C/kg.

The estimated relative uncertainty through error propagation (assuming independence of variables) on the ratio is given by,

$$ \sqrt{\left( \frac{\sigma_{V}}{\mu_{V}} \right )^{2}+\left( \frac{2\sigma_{I}}{\mu_{I}} \right )^{2}+\left( \frac{2\sigma_{R}}{\mu_{R}} \right )^{2}+\left( \frac{2\sigma_{k}}{\mu_{k}} \right )^{2}}. $$

## Jupyter-notebook

There is also a jupyter-notebook (Perform_Experiment.ipynb) to generate the results and show the distributions there as well. It also gives results on uncertainty estimates.
