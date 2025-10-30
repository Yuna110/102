# include <iostream>
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
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      result=num1-num2;
      cout << num1 << " - " << num2 << " = " << result;
      break;

    case '*':
      result=num1*num2;
      cout << num1 << " * " << num2 << " = " << result;
      break;

    case '/':
      result=num1/num2;
      cout << num1 << " / " << num2 << " = " << result;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
