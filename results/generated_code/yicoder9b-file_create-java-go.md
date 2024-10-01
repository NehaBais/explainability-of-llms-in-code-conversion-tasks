Below is the equivalent Golang code for creating empty files and directories like in your Java code:

```go
package main

import (
    "os"
    "path/filepath"
)

func main() {
	createFile("./output.txt")
	createDir("./docs")

	root := "/"
	absPath, err := filepath.Abs(root)
	if err != nil {
		panic(err)
	}
	createFile(filepath.Join(absPath, "output.txt"))
	createDir(filepath.Join(absPath, "docs"))
}

func createFile(name string){
	fd, err := os.Create(name)
    if err != nil {
        panic(err)
    }
	defer fd.Close()
}

func createDir(name string){
	err := os.Mkdir(name, 0750)
	if err != nil {
		panic(err)
	}
}
```

This GoLang program does the same thing as your Java code: it creates an empty file named "output.txt" and a directory called "docs" in the current working directory, and also at the filesystem root using absolute paths. It will panic and print error messages if any errors occur during these operations.
