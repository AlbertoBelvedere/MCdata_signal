# MCdata_signal

This directory contains the code necessary to perform the MC data comparison for the signal component of the low-pt electron identification algorithm output.

**MCntupla.C** analyzes a MC ntupla and studies a cut based selection to idetify the process B->J/&Psi;(ee)K. This script also to check if the tag and probe method used 
to study the low-pt electrons introduces any bias in the distribution of the low-pt electron identification algorithm output by comparing this distribution with the one obtained from the MC of the same process but at the generator level analyzed trough **MCntupla2.C** . 

**ntuplaSig.C** implements the cut based selection studied on the MC and compare the distribution of the number of primary verteces with the one from the MC.

**jpsi_splot.C** exploit the splot technique to unfold signal and background contribution to the distribution of the ee invariant mass trough the fit of a double Crystal Ball. This function is implemented trough **RooDoubleCB.cc** and **RooDoubleCB.h** . Once the events of signal and background are known the MC data comparison for the signal component of the low-pt electron identification algorithm output is performed.

To compile **ntuplaSig.h** or any other script in this directory:

```
g++ -c ntuplaSig.h `$ROOTSYS/bin/root-config --libs --cflags`
g++ -o ntuplaSig.exe ntuplaSig.cpp ntuplaSig.C `$ROOTSYS/bin/root-config --libs --cflags`
./ntuplaSig.exe name_of_the_ntupla
```
