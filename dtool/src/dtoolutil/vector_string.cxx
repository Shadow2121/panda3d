// Filename: vector_string.C
// Created by:  drose (15May00)
// 
////////////////////////////////////////////////////////////////////

#include "vector_string.h"

#define EXPCL EXPCL_DTOOLCONFIG 
#define EXPTP EXPTP_DTOOLCONFIG 
#define TYPE std::string
#define NAME vector_string

#include "vector_src.cxx"

// Tell GCC that we'll take care of the instantiation explicitly here.
#ifdef __GNUC__
#pragma implementation
#endif
