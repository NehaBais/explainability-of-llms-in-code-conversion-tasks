The error occurs because "io/fs" and "path/filepath" are not used in the code, resulting in unused imports. We can remove these lines to resolve the issue.

The fix involves removing the unused import statements. Here's how you can modify the code:
```go
package main

import (
	"fmt"
	"os"
)

func mkdir(name string) error  {
    if err := os.MkdirAll(name, 0755); err != nil && !os.IsExist(err) {
        return err
    }
    return nil
}

func main()  {
    dirName := "./path/to/dir"
    fmt.Println("Creating directory", dirName)

    if err := mkdir(dirName); err == nil {
        fmt.Println("Directory created successfully.")
    } else {
        fmt.Printf("Error creating directory: %s\n", err)
    }
}
```

In the rewritten code, we have removed the unused imports and made necessary changes to use os.MkdirAll instead of fs.CreateDirectories to create directories recursively. 

Please note that the "path/filepath" package is still used in this example for handling file paths. This is because Go's path manipulation functions are based on the "os" package, which provides a convenient and efficient way to work with file system operations in Golang.
