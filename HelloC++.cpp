// Hello world program in C++. Checks value of variable.

#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello in C++ from AWS Cloud9!" << std::endl;
	
	string course = "SDEV325";  // name of course
	
	std::cout << "\nExpected output: SDEV325" << std::endl;
	std::cout << "Actual output: " + course << std::endl;
	
	// check if in the right course
	if (course == "SDEV325"){
	    std::cout << "Congrats! You are in the right course!" << std::endl;
    } else {
    	std::cout << "Sorry! You are not in the right course." << std::endl;
    }
} // end of main
