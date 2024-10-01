The equivalent Go code to the C code you provided is as follows:
```go
package main

import (
	"os"
)

func main() {
	// Create an empty file "output.txt" in the current working directory
	fd, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	defer fd.Close()

	// Create an empty directory "docs" in the current working directory
	if err = os.Mkdir("docs", 0750); err != nil {
		panic(err)
	}

	// Create an empty file "output.txt" in the root filesystem
	fd, err = os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	defer fd.Close()

	// Create an empty directory "docs" in the root filesystem
	if err = os.Mkdir("/docs", 0750); err != nil {
		panic(err)
	}
}
```
Please note that Go does not support creating a file or directory with specific permissions (0640 and 0750 respectively) in the same way as C. Instead, it uses a more flexible system of file modes where you can set individual permissions for each user, group, and other. To achieve the same result as C, you would need to use the `os.Chmod` function after creating the file or directory.
