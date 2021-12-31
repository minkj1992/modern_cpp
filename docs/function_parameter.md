# Function Parameters

- function parameter
```cpp
#include <iostream>
#include <array>

using namespace std;

bool isEven(const int &number)
{
	return (number % 2 == 0) ? true : false;
}

bool isOdd(const int &number)
{
	return !isEven(number);
}

void printNumbers(array<int, 10> &arr, bool (*validator)(const int &))
{
	for (int v : arr)
		if (validator(v))
			cout << v << ' ';
	cout << endl;
}

int main()
{
	array<int, 10> my_arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printNumbers(my_arr, isEven); // 0 2 4 6 8
	printNumbers(my_arr, isOdd);  // 1 3 5 7 9
	return 0;
}
```

- function parameter with `using` or `typedef`

```cpp
#include <iostream>
#include <array>

using namespace std;
// typedef bool (*validator_fnc)(const int &);
using validator_fnc = bool (*)(const int &);

bool isEven(const int &number)
{
	return (number % 2 == 0) ? true : false;
}

bool isOdd(const int &number)
{
	return !isEven(number);
}

void printNumbers(array<int, 10> &arr, validator_fnc validator)
{
	for (int v : arr)
		if (validator(v))
			cout << v << ' ';
	cout << endl;
}

int main()
{
	array<int, 10> my_arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printNumbers(my_arr, isEven); // 0 2 4 6 8
	printNumbers(my_arr, isOdd);  // 1 3 5 7 9
	return 0;
}
```

- function parameter with std::function and default parameter
```cpp
#include <iostream>
#include <array>
#include <functional>

using namespace std;
using validator_fnc = function<bool(const int &)>;

bool isEven(const int &number)
{
	return (number % 2 == 0) ? true : false;
}

bool isOdd(const int &number)
{
	return !isEven(number);
}

void printNumbers(array<int, 10> &arr, validator_fnc validator = isEven)
{
	for (int v : arr)
		if (validator(v))
			cout << v << ' ';
	cout << endl;
}

int main()
{
	array<int, 10> my_arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printNumbers(my_arr);		 // 0 2 4 6 8
	printNumbers(my_arr, isOdd); // 1 3 5 7 9
	return 0;
}
```

매우 파이썬스럽게, 가장 깔끔해 보인다.