```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkRegular(file string) bool {
	_, err := os.Stat(file)
	if err != nil {
		fmt.Println(err)
		return false
	}

	return os.IsRegular(err)
}

func checkDirectory(dir string) bool {
	_, err := os.Stat(dir)
	if err != nil {
		fmt.Println(err)
		return false
	}

	return os.IsDir(err)
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n",
		checkRegular(filepath.Join(".", "input.txt")))
	fmt.Printf("docs is a directory? %s\n",
		checkDirectory(filepath.Join(".", "docs")))

	fmt.Printf("/input.txt is a regular file? %s\n",
		checkRegular(filepath.Join("/", "input.txt")))
	fmt.Printf("/docs is a directory? %s\n",
		checkDirectory(filepath.Join("/", "docs")))
}
```
