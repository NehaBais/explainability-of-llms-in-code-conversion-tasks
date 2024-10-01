In GoLang, the equivalent function to create a directory and any missing parent directories is os.MkdirAll(). 
The code snippet in Golang that accomplishes this task would be:

```go
package main

import (
    "os"
	"fmt"
)

func main() {
    err := CreateDir("C:/parent/test")
    if err != nil {
        panic(err) // use proper error handling in your application
    } else {
		fmt.Println("path successfully created")
	}
}

func CreateDir(dir string) error {
    if _, err := os.Stat(dir); os.IsNotExist(err) {
        return os.MkdirAll(dir, 0750)
    }
    return nil
}
```

The CreateDir() function in the code checks if a given directory exists or not with os.Stat() and then uses os.MkdirAll() to create it if it does not exist. The MkdirAll() function automatically creates any parent directories that do not yet exist. If the directory already exists, this function will return nil (no error).
