//# include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  char op;
  float num1, num2,result;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter first operand: ";
  cin >> num1;

  cout << "Enter second operand: ";
  cin >> num2;
  
  switch(op) {

    case '+':
      result=num1+num2;
      break;

    case '-':
      result=num1-num2;
      break;

    case '*':
      result=num1*num2;
      break;

    case '/':
      result=num1/num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
  }
   	// Printing the result
    if (result != -DBL_MAX)
        cout <<num1<<op<<num2<<"="<<result;

  return 0;
}
