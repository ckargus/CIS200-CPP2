#include <iostream>
#include <stack>
#include <string>
using namespace std;

void Add(stack<float> & result)
{
	float num1 = result.top();
	result.pop();
	float num2 = result.top();
	result.pop();
	float temp = num1 + num2;
	result.push(temp);
}

void Subtraction(stack<float> & result)
{
	float num1 = result.top();
	result.pop();
	float num2 = result.top();
	result.pop();
	float temp = num2 - num1;
	result.push(temp);
}

void Divison(stack<float> & result)
{
	float num1 = result.top();
	result.pop();
	float num2 = result.top();
	result.pop();
	float temp = num2 / num1;
	result.push(temp);
}

void Multiplication(stack<float> & result)
{
	float num1 = result.top();
	result.pop();
	float num2 = result.top();
	result.pop();
	float temp = num2 * num1;
	result.push(temp);
}

void Equals(stack<float> & result)
{
	cout << result.top() << endl;
	result.pop();
}
int main()
{
	string problem;
	cout << "Enter a math problem that you would like solved then finish it with the word \"stop\"" << endl;
	cin >> problem;
	stack<float> result;
	while (problem != "stop")
	{
		if (problem == "+")
		{
			Add(result);
		}
		else if (problem == "-")
		{
			Subtraction(result);
		}
		else if (problem == "*")
		{
			Multiplication(result);
		}
		else if (problem == "/")
		{
			Divison(result);
		}
		else if (problem == "=")
		{

		}
		else
		{
			result.push(stof(problem));
		}
		cin >> problem;
	}
	cout << result.top() << endl;
	return 0;
}