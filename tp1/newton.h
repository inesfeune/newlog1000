//modif

/*
 * This is the function to call to obtain the Newton approximation.
 * initial_value : the value for which we want the root.
 * iterations : the number of iterations of the Newton approximation.
 * return : the root value computed.
 */
float newton(float initial_value, int iterations);

/*
 * This function should not be called directly. This function implements the recursive Newton algorithm to obtain the root value.
 * initial_value : the value for which we want to obtain the root. 
 * current_value : the current value of the root approximation.
 * iteration : the number of iterations left to perform. It is the criteria to end the recursive function.
 * return : the root value to return after the final iteration.
 */
float newton_recursive(float initial_value, float current_value, int iteration);
