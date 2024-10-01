```c
#include <windows.h>

int main()
{
    // Move file in the current working directory
    MoveFile("input.txt", "output.txt");
    MoveFile("c:/input.txt", "c:/output.txt");

    // Move folder in the current working directory
    MoveFolder("docs", "mydocs");
    MoveFolder("c:/docs", "c:/mydocs");

    return 0;
}
```
