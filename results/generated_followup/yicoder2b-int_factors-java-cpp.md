The error `Undefined symbols for architecture arm64` usually occurs if you're trying to compile C++ code with clang (which uses the GCC), but the GCC compiler is not installed on your machine. 

Here are the reasons why this might happen:

1. If you're using a virtual or container environment like Docker that restricts access to the system shell and environment variables, it may cause an issue when trying to compile C++ code with `clang++`. This is not a common error but can be a workaround by temporarily setting your environment variables to include the GCC installation directory.

2. If you're using a Unix-like OS (MacOS or Linux) and clang is installed, but it cannot find it in the system path. This usually happens if `/usr/local/bin` or `$HOME/bin` or `$CUSTOM_CLANG_PATH` isn't included in your PATH.
   In such a case, either add these paths to your environment variables (`export PATH=$PATH:/usr/local/bin/`) or set the CLANG environment variable to point towards clang installation directory (`CLANG="/path/to/clang"`).

3. If you're using Windows and clang++ is installed, but it cannot find it in the system PATH. The same issue as above applies here. In such case, add the path to `clang++` in your environment variables (`set PATH=PATH;C:\Path\To\Clang`).

4. If you are using a Python interpreter that doesn't know about clang, it may cause an issue during the compilation step. This can be fixed by running your Python script with `python3 -m compileall` or `python -m compileall` command if you are using Python 2 instead of Python 3.

The corrected C++ code could be as follows:
```cpp
#include <cmath>
#include <set>
std::multiset<long long> factors(long long n) {
  std::multiset<long long> factors;
  factors.insert(n);
  factors.insert(1LL);
  for (long long test = n - 1; test >= std::sqrt(n); test--)
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  return factors;
}
```
