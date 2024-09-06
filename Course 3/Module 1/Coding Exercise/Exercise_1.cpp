	#include <iostream>
	#include <vector>
	#include <stdexcept>
	using namespace std;
	
	// Function to calculate the average of two double values
	double GetAvg(double a, double b) {
	    return (a + b) / 2.0;
	}
	
	int main(int argc, char** argv) {
	  try {
	    double x = stod(argv[1]);
	    double y = stod(argv[2]);
	    cout << GetAvg(x, y) << endl;
	  }
	  catch (invalid_argument& e) {
	    cout << "One or more invalid arguments." << endl;
	  }
	  return 0;
	}
