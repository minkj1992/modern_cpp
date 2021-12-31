# Terminology

- prototype
- forward declaration
- header guards (=include guards)
  - 중복될 경우 한번만 include해라 (#pragma once)
- #pragma once
  - 기 정의된 preprocessor의 일종
- macro
- conditional compilation
  - macro의 #ifdef, #ifndef, #else, #endif
- fundamental data types (=primitivate data types)
- `auto`는 데이터 타입을 자동으로 컴파일 타임에 찾아준다.
## 2. Variable and Fundamental types
- `initialization`
  - `copy initialization` int a = 3;
  - `direct initialization` int a(3);
  - `uniform initialization`  int a{ 3 };
- `Fixed-width Integers`
- scientific notation
- `inf`: infinite
- `nan`: not a number
- `ind`: indeterminate
- `literal constants`
- `symbolic constants`
  - constexpr(c++ 11): 컴파일 타임에 값이 완전히 결정되는 상수
  - const: 컴파일 타임 / 런타임에 값이 결정되는 모든 상수. (constexpr 포함)

## 4. 변수 범위와 더 다양한 변수형
- Scoped Enumerations (`Enum Class`)
- `type aliases`
  - `typedef`
  - `using`
- `struct`
  - `member selection operator` = .
  - memory `padding`
  - 최적화를 위해서 member들의 순서를 고려해야 한다. (e.g short type 2byte는 2바이트가 뒤에 padding된다.)

## 6. 행렬, 문자열, 포인터, 참조
- reference variable

