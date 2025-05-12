//
//  pathIntegral.hpp
//  Quantum Simulator
//
//

#ifndef pathIntegral_hpp
#define pathIntegral_hpp

#include <stdio.h>
using namespace std;

void complexPathStep(streampos pos, int changesLeft, complex<double> currPhase, int currDepth);

void pathIntegral(string gatePath, int N, int startState, int endState, int numChanges, bool showRuntime);

#endif /* pathIntegral_hpp */
