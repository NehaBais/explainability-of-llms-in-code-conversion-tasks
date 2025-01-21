To convert the given JavaScript code to Golang, you would need to utilize the `os` and `io/ioutil` packages. Here is how it could be done:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func createFile(dir string) {
	err := ioutil.WriteFile(dir, []byte{}, 0644)
	if err != nil {
		fmt.Println("Error creating file:", err.Error())
	}
}

func createDirectory(dir string) {
	err := os.MkdirAll(dir, 0755)
	if err != nil {
		fmt.Println("Error creating directory:", err.Error())
	}
}

func main() {
	createFile("./output.txt")
	createDirectory("./docs")

	createFile("/output.txt")
	createDirectory("/docs")
}
```
Please note that this is a simple version and does not include error handling in the way the original JavaScript code does, which could potentially result in your program crashing if the operations fail. The `/` at the beginning of paths is used to indicate relative paths from the current working directory, and `os.MkdirAll("/docs", 0755)` creates a directory named `docs` recursively with permission set to `rwxr-xr-x`.
