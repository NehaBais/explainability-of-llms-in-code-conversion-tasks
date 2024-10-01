 Below is the equivalent Go code for your JavaScript code:

```Go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createFile(filename string) {
    _, err := os.Create(filename)
    if err != nil {
        fmt.Println("Could not create file:", err)
    } else {
        fmt.Printf("%s created successfully.\n", filename)
    }
}

func createDirectory(dirName string) {
	err := os.MkdirAll(dirName, 0755)
	if err != nil {
		fmt.Println("Could not create directory: ", err)
	} else {
		fmt.Printf("%s created successfully.\n", dirName)
	}
}

func main() {
    basePath, _ := os.Getwd() // Get current working directory

    filepath1 := filepath.Join(basePath, "output.txt")
    filepath2 := "/output.txt"
    
    dirname1 := filepath.Join(basePath, "docs")
    dirname2 := "/docs"

    createFile(filepath1)
    createFile(filepath2)

    createDirectory(dirname1)
    createDirectory(dirname2)
}
```
This Go code performs the same tasks as your JavaScript code: it creates an empty file called "output.txt" in the current working directory and in the filesystem root, and a directory called "docs" as well. 

Please note that this script needs to be run from the base of your project because it uses `os.Getwd()` function which returns the current working directory.
