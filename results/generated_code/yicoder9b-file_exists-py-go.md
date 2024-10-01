In Go, you can use the `os` and `builtin` packages to check if a file or directory exists. Here is equivalent Golang code for your Python script:

```go
package main

import (
	"os"
	"path/filepath"
)

func main() {
    // Check existence in current working directory 
	exists("input.txt")
	exists("docs")

    // Check existence at the root of your filesystem  
	exists("/input.txt")
	exists("/docs")
}

func exists(path string) {
	_, err := os.Stat(filepath.Clean(path))
	if err == nil {
		println(path + " exists")
	} else if os.IsNotExist(err) {
        println(path + " does not exist") 
    } else { 
        println("error: "+ err.Error()) 
    }  
}
```

In the above code, `os.Stat()` is used to get information about a file or directory at a specified path. If there's an error and it isn't because the file doesn't exist (`IsNotExist(err)`), then we consider it as an error. If no error occurs when calling `os.Stat()`, it means that the file or directory exists.
