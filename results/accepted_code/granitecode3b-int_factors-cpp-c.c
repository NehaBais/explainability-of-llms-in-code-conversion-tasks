#include
#include
#include
#include
#include
#include
int main() {
  const int SampleNumbers[] = {3135, 45, 60, 81};

  for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
    std::vector factors;
    int number = SampleNumbers[i];
    for (int factor = 2; factor * factor <= number; ++factor) {
      if (number % factor == 0) {
        factors.push_back(factor);
        if (factor * factor != number)
          factors.push_back(number / factor);
      }
    }

    std::sort(factors.begin(), factors.end());
    for (size_t j = 0; j < factors.size(); ++j) {
      std::cout << "Factor of ";
      std::cout.width(4);
      std::cout << SampleNumbers[i] << " is: ";
      std::cout << factors[j];
      if (j + 1 != factors.size())
        std::cout << ", ";
      else
        std::cout << "." << std::endl;
    }
  }

  return EXIT_SUCCESS;
}