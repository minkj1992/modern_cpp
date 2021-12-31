# Pointers


## Pointer and Const
```cpp
{
	using namespace std;

	const int value = 6;
	const int new_value = 7;
	const int *ptr_1 = &value;
	// 6 0x7ffeefb45158 0x7ffeefb45148
	cout << *ptr_1 << ' ' << ptr_1 << ' ' << &ptr_1 << endl; 
	// *ptr_1 = new_value; (x)
	ptr_1 = &new_value;
	// 7 0x7ffeefb45154 0x7ffeefb45148
	cout << *ptr_1 << ' ' << ptr_1 << ' ' << &ptr_1 << endl; 
}
```
`const int`를 가리키고 있는 mutable한 포인터를 의미한다.
포인터가 가리키는 값이 const int이기 때문에 dereference해서 값을 바꿀 수 없다. 
하지만 포인터 그 자체는 const하지 않기 때문에 새로운 주소값을 넣을 수 있다.

```cpp
{
	using namespace std;

	int value = 6;
	int new_value = 7;
	int *const ptr_value = &value;
	
	// 6 0x7ffee173e158 0x7ffee173e148
	cout << *ptr_value << ' ' << ptr_value << ' ' << &ptr_value << endl; 
	*ptr_value = new_value;
    // ptr_value = &new_value; (x)

	// 7 0x7ffee173e158 0x7ffee173e148
	cout << *ptr_value << ' ' << ptr_value << ' ' << &ptr_value << endl; 
}
```

`int`를 가리키는 `*const` 포인터.
포인터는 const이기 때문에 assign이 불가하지만, 포인터가 가리키는 값은 const하지 않기 때문에 변경 가능하다.
즉 포인터를 dereference(`*`)해서 값 대입 가능하다.

> c.f) int &ref(레퍼런스)와 int *const ptr는 기능이 같다.

```cpp
{
    using namespace std;

	int value = 6;
	int new_value = 7;
	const int *ptr_value = &value;
	// 6 0x7ffee6efb158 0x7ffee6efb148
	cout << *ptr_value << ' ' << ptr_value << ' ' << &ptr_value << endl; 

	value = new_value;
	// 7 0x7ffee6efb158 0x7ffee6efb148
	cout << *ptr_value << ' ' << ptr_value << ' ' << &ptr_value << endl; 

	// *ptr_value = new_value; (x)
	ptr_value = &new_value;
	// 7 0x7ffee6efb154 0x7ffee6efb148
	cout << *ptr_value << ' ' << ptr_value << ' ' << &ptr_value << endl; 
}
```
가리키는 값이 const한 int인 포인터.
value 자체는 const가 아니기 때문에 assign 가능하다.
value가 const가 아니지만, 포인터는 값을 const하게 처리하기 때문에 dereference가 불가능하다.
포인터 자체는 const하지 않기 때문에 주소 할당이 가능하다.

```cpp
{
	using namespace std;

	const int value = 6;
	const int new_value = 7;
	const int *const ptr_value = &value;

	// ptr_value = &new_value; (x)
	// *ptr_value = new_value; (x)
}
```
`const int`를 가리키는 `*const` 포인터.
pointer value assign과 dereference를 통한 assign 둘 모두 불가하다.