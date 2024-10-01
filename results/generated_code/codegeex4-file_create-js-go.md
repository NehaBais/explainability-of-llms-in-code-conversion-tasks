The equivalent Golang code for the given JavaScript code is as follows:

```go
package main

import (
    "os"
)

func check(e error) {
    if e != nil {
        panic(e)
    }
}

func main() {
    // Create in current directory
    file, err := os.Create("output.txt")
    check(err)
    defer file.Close()

    dirErr := os.Mkdir("docs", 0755)
    check(dirErr)

    // Create in root directory
    file, err = os.OpenFile("/output.txt", os.O_WRONLY|os.O_CREATE, 0666)
    check(err)
    defer file.Close()

    dirErr = os.MkdirAll("/docs", 0755)
    check(dirErr)
}
```
This Go program creates an empty "output.txt" file and a "docs" directory in the current working directory. It then repeats this action at the filesystem root.

Note that Golang uses different mechanisms to handle files and directories as compared to JavaScript. It also doesn't have built-in support for error handling, so you may need to define your own function to check errors. 

Also keep in mind that creating files or directories in `/` (root directory) usually requires elevated privileges (like sudo on Unix-like systems), which may not be available depending on the environment in which this code is being run.
