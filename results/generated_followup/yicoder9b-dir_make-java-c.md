The error message indicates that the `main` function is not found, causing the linker to fail. This commonly happens when we forget to include a main function in our program.

To fix this error, you need to add a main function as follows:

```c
int main(void) {
    if (createDirectory("C:/parent/test") == 1)
        printf("path successfully created\n");
  return 0;
}
```
This will fix the error by defining a `main` function and calling our `createDirectory()` function. The main function also returns an integer, which is the exit code of the program in case you would like to run it as standalone application.
