#include <cstdio>
#include <cstring>

char read_from(const char* str, int index);
int write_to(char* str, int index, char val);
int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = upper; // Equivalent: &upper[0]

  lower[3] = 'd'; // lower now contains a b c d e \0
  upper_ptr[3] = 'D'; // upper now contains A B C D E \0

  char letter_d = lower[3]; // letter_d equals 'd'
  char letter_D = upper_ptr[3]; // letter_D equals 'D'

  printf("lower: %s\nupper: %s\n", lower, upper);

  lower[7] = 'g'; // Super bad. You must never do this.
  write_to(lower, 7, 'g');
}

char read_from(const char* str, int index) {
  size_t len = strlen(str);
  if(index >= len) {
    printf("%d is out of bounds\n", index);
    return 0;
  } else {
    return str[index];
  }
}

int write_to(char* str, int index, char val) {
  size_t len = strlen(str);
  if(index >= len) {
    printf("%d is out of bounds\n", index);
    return 1;
  } else {
    str[index] = val;
    return 0;
  }
}
