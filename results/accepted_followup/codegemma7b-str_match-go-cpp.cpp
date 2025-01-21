std::cout << "1. " << first << " starts with " << second << ": "
          << (first.compare(0, second.size(), second) == 0) << std::endl;
// ...
std::cout << "2. " << first << " contains " << second << ": " << (i >= 0)
          << std::endl;
// ...
std::cout << "3. " << first << " ends with " << second << ": "
          << (first.compare(first.size() - second.size(), second.size(),
                            second) == 0)
          << std::endl;