/*Unit 3 program Dr_T square and cube C++: KietVo
Date: 2-3-2020 IDE: Repl.it tool*/
#include <iostream>
using namespace std;


int main() 
{
  //variable declarations and initialization
  double input = 0.0;
  double square = 0.0, cube = 0.0;
  int number1 = 0, number2 = 0, result = 0;

  //Ask  the user to input the number  
  cout << "Please enter a number: ";
  cin >> input; 

  //Process 
  square = input * input; 
  cube = square * input; 
  result = (number1 * number2) + cube; 

  //Output
  cout << "\nSquare is " << square << endl;
  cout << "\nCube is " << cube << endl;
  
  //accept input of number1 and number2
  cout << "Please enter number1 [space] number2 ";
  cin >> number1 >> number2;

  //Process (best place for this one)
  result = (number1 * number2) + cube;

  //Output a clear result
  cout << "(" << number1 << " * " << number2 << ")" << " + " << cube << " = " << result << endl; 

  return 0;
}