In Golang, you can use the `os` and `ioutil` packages to interact with the file system. Here's your code translated into Golang:

```go
package main

import (
	"io/ioutil"
	"log"
	"os"
)

func fct(err error) {
	if err != nil {
		log.Println(err)
	}
}

func createFile() {
	file, err := os.Create("output.txt")
	fct(err)
	defer file.Close()

	_, err = file.Write([]byte("")))
	fct(err)
}

func createDirectory() {
	err := os.MkdirAll("docs", 0o755))
	fct(err)
}

func main() {
	createFile()
	createFile()

	createDirectory()
	createDirectory()
}
```

This Golang code does the same task as your JavaScript code. It creates a new empty file called "output.txt" of size 0 bytes, an empty directory called "docs", and ensures that all resources are properly closed after being used.
