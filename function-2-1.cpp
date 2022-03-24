#include <iostream>
using namespace std;

#include <stdio.h>
float add_op(float left, float right)
{
    float sum;
    sum = left + right;
    return sum;
}

float subtract_op(float left, float right)
{
    float result;
    result = left - right;
    return result;
}

float arithmetic_ops(float left, float right, std::string op)
{
    float sum, result;
    if (op == "add")
    {
        sum = add_op(left, right); // call function if operation is add
        cout << "The sum is " << sum;
    }
    else if (op == "subtract")
    {
        result = subtract_op(left, right); // call function if operation is subtract
        cout << "The result of subtraction is" << result;
    }
    return 0;
}

int main()
{
    float left, right;
    std::string op;
    cout << "Enter the two numbers and the operation(add/subtract):"<< endl;
    cout << "Enter add or subtract to perform action" << endl;
    cin >> left;
    cin >> right;
    cin >> op;
    arithmetic_ops(left, right, op); // calling the function to perform arithmetic operation.
    return 0;
}