Below is the Go code equivalent to your Java code:

```go
package main

import (
	"log"
	"os"
)

func createFile(filename string) {
	if _, err := os.Create(filename); err != nil {
		log.Fatal(err)
	}
}

func createDir(dirname string) {
	err := os.Mkdir(dirname, 0755)
	if err != nil && !os.IsExist(err) {
		log.Fatal(err)
	}
}

func main() {
	createFile("output.txt")
	createFile("/output.txt")

	createDir("docs")
	createDir("/docs")
}
```

This code creates the "output.txt" file and the "docs" directory twice, once in the current working directory (`"."`) and once in the root directory (`"/"`). The `os.Create()` function is used to create a new file, while the `os.Mkdir()` function is used to create a new directory.

The `os.IsExist` check ensures that it won't print an error message if the directory already exists. If there's an error creating the file or directory, it will log and terminate with the error.
