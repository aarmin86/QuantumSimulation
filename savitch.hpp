//
//  savitch.hpp
//  Quantum Simulator
//
//

#ifndef savitch_hpp
#define savitch_hpp

#include <stdio.h>

complex<double> savitchRecur(int N, int beginD, int endD, int startS, int endS, int *layers, bool verbose); //Recursive subalgorithm for algorithm three

void savitch(string gatePath, int N, int startState, int endState, bool verbose, bool showRuntime);

#endif /* savitch_hpp */
