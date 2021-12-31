# Reference


## Reference and Const
- reference variable은 변수의 별명이다. (주소, 값 모두 같다.)
- 파라미터로 넘겨줄 경우, 다른 함수에서 변수를 변경가능하다.

```cpp
#include <iostream>

void doSomething(const int value, const int &ref)
{
	using namespace std;

	cout << value << ' ' << &value << ' ' << ref << ' ' << &ref << endl;
}

int main()
{
	int a = 5; // 5 0x7ffeeaf4e158
	doSomething(a, a); // 5 0x7ffeeaf4e13c 5 0x7ffeeaf4e158
	doSomething(a, 5); // 5 0x7ffeeaf4e13c 5 0x7ffeeaf4e154

	return 0;
}
```
파라미터에 변수로 받는 것과, reference로 받는 것은 무슨 차이가 있을까?
파라미터를 변수로 받으면 value copy가 일어난다. (비효율) 반면 reference를 사용한다면 실제 원래 변수와 같은 주소를 가지게 된다.

또한 `const int &ref`처럼 const reference를 사용한다면 

1. immutable하면서도 reference로 파라미터를 받아 효율을 추구할 수 있다.
2. literal의 주소를 기억할 수 없기 때문에, reference variable 대입에는 lvalue가 들어가야 하지만, const reference타입은 literal을 받을 수 있다. (이 경우 literal을 위한 주소가 할당 된다.)
