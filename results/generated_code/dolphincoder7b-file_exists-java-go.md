To convert the given Java code to Golang, we will follow these steps:

1. Import the necessary libraries and packages for file I/O in Golang using `import "os"`.
2. Define a function called `main` which takes no parameters and returns no values (`func main() {}`).
3. Inside the `main` function, we will define two separate variables of type `*os.File`, one to check if the file exists in the current working directory (CWD) and another to check if the file exists at the root level. These variables will be initialized using the `os.Open()` function, which returns a pointer to an `os.File` object based on the provided path.
4. Check if the file exists in the CWD by calling the `Exists()` method of the first variable and print "CWD exists" if it does, or "CWD doesn't exist" otherwise.
5. Repeat the above process to check if the file exists at the root level. We will use a different path ("/docs/input.txt") this time.
6. Finally, we will call `os.Exit()` function to terminate the program with success status (0).

Here's the converted Golang code:

```go
package main

import "os"

func main() {
    file1, _ := os.Open("docs/input.txt")
    if file1 != nil && !file1.IsDir() {
        println("CWD exists")
    } else {
        println("CWD doesn't exist")
    }

    file2, _ := os.Open("/docs/input.txt")
    if file2 != nil && !file2.IsDir() {
        println("Root exists")
    } else {
        println("Root doesn't exist")
    }

    os.Exit(0)
}
```
