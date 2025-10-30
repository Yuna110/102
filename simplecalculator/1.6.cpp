#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    float num1, num2, result;

    cout << "Enter an operator: +, -, *, /,p,r: ";
    cin >> op;

    cout << "Enter first operand: ";
  cin >> num1;

  cout << "Enter second operand: ";
  cin >> num2;

    if (op == '+'){
        result =num1+num2;
    }else if (op == '-'){
        result =num1-num2;
    }else if (op == '*'){
        result =num1*num2;
    }else if (op == '/'){
        result =num1/num2;
    }else if  (op == 'p'){
        result =pow(num1,num2);
    }else if  (op == 'r'){
        result =sqrt(num1);
    }else{
         cout << "Error! Operator is not correct";
         result = -DBL_MAX;
    }

    if (result != -DBL_MAX)
        cout <<num1<<op<<num2<<"="<<result;
    return 0;
}
