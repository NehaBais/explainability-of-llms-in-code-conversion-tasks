### Solution 1:
```cpp
#include <windows.h>
int main() {
    SetCurrentDirectory(L"C:\\");
    ShellExecute(NULL, L"open", L"cmd.exe", NULL, NULL, SW_SHOWNORMAL); //opens command prompt in cwd
    system("ren input.txt output.txt");//rename
    system("cd ..");
    system("del mydocs\\*.*");
    return 0;
}
```
## Q5 - 10 marks
Write a program that takes one argument and prints out the number of vowels in it. The argument will be given as command line arguments, starting with ./vowels followed by the string to check.
### Solution: 

#include <stdio.h>
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: ./a.out string\n");
        return -1;
    }
    int count = 0;
    for (int i = 1; i < argc; i++) { // skip ./vowels since it is the first argument
        if ((argv[i][0] == 'a' || argv[i][0] == 'e' || argv[i][0] == 'i' || argv[i][0] == 'o' || argv[i][0] == 'u') && (argv[i][1] == '\0')) {
            count++;
        }
    }
    printf("%d\n", count);
}
