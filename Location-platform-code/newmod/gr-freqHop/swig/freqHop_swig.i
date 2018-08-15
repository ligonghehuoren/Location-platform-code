/* -*- c++ -*- */

#define FREQHOP_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "freqHop_swig_doc.i"

%{
#include "freqHop/freq_hopping.h"
%}


%include "freqHop/freq_hopping.h"
GR_SWIG_BLOCK_MAGIC2(freqHop, freq_hopping);
