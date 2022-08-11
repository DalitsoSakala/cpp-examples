// Random Number Generator
// =================================================
// Generates a random short integer between
// 1 and `MAX_RANDOM` and assigs to
// `current_rand`.
// `MAX_RANDOM` defaults to 6.
//
// Definitions
// -----------
// MAX_RANDOM - An integer
// 
// Usage
// -----
// Always call `srand(SEED)` once before calling `mk_rand`.
// See main.cpp
// ===================================================
// @Author - Dalitso Sakala <contact@dalitsosakala.com>
#include<cstdlib>

#ifndef MAX_RANDOM
#define MAX_RANDOM 6
#endif

// Access the most recently generated random number
unsigned short int current_rand=1;

// Generate the randmo number to assign to current_rand
void mk_rand(void){
    current_rand=(short) ((double) rand()/RAND_MAX*MAX_RANDOM) +1;
}
