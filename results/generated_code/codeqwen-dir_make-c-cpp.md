The given code is already written in C++, as it includes the main function which is a part of C++. The only change to make this work in C is to replace `argv[1]` with `argv[0]` in `stat (argv[1], &statBuf)`. However, since you asked for a conversion from C to C++, here's how it can be done:

```cpp
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>

int main (int argc, char **argv) {
    std::string str;
    struct stat statBuf;

    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <path>" << std::endl;
        return 1;
    }
    for(char* s = strtok(argv[1], "/"); s != NULL; s = strtok(NULL, "/")) {
        if (s != argv[1]) {
            *(s-1) = '/';
        }
        if (stat(argv[0], &statBuf) == -1) {
            mkdir(argv[0], 0);
        } else {
            if (! S_ISDIR(statBuf.st_mode)) {
                std::cerr << "couldn't create directory " << argv[0] << std::endl;
                return 1;
            }
        }
    }
    return 0;
}
```

Please note that the code is using `argv[0]` instead of `argv[1]`. As C++ doesn't have a built-in function like `basename()`, I used `argv[0]` which gives the name of the program. However, this code needs more error handling to ensure its robustness in all cases.
