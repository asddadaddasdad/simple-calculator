//Creates a calculator
#include <iostream>
using namespace std;

int main() {
double num1, num2; 
char operation;

//Prompt user for input
cout << "Enter the first number: ";
cin >> num1;

cout << "Enter an operator (+, -, *, /)";
cin >> operation;

cout << "Enter the second number: ";
cin >> num2;

//Perform the calculation
switch (operation)
{
case '+':
    cout << "Result" << num1 + num2 << endl;
    break; 
case '-': 
    cout << "Result" << num1 - num2 << endl;
    break;
case '*':
 cout << "Result" << num1 * num2 << endl;
 break;

case '/':
  cout << "Result" << num1 / num2 << endl;
  break;

}

cout << "The answer to addition is: " << endl;


}