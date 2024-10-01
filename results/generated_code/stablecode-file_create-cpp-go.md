In Go, you can use the `os` and `io/ioutil` packages to interact with filesystems. Here's the equivalent Golang code for creating an empty file "output.txt" in the current working directory and once in the filesystem root:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func createFiles() {
	// Create an empty file called "output.txt" in the current working directory.
	file, err := os.Create("output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	// Create an empty file called "/output.txt" in the filesystem root.
	rootDir := "" // Update this variable to the desired path if needed
	err = ioutil.WriteFile(rootDir+"/output.txt", []byte{}, 0))
	if err != nil {
		fmt.Println(err)
		return
	}

	// Create an empty directory called "docs" in the current working directory.
	err = os.MkdirAll("docs", 0755))
	if err != nil {
		fmt.Println(err)
		return
	}

	// Create an empty directory called "/docs" in the filesystem root.
	rootDir = "" // Update this variable to the desired path if needed
	err = os.MkdirAll(rootDir+"/docs", 0755))
	if err != nil {
		fmt.Println(err)
		return
	}
}
```

This Golang code will create an empty file "output.txt" in the current working directory and once in the filesystem root, as required by your initial question.
