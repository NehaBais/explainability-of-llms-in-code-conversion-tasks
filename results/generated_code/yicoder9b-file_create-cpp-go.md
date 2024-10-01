Below is the equivalent Golang code for your C++ code:

```go
package main
import (
	"io/ioutil"
	"os"
)

func createFile(path string) {
	err := ioutil.WriteFile(path, nil, 0644)
	if err != nil {
		panic(err)
	}
	info, _ := os.Stat(path)
	println("Size of file is: " + string(info.Size()))
}

func createDir(path string) {
	err := os.Mkdir(path, 0750)
	if err != nil {
		panic(err)
	}
}

func main() {
	createFile("output.txt")
	createFile("/output.txt")

	createDir("docs")
	createDir("/docs")
}
```
This code creates a file with size 0 in the current directory and the root of your filesystem as well, and it also makes an empty directory named "docs" in the same locations. If any error occurs during these operations, the program will panic and print the error message to the standard error output.
