The error is that the Golang code uses `std::string` which is not available in C++. The `std::string` variable is only available in C++. The fix is to replace `std::string` with a regular string literal. 
Here is the corrected code in a single line:
```cpp
#include
#include
int main() {
  std::ofstream file("output.txt");
  if (file.is_open()) {
    std::cout << " successfully opened for writing!" << std::endl;
    file.close();
  } else {
    std::cerr << " could not open for writing" << std::endl;
    return 1;
  }

  const char *path = "/docs";
  if (mkdir(path, 0777) == -1) {
    perror("mkdir");
  } else {
    std::cout << "directory created!" << std::endl;
  }

  path = "input.txt";
  if (std::ofstream output(path)) {
    std::cout << " successfully opened for writing!" << std::endl;
    output.close();
  } else {
    std::cerr << " could not open for writing" << std::endl;
    return 1;
  }

  path = "input.txt";
  if (std::ofstream output(path)) {
    std::cout << " successfully opened for writing!" << std::endl;
    output.close();
  } else {
    std::cerr << " could not open for writing" << std::endl;
    return 1;
  }
}
```

