Below is the equivalent Go code for creating a directory and its parents if it does not exist:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"

func main() {
	args := os.Args
	if len(args) != 2 {
		fmt.Println("Usage: mkdir <path>")
		return
	}

	pathToCreate := args[1]
	if err := filepath.MkdirAll(pathToCreate, 0o755); err != nil {
		fmt.Printf("Couldn't create directory: %s\n", pathToCreate)
		return
	}
	fmt.Printf("Directory created successfully at: %s\n", pathToCreate)
}
```

This Go program uses `filepath` package to handle file and directory operations. The `MkdirAll` function creates the directories specified by `pathToCreate`. It also takes an optional third parameter which specifies the permissions of the new files and directories if any (default is 0755).

If a parent directory does not exist when creating a new directory, it will be created automatically by `MkdirAll`. The permission number 0o755 gives read, write and execute for the owner and group and read and execute for others.
