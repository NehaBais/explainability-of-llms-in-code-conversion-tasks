 Sure, here's the equivalent Go code to verify that `input.txt` and `docs` exist (as files or directories) in both the current working directory and the filesystem root:

```go
package main

import (
	"fmt"
	"os"
)

// Check if a file exists and is a regular file.
func checkReg(path string) bool {
	info, err := os.Stat(path)
	return err == nil && info.Mode().IsRegular()
}

// Check if a file exists and is a directory.
func checkDir(path string) bool {
	info, err := os.Stat(path)
	return err == nil && info.Mode().IsDir()
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", yesNo(checkReg("input.txt")))
	fmt.Printf("docs is a directory? %s\n", yesNo(checkDir("docs")))
	fmt.Printf("/input.txt is a regular file? %s\n", yesNo(checkReg("/input.txt")))
	fmt.Printf("/docs is a directory? %s\n", yesNo(checkDir("/docs")))
}

// Helper function to convert boolean result to "yes" or "no".
func yesNo(b bool) string {
	if b {
		return "yes"
	}
	return "no"
}
```

This Go code performs the same checks as the provided C code, verifying if `input.txt` and `docs` are regular files or directories in both the current working directory and the filesystem root. The helper function `yesNo` is used to convert boolean results into "yes" or "no".
