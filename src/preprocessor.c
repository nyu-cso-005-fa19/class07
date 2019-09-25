#include <stdio.h>

#define FOO 1

#define PI 3.1415

#define square(x) ((x) * (x))

#ifdef FOO
int foo(int x) { return x + 1; }
#else
int foo(int x) { return x + 2; }
#endif

int main() {
  float area = square(2.0 + 1.0) * PI
  struct T t;
  return 0;
}
