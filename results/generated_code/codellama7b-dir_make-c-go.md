
Here is the equivalent code in Go:
```
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage:", filepath.Base(os.Args[0]), "<path>")
		os.Exit(1)
	}
	path := os.Args[1]
	stat, err := os.Stat(path)
	if err != nil {
		if !os.IsNotExist(err) {
			fmt.Println("error:", err)
			os.Exit(1)
		}
		// create the directory if it doesn't exist
		err = os.MkdirAll(path, 0755)
		if err != nil {
			fmt.Println("error:", err)
			os.Exit(1)
		}
	} else if !stat.IsDir() {
		fmt.Println("couldn't create directory", path)
		os.Exit(1)
	}
}
```
This code uses the `filepath` package to parse the input path and extract its parent directories. It then checks if the directory exists using the `os.Stat()` function, and creates it if necessary using the `os.MkdirAll()` function. The permission bits for the created directory are set to `0755`.

Note that this code assumes that the input path is a relative or absolute path, and does not handle any special cases such as symbolic links or non-existent parent directories.
