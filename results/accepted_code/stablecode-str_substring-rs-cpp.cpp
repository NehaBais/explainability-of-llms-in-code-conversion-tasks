#include <iostream>
#include <string>

int main() {

  std::string s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字))
  for (auto it = std::next(s.begin(), n))
    ;
        it != std::next(s.end(), n+m)); ++it) {
        std::cout << *it << " ";
    }

        // Print all characters starting at index 2 (c文字化けdef))
        for (auto it = std::next(s.begin(), n))
          ;
        it != s.end(); ++it) {
        std::cout << *it;
    }

        // Print all characters except the last (abc文字化けde)))
        for (int i = 0; i < m - 1; i++) {
          std::cout << " ";
        }
        for (auto it = s.begin(); it != std::prev(s.end(), m - 1))
          ; ++it) {
        std::cout << *it;
    }

        // Print 3 characters starting with 'b' (bc文))
        auto bpos = s.find('b');
        for (auto it = std::next(s.begin(), n + m).begin();
             it != std::next(s.end(), n + m)).take(m).collect::<String>()));

        // Print 3 characters starting with "けd" (けde))
        auto kpos = s.find("けd");
        for (auto it = std::next(s.begin(), n + m).begin();
             it != std::next(s.end(), n + m)).take(m).collect::<String>()));

        return 0;
}