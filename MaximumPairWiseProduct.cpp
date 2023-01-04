#include <algorithm>
#include <iostream>
#include <vector>

long long get_max_pairwise_product(const std::vector<int>& numbers) {
  int max1 = -1;
  int max2 = -1;

  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] > max1) {
      max2 = max1;
      max1 = numbers[i];
    } else if (numbers[i] > max2) {
      max2 = numbers[i];
    }
  }

  return (long long) max1 * max2;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> numbers(n);
  for (int i = 0; i < n; i++) {
    std::cin >> numbers[i];
  }

  long long result = get_max_pairwise_product(numbers);
  std::cout << result << std::endl;
  return 0;
}

