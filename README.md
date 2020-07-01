# activeBarriers
**activeBarriers** computes material active barriers to the transport of momentum and vorticity for flows defined on a three-dimensional cartesian grid

![Image of the barrier](https://github.com/davecats/activeBarriers/blob/master/.mFTLE.png) 

This repository is the reference implementation of the active barriers for a turbulent channel described in 

``` G. Haller et al., "Objective material barriers to the transport of momentum and vorticity", submitted to Journal of Fluid Mechanics, 2020 ```

### Description

The computation is divided in two steps, each of them provided as a separate program:
1) *barrierField.cpl*: the computation of the three-dimensional active barrier field from velocity data
2) *ftle.cpl*: computation of aFTLE/aPRA diagnostic for the active barrier field

### Contacts

Dr. Davide Gatti  
davide.gatti [at] kit.edu  

Karlsruhe Institute of Technology  
Institute of Fluid Dynamics  
Kaiserstraße 10  
76131 Karlsruhe  

### How to cite this code

If you use this code and find it helpful, please cite:  

``` G. Haller et al., "Objective material barriers to the transport of momentum and vorticity", submitted to Journal of Fluid Mechanics, 2020 ```
