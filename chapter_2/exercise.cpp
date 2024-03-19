#include <iostream>
enum class Operation { Add, Substract, Multiply, Divide };

struct Calculator {
  Operation op;
  Calculator(Operation op)
      : op(op) { }

  int calculate(int a, int b) {
    switch(op) {
    case Operation::Add:
      return a + b;
    case Operation::Substract:
      return a - b;
    case Operation::Multiply:
      return a * b;
    case Operation::Divide:
      return a / b;
    }
    return 0;
  }
};

int main() {
  Calculator adder(Operation::Add);
  Calculator substractor(Operation::Substract);
  Calculator multiplier(Operation::Multiply);
  Calculator divider(Operation::Divide);

  int a = 10;
  int b = 5;

  int result = adder.calculate(a, b);
  std::cout << result << std::endl;
  result = substractor.calculate(a, b);
  std::cout << result << std::endl;
  result = multiplier.calculate(a, b);
  std::cout << result << std::endl;
  result = divider.calculate(a, b);
  std::cout << result << std::endl;

  return 0;
}
