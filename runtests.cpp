#include <iostream>

// change the value below to 1 to run tests against your Complex class.
// change the value below to 0 to run tests against the built in std::complex.

#if 1
#include "Complex.h"
#else
#include <complex>
typedef std::complex<double> Complex;
#endif

void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{

	// TODO:
	// Write *at least* 20 more tests to fully test
	// your Complex class.
	
	// test assert z1
	 Assert(z1.real() == 4, "real constructor is 4");
	 Assert(z1.imag() == 3, "imanginary constructor is 3");
	//test assert z2
         Assert(z2.real() == 5, "real constructor is 5");                                  
	 Assert(z2.imag() == 5, "imaginary constructor is 5");
	//test assert z3
	 Assert(z3.real() == 6, "real constructor is 6");
	 Assert(z3.imag() == 9, "imaginary constructor is 9");
        //test assert z4                                                        
	Assert(z4.real() == 6, "real constructor is 6");
	Assert(z4.imag() == 1, "imaginary constructor is 1");

// basic math
//adding test
 std::cout << "z1 + z2 = " << z1 + z2 << std::endl;
 std::cout << "z3 + z4 = " << z3 + z4 << std::endl;
 std::cout << "z1 + z4 = " << z1 + z4 << std::endl;
 std::cout << "z2 + z3 = " << z2 + z3 << std::endl;
 //subtracting test
  std::cout << "z1 - z2 = " << z1 - z2 << std::endl;
  std::cout << "z3 - z4 = " << z3 - z4 << std::endl;
  std::cout << "z1 - z4 = " << z1 - z4 << std::endl;
  std::cout << "z2 - z3 = " << z2 - z3 << std::endl;
  //multplication test
   std::cout << "z1 * z2 = " << z1 * z2 << std::endl;
   std::cout << "z3 * z4 = " << z3 * z4 << std::endl;
   std::cout << "z1 * z4 = " << z1 * z4 << std::endl;
   std::cout << "z2 * z3 = " << z2 * z3 << std::endl;
  // division test
   std::cout << "z1 / z2 = " << z1 / z2 << std::endl;
   std::cout << "z3 / z4 = " << z3 / z4 << std::endl;
   std::cout << "z1 / z4 = " << z1 / z4 << std::endl;
   std::cout << "z2 / z3 = " << z2 / z3 << std::endl;
   //adding to self test
	z1 += z2;
	z3 += z4;

	std::cout << "z1 += z2 = " << z1 << std::endl;
	std::cout << "z3 += z4 = " << z3 << std::endl;

    //subtracting to self test
    	 z1 -= z2;
         z3 -= z4;

	 std::cout << "z1 -= z2 = " << z1 << std::endl;
	 std::cout << "z3 -= z4 = " << z3 << std::endl;
     //division to self check
         z1 += z2;
         z3 += z4;

	 std::cout << "z1 += z2 = " << z1 << std::endl;
	 std::cout << "z3 += z4 = " << z3 << std::endl;
		
	 //conj test
	 std::cout << "the conjugate of z1 = " << conj(z1) << std::endl;
	 std::cout << "the conjugate of z2 = " << conj(z2) << std::endl;
	 std::cout << "the conjugate of z3 = " << conj(z3) << std::endl;
	 std::cout << "the conjugate of z4 = " << conj(z4) << std::endl;
	 // norm test
	 std::cout << "the norm of z1 = " << norm(z1) << std::endl;
	 std::cout << "the norm of z2 = " << norm(z2) << std::endl;	                  
	std::cout << "the norm of z3 = " << norm(z3) << std::endl;
	 std::cout << "the norm of z4 = " << norm(z4) << std::endl;

	 // compare complex or same as test
	Complex z5(6, 9);
         std::cout << "remember that z3(6, 9)" << z5 << std::endl;
	 std::cout << "is z3 same as z5?";
	 if(z3 == z5)
		 std::cout << "yes";
	 else 
		 std::cout << "no";
	 	std::cout << "\n";


	 std::cout << "is z4 different as z5? ";
	
 	 if(z4 == z5)
		std::cout << "yes";			 
	else
		std::cout << "no";
	std::cout << "\n";

//differences test
	std::cout << "is z3 different as z5?";
	         if(z3 == z5)
		
	 	std::cout << "yes";

		 else
		std::cout << "no";
	std::cout << "\n";
					  
	std::cout << "is z4 same as z5? ";
	  if(z4 == z5)
	
		  std::cout << "yes";
		
	else
	
		std::cout << "no "; 
		
	std::cout << "\n";
	
	return 0;
}


