 Below is the equivalent Go code for creating a directory and any missing parents if they do not exist:

```go
package main

import (
	"fmt"
	"os"
)

func createDir(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return fmt.Errorf("failed to create directory: %w", err)
	}
	fmt.Println("directory successfully created")
	return nil
}

func main() {
	err := createDir("C:/parent/test")
	if err != nil {
		fmt.Println(err)
	}
}
```
This code uses the `os.MkdirAll` function to create a directory and its parents if they do not exist. This works on Windows as well as Linux systems.
