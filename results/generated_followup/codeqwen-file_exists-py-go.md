Error: "io/ioutil" imported and not used

To fix this error, remove the import of `io/ioutil`. This is because the `os` package in Go already has functions to handle files and directories, including checking if they exist. Therefore, you don't need `io/ioutil` for this task. 

Corrected code:
```go
package main

import (
	"fmt"
	"os"
)

func checkFile(filename string) {
	info, err := os.Stat(filename)
	if err != nil {
		fmt.Println("Error occurred: ", err)
		return
	}
	if info == nil {
		fmt.Printf("%s does not exist\n", filename)
		return
	}
	if !info.IsDir() {
		fmt.Printf("%s Is a file, not a directory\n", filename)
	} else {
		fmt.Printf("%s Is a directory\n", filename)
	}
}

func main() {
	dirPath := "./"             // current working directory
	dirFilePath := "/input.txt" // root filesystem

	checkFile(filepath.Join(dirPath, "input.txt"))
	checkFile(dirFilePath)

	// check for directories
	checkDir := "./docs"
	dirFileDirPath := "/docs"

	info, err := os.Stat(checkDir)
	if err != nil {
		fmt.Println("Error occurred: ", err)
		return
	}
	if info == nil {
		fmt.Printf("%s does not exist\n", checkDir)
		return
	}
	if !info.IsDir() {
		fmt.Printf("%s Is a file, not a directory\n", checkDir)
	} else {
		fmt.Printf("%s Is a directory\n", checkDir)
	}

	info, err = os.Stat(dirFileDirPath)
	if err != nil {
		fmt.Println("Error occurred: ", err)
		return
	}
	if info == nil {
		fmt.Printf("%s does not exist\n", dirFileDirPath)
		return
	}
	if !info.IsDir() {
		fmt.Printf("%s Is a file, not a directory\n", dirFileDirPath)
	} else {
		fmt.Printf("%s Is a directory\n", dirFileDirPath)
	}
}
```
