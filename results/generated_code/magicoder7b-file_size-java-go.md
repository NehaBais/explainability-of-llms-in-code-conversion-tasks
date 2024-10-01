 In Go language, you can use the `os` package to get details about a file in the system. Below is the equivalent code snippet for the Java code provided. 

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Stat("file.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("%d B\n", fileA.Size())
	}

	fileB, err := os.Stat("/file.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("%d B\n", fileB.Size())
	}
}
```
The `os` package in Go provides functions for interacting with the operating system, such as getting a directory listing or reading and writing files. The `Stat()` function is used to get information about the specified path, like its size in bytes (`Size()`). Please note that to run this code, you will need to have a file named "file.txt" in your current working directory and another one at the root level of your filesystem.
