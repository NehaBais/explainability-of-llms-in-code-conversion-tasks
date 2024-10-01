To convert this Python code to Golang, we need to do the following:

1. Import the necessary libraries and modules in Golang. For example, `os` is imported as `import "os"`.
2. Define a function named `create`, which takes a directory string as an argument. The function should create an empty file called "output.txt" of size 0 bytes and an empty directory called "docs".
3. In the `create` function, we can use the `os.Create` method to create the empty file. This method returns an error if it encounters any issues while creating the file. If there is no error, we can close the file using the `defer f.Close()` statement.
4. After creating the file, we need to create a directory using the `os.Mkdir` method. The `mode` parameter specifies the permission bits for new directories. It is set to 0755 by default in Golang.
5. Call the `create` function twice: once with the current working directory as an argument and once with the root directory as an argument.

Here's the translated code in Golang:
```go
package main
import "os"
func create(directory string) {
    f, err := os.Create(os.path.Join(directory, "output.txt"))
    if err != nil {
        // handle error
    }
    defer f.Close()
    mode := os.FileMode(0755)  // default permission bits for new directories
    os.MkdirAll(os.path.Join(directory, "docs"), mode)
}
func main() {
    create(".")      // current directory
    create("/")      // root directory
}
```

I hope this helps you convert your Python code to Golang!
