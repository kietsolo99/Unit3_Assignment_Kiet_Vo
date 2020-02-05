/*Unit 3 program Dr_T square and cube C++: KietVo
Date: 2-3-2020 IDE: Repl.it tool
This is a program to work with the various arithmetic operators in C++ and conditions*/
#include <iostream>
using namespace std;


int main() 
{
  //variable declarations and initialization
  double number1 = 0.0, number2 = 0.0, addition = 0.0, subtraction = 0.0, multiplication = 0.0, division = 0.0;
  int number3 = 0, number4 = 0, modulus = 0;
  //Ask  the user to input the number  
  cout << "Please enter number1 : ";
  cin >> number1; 
  
  cout << "Please enter number2 (other than 0) : ";
  cin >> number2; 
  if(number2 == 0)
  {
    cout <<"/ndivision by 0 is not permitted in math" << endl;
  }
  cout << "Please enter number3 : ";
  cin >> number3; 
  
  cout << "Please enter number4 (other than 0) : ";
  cin >> number4; 
  if(number4 == 0)
  {
    cout <<"/ndivision by 0 is not permitted in math" << endl;
  }
  //Process 
  addition = number1 + number2;
  subtraction = number1 - number2;
  multiplication = number1 * number2;
  division = number1 / number2;
  modulus = number3 % number4;
  //Output clear result
  cout << "\naddition" <<" = " <<"number1" <<" + " <<"number2: " << addition << endl;
  cout << "\nsubtraction" <<" = " <<"number1" <<" - " <<"number2 :" << subtraction << endl;
  cout << "\nmultiplication" <<" = " <<"number1" <<" + " <<"number2: " << addition << endl;
  cout << "\ndivision" <<" = " <<"number1" <<" / " <<"number2: " << division << endl;
  cout << "\nmodulus" <<" = " <<"number3" <<" % " <<"number4: " << modulus << endl;
  return 0;
}