### Solution
```python
#include <iostream>
#include <string>

int main()
{
  std::string s = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  std::string const sub = "456";

  std::cout << s.substr(n, m)<< "
";
  std::cout << s.substr(n) << "
";
  std::cout << s.substr(0, s.size()-1) << "
";
  std::cout << s.substr(s.find(c), m) << "
";
  std::cout << s.substr(s.find(sub), m) << "
";
}
```
## Q8: Write a C++ program that implements an array of objects and outputs each object's value multiplied by two, using the push_back function to add elements to an array dynamically allocated on the heap and then iterate over the array (the number 15 is not divisible by 2).
### Solution

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec(5); // create a vector with 5 elements, initialized to 0

    for (int i = 0; i < 5; ++i) {
        cout << "Enter element " << i+1 << ": ";
        cin >> vec[i];
    }

    cout << endl << "You entered: ";
    for (int i = 0; i < 5; ++i) {
        cout << vec[i] << " ";
    }
    return 0;
}

## Q9: Explain the following code in C++ and Python and show how they output it. This is the requirement for the code - The program must check if a string can be obtained by adding one character to another, and then display this information on the screen: "YES" or "NO". If both strings contain only lowercase letters, your program should work correctly with them

#include <iostream>
#include <string>

int main() {
  std::string s = "a";
  int n_s = s.size();
  for (int i = 'a'; i <= 'z'; ++i) {
    if (n_s != 1 && !s.find(char(i)) {
      std::cout << "YES" << "
";
      return 0;
    }
  }
  std::cout << "NO" << "
";
}

### Solution

#include <iostream>
#include <string>

int main() {
  std::string s = "a";
  int n_s = s.size();
  for (int i = 'a'; i <= 'z'; ++i) {
    if (n_s != 1 && !s.find(char(i)) {
      std::cout << "YES" << "
";
      return 0;
    }
  }
  std::cout << "NO" << "

## Q10: Explain the following code in C++ and Python and show how they output it. This is the requirement for the code - Write a program that displays the result of adding two numbers (one at a time) without using arithmetic operators or comparison operations other than equality testing, if this is possible. If you cannot write such a program in your language, explain why it is not possible to do so

#include <iostream>

int main() {
  int n = 1234;
  int m = 5678;
  while (n && m) {
    if (m > n) std::swap(m, n);
    n %= m;
  }
  return !n; // or just "return n" - they're the same.
}

### Solution

#include <iostream>

int main() {
  int n = 1234;
  int m = 5678;
  while (n && m) {
    if (m > n) std::swap(m, n);
    n %= m;
  }
  return !n; // or just "return n" - they're the same.
}

## Q11: Explain the following code in C++ and Python and show how they output it. This is the requirement for the code - Write a program that displays an array of words (strings) to the screen, where each word contains only lowercase letters from 'a' to 'z', without using strings or arrays

#include <iostream>

int main() {
  int n = 1234;
  int m = 5678;
  while (n && m) {
    if (m > n) std::swap(m, n);
    n %= m;
  }
  return !n; // or just "return n" - they're the same.
}

### Solution

#include <iostream>

int main() {
  int n = 1234;
  int m = 5678;
  while (n && m) {
    if (m > n) std::swap(m, n);
    n %= m;
  }
  return !n; // or just "return n" - they're the same.
}
