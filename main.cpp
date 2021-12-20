#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

void print(int x)
{
	cout << x << endl;
}

void printLocalVariables(int x)
{
	print(x); // 100
	{
		int x(200);
		print(x); // 200
	}
	print(x); // 100
	{
		x = 300;
		print(x); // 300
	}
	{
		print(x); // 300
	}
}

int main()
{
	int x(100);

	printLocalVariables(x);
	return 0;
}