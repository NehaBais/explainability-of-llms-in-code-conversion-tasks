In C programming language, there is no built-in method or function equivalent to the `String.format()` function in Java. However, you can achieve string interpolation (also known as string formatting) in C by using the `printf()` function and its format specifiers.

Here's an example of how it would look like:

```c
#include <stdio.h>

int main() {
    char adjective[] = "little";
    char lyric[100];  // Assuming there won't be a string longer than 99 characters

    printf("Mary had a %s lamb", adjective);  // This will print: Mary had a little lamb on the console

    snprintf(lyric, sizeof(lyric), "Mary had a %s lamb", adjective);
                                                           // this stores the result in lyric 
    return 0;
}
```
Please note that `%s` is used as the format specifier for string in C.

The `snprintf()` function takes three arguments: the buffer where you want to store your formatted output, The size of this buffer, and the format string along with the parameters you want to insert into it. If the length of the resulting string exceeds the size of the buffer, the behaviour is undefined. So, it is necessary to ensure that the size of the buffer should be greater than or equal to the number of characters in the format string plus one for null terminator.
