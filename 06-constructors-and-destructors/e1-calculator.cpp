class Calculator {
	
	private:
		//The var "res" stores the current result of the calculator.
		double res;
	
	public:
	    //CREATE HERE THE CLASS CONSTRUCTOR ACCORDING TO THE EXERCISE.
        Calculator() : res(0) {}
	
		/*This function receive a double value as a parameter and
		sum it with the value stored in the var "res" of our class
        The function's return is the current result of the calculator */
		double sum(double num) {
			//IMPLEMENT THIS METHOD ACCORDING TO THE EXERCISE.
			return res += num;
		}
		
		/*This function receive a double value as a parameter and
		subtract it with the value stored in the var "res" of our class
        The function's return is the current result of the calculator */
		double subtract(double num) {
			//IMPLEMENT THIS METHOD ACCORDING TO THE EXERCISE.
			return res -= num;
		}
		
		/*This function receive a double value as a parameter and
		multiply it with the value stored in the var "res" of our class
        The function's return is the current result of the calculator */
		double multiply(double num) {
			//IMPLEMENT THIS METHOD ACCORDING TO THE EXERCISE.
            return res *= num;
		}
		
		/*This function receive a double value as a parameter and
		divide it with the value stored in the var "res" of our class
        The function's return is the current result of the calculator */
		double divide(double num) {
			//IMPLEMENT THIS METHOD ACCORDING TO THE EXERCISE.
			return res /= num;
		}
	
};