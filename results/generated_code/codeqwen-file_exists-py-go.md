In Go, the equivalent code would be:

```go
package main

import (
	"fmt"
	"io/ioutil"
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
		fmt.Printf("%s is a file, not a directory\n", filename)
	} else {
		fmt.Printf("%s is a directory\n", filename)
	}
}

func main() {
	dirPath := "./" // current working directory
	dirFilePath := "/input.txt" // root filesystem

	checkFile(filepath.Join(dirPath, "input.txt"))
	checkFile(dirFilePath)

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
		fmt.Printf("%s is a file, not a directory\n", checkDir)
	} else {
		fmt.Printf("%s is a directory\n", checkDir)
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
		fmt.Printf("%s is a directory\n", dirFileDirPath)
	}
}
```

Please replace `filepath.Join(dirPath, "input.txt")` with the correct path to your `input.txt` file if it's located elsewhere in your filesystem. 

The main function includes two calls to checkFile and one call for checking directories. Note that we don't use `os.path.isdir()` directly, instead we use `info.IsDir()`. This works because the Stat function returns an error if the path does not exist or is not accessible, so we handle these cases as well by printing a relevant message and returning early. 

Also, note that Go requires explicit paths to directories and files. If you want to check the current working directory, you should use `./`, and for the root of your system, use `/`. If your file is in root, then use `/filename` as it starts from the root of your system.

Please make sure that you have necessary permissions to access these files or directories.
