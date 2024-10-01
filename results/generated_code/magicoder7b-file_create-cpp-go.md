 Below is the Golang equivalent of your C++ code:

```go
package main

import (
	"io/ioutil"
	"os"
	"path"
)

func createFile(filename string) error {
	file, err := os.Create(filename)
	if err != nil {
		return err
	}
	defer file.Close()

	return nil
}

func main() {
	// Create a new empty file called "output.txt" in the current working directory and filesystem root
	err := createFile("output.txt")
	if err != nil {
		panic(err)
	}

	rootPath, _ := os.Getwd()
	rootPath = path.Join("/", "output.txt")
	err = ioutil.WriteFile(rootPath, []byte{}, 0644)
	if err != nil {
		panic(err)
	}

	// Create a new empty directory called "docs" in the current working directory and filesystem root
	err = os.Mkdir("docs", 0755)
	if err != nil {
		panic(err)
	}

	rootPath, _ = os.Getwd()
	rootPath = path.Join("/", "docs")
	err = os.MkdirAll(rootPath, 0755)
	if err != nil {
		panic(err)
	}
}
```
