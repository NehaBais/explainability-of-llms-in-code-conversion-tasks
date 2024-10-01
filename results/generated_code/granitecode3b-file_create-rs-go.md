Sure, here's the converted code from Rust to Golang:
```go
package main
import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)
func main() {
	err := os.MkdirAll("."+string(filepath.Separator)+"docs", 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = ioutil.WriteFile("."+string(filepath.Separator)+"output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = os.MkdirAll("/", 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = ioutil.WriteFile("/output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
}
```
This code creates two files: "output.txt" in the current working directory and "docs/output.txt" in the filesystem root, both of which have a size of 0 bytes. The `os.MkdirAll` function is used to create the directories if they don't already exist, and the `ioutil.WriteFile` function is used to write an empty file to each location.

