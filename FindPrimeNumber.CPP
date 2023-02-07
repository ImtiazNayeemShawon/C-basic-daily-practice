#include <iostream>
#include <cmath>

bool isPrime(int x) {
  if (x <= 1) return false;
  for (int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int limit = 20;

  for (int i = 2; i <= limit; i++) {
    if (isPrime(i)) {
      std::cout << i << " is prime" << std::endl;
    }
  }

  return 0;
}
