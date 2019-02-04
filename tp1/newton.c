
#include "newton.h"

#include "math.h" // pow

float newton(float initial_value, int iterations){
	// We need to seed the algorithm with a value not to far from the exact value. We decided to take half from the initial value, which should work fine for low values. 
	float current_value = initial_value/2;
	float root = newton_recursive(initial_value, current_value, iterations);
	return root;
}

float newton_recursive(float initial_value, float current_value, int iteration) {

	// Implementation of the Newton approximation.
	current_value = current_value - ((pow(current_value, 2) - initial_value) / (2*current_value));

	// This iteration is done.
	iteration--;

	// Recursive call.
	if (iteration > 0) current_value = newton_recursive(initial_value, current_value, iteration);

	// Return the root value obtained to the calling function.
	return current_value;
}



