//==========================================================
//
// Title:      Square Feet Calculator
// Course:     CSC 1101
// Lab Number: Lab03
// Author:     Abdul Mahbub
// Date:       1/22/2019
// Description: Calculate how much square feet the room is so that we can buy paint.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
	int height = 5;
	int width = 8;
	int totalArea = height * width;

  // Show application header
  cout << "Welcome to my Square Feet Calculator!" << endl;
  cout << "--------------------------" << endl << endl;

  //Show calculations
  cout << "The room's height is " << height << " feet" << endl;
  cout << "The room's width is " << width << " feet" << endl;
  cout << endl;

  // Read from console
  cout << "Therefore we need " << totalArea << " square feet of paint" << endl;
 


  // Show application close
  cout << "\nEnd of my Square Feet Calculator" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
