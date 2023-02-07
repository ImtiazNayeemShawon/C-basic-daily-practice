#include <iostream>

bool isOdd(int x) {
  return x % 2 != 0;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++) {
    if (isOdd(arr[i])) {
      std::cout << arr[i] << " is odd" << std::endl;
    }
  }

  return 0;
}