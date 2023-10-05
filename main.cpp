#include <iostream>
#include <vector>
#include <iomanip>



using namespace std;

// AERSP 424 Homework 1: Question 2
// Goal: Write a program to predict roll rate of aircraft
// for up to five seconds and print the result at every time step

int main()
{
	// Design aircraft by picking favorite non-zero real numbers for Lp abd Ldelta

	double Lp = .75; //roll damping coefficient
	double Ldelta = -.25; //aileron effectiveness
	double p_dot; //derivative of roll rate
	double delta; // aileron deflection angle
	double dt = .01; //step size
	double duration = 5; //total time to find roll rate for
	double size = duration / dt + 1; // size of array to get time increments