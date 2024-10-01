The equivalent of the JavaScript code in Golang is:

```go
package main
import (
    "os"
    "syscall/js"
)

func main() {
    // Verify that a file called input.txt and a directory called docs exist.
    // This should be done twice - once for the current working directory, 
    // and once for a file and a directory in the filesystem root.

    // Check if an existing file exists
    _, err := os.Stat("input.txt")
    if os.IsNotExist(err) {
        js.Global().Call("alert", "File does not exist.")
    } else {
        js.Global().Call("alert", "File exists.")
    }

    // Check if a directory exists
    _, err = os.Stat("docs")
    if os.IsNotExist(err) {
        js.Global().Call("alert", "Directory does not exist.")
    } else {
        js.Global().Call("alert", "Directory exists.")
    }
}
```

In Golang, the `os` package and its function `Stat` are used to check if a file or directory exists in the system. The `os.IsNotExist(err)` function checks for an error that indicates the file/directory does not exist. If it is true, the alert message is displayed as "File does not exist." and so on.

Please note that this example assumes the existence of a JavaScript environment within the Golang code to display alerts using `js.Global().Call("alert", "message")`. If you're running this in a browser or want to use alerts for debugging purposes, you might need to adjust accordingly.
