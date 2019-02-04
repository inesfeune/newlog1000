
#include "math.h"

float comparison(float initial_value, float root){

	float real_root = sqrt(initial_value);

	return ((root - real_root)/real_root);
}

