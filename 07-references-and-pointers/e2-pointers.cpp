class MyClass {
    
	private:
	    int *p, **r;
	
	public:
		
		void method1() {
		   
		   p = new int[5]{10, 20, 30, 40, 50}; 
		   
		   //IMPLEMENT HERE ACCORDING TO THE EXERCISE
		   p++;
		   p++;
		   
		   r = &p;

		}
	
	    int *getP() {
	        return p;
	    }
	    
	    int **getR() {
	        return r;
	    }
	    
};