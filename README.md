# MCdata_signal

This directory contains the code necessary to perform the MC data comparison for the signal component of the electron identification algorithm output.

**MCntupla.C** analyzes a MC ntupla and studies a cut based selection to idetify the process B->J/&Psi;(ee)K. It is also possible to check if the tag and probe method used 
to study the low-pt electrons introduces any bias in the distribution of the electron identification algorithm output by comparing this distribution with the one obtained from the MC of the same process but at the generator level analyzed trough **MCntupla2.C** . 

**ntuplaSig.C** implements the cut based selection studied on the MC and  compare the pile-up distribution with the one from the MC.

**jpsi_splot.C** exploit the splot technique to unfold signal and background contribution to the the distribution of the ee invariant mass trough the fit of a double Crystal Ball. This function is implemented trough 
