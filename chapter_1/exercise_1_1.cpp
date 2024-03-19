#include <cstdio>

int absolute_value(int x) {
  // Your code here
  if (x < 0) {
    return -x;
  }
  return x;
}

int sum(int x, int y){
    return x + y;
}

int main() {
  int my_num = -10;
  int a = 1;
  int b = 2'22'22;
  int a_b_sum = sum(a, b);
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}
