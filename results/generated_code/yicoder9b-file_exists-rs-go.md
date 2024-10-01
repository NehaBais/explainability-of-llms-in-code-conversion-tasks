Below is the equivalent Golang code for the given Rust code. The `os` package in Go is used to interact with the filesystem:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
    for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
        if _, err := os.Stat(file); err != nil {
            fmt.Printf("%s does not exist\n", file)
        } else {
            fi, err := os.Stat(file)
			if err != nil {
				panic(err)
			}
			if fi.IsDir() {
                fmt.Printf("%s is a directory\n", file)
			} else {
                fmt.Printf("%s is a file\n", file)
            }
        }
    }
}
``` 
In this Go code, `os.Stat()` function retrieves the File information, if it doesn't exist then it returns an error. It is used to check whether a file exists or not and also get some attributes of that file like whether it is directory or a file.
