Below is the Go version of your C++ code:

```go
package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	_, err := os.Stat(path)
	if err == nil {
		info, err := os.Stat(path)
		if err != nil {
			fmt.Printf("%s does not exist\n", path)
			return
		}
		mode := info.Mode()
		if mode.IsDir() {
			fmt.Printf("%s is a directory\n", path)
		} else if !mode.IsRegular() {
			fmt.Printf("%s exists but is not a regular file or directory\n", path)
		} else {
			fmt.Printf("%s exists with a size of %d bytes.\n", path, info.Size())
		}
		return
	}

	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", path)
		return
	}
}

func main() {
	fileExists("input.txt")
	fileExists("/zero_length.txt") // File in filesystem root
	fileExists("docs/input.txt")
	fileExists("/docs/zero_length.txt") // File in filesystem root
}
```
This Go version checks whether a file or directory exists and prints out information about it, such as its size and type. The os.Stat function is used to get the FileInfo of the path, which contains metadata about the file/directory. We check the error returned by os.Stat to determine if the path exists or not. If it does exist, we use the Mode() method of FileInfo to determine whether it's a directory or a regular file. The Size() method is used to get the size of a regular file.

Please make sure that you replace "/zero_length.txt" and "/docs/zero_length.txt" with the correct paths in your filesystem root. These are just placeholders indicating where these files might exist relative to the filesystem root.
