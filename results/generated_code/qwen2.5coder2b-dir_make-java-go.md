The equivalent of `mkdir -p` in Golang is using the built-in `os.MkdirAll()` function. This function creates the specified path, creating any missing parent directories.

Here's how you can implement this:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	path := "C:/parent/test"

	err := os.MkdirAll(path, 0755)
	if err != nil {
		fmt.Println("Error creating directory:", err)
		return
	}

	fmt.Println("Directory created successfully")
}
```

In this example:
- `path` is the path to the directory you want to create.
- `os.MkdirAll(path, 0755)` creates the directory at the specified path. The second argument `0755` sets the permission of the directory. You can modify this as per your needs.

The `0755` in `os.MkdirAll()` sets permissions to 755, which is similar to the `-p` flag in `mkdir -p`. The first digit (7) gives you read and write access for the owner, the second (5) gives read access for everyone else, and the third (5) gives execute permission for everyone.
