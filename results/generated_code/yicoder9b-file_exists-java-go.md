In GoLang, you can use `os` package to perform file I/O operations. Here is the conversion of your Java code to Golang:

For current working directory:

```go
package main

import (
	"os"
)

func main() {
    _, err := os.Stat("docs/input.txt") 
    if os.IsNotExist(err) {
        println("File does not exist or path is incorrect!")
    } else {
        println("File exists and located in the correct directory!")
    }
    _, err := os.Stat("/docs/input.txt") 
    if os.IsNotExist(err) {
        println("File does not exist or path is incorrect!")
    } else {
        println("File exists and located in the correct directory!")
    }
}
```

In GoLang, `os.Stat()` function returns information about a file's metadata if it exists. If the error from this function is of type `os.ErrNotExist` then we can be sure that our file does not exist or path might incorrect.
