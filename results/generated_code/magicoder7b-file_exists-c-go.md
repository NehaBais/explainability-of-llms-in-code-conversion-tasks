 Below is the equivalent Go code for your C program:

```Go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkReg(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !info.IsDir() && (info.Mode().Perm()&0100 == 0100)
}

func checkDir(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return info.IsDir() && (info.Mode().Perm()&0400 == 0400)
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", checkReg("input.txt"))
	fmt.Printf("/input.txt is a regular file? %s\n", checkReg(filepath.Join("/", "input.txt")))

	fmt.Printf("docs is a directory? %s\n", checkDir("docs"))
	fmt.Printf("/docs is a directory? %s\n", checkDir(filepath.Join("/", "docs")))
}
```
The `checkReg` function checks if the file exists and returns true if it's a regular file (not a directory). The `checkDir` function does the same but for directories. The program prints whether or not the files are regular or directories by calling these functions with different paths to check both in the current working directory and at the root of the filesystem.
