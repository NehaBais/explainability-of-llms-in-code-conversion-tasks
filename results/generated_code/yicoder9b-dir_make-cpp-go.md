In Go, you can use the `os` package to perform file system operations such as creating directories. Here's how you might translate your C++ code:

```go
package main

import (
	"fmt"
	"log"
	"os"
)

func mkdir(path string) error {
	if _, err := os.Stat(path); err != nil && !os.IsNotExist(err) {
		return fmt.Errorf("couldn't create directory: %s", path)
	}

	// if the directory already exists or it doesn't exist but can be created return success
	if err := os.MkdirAll(path, 0750); err != nil {
		return fmt.Errorf("couldn't create directory: %s", path)
	}
	
	return nil
}

func main() {
	err := mkdir("./path/to/dir")
	if err != nil {
		log.Fatalln(err)
	}
}
```
The `os.MkdirAll` function creates all directories in the path, making sure to create any missing parents along the way. If the directory already exists it will return success and if there's an error creating a directory it returns an error.
