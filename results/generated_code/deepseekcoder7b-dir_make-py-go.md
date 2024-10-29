In Golang, you can use `os` and `os/user` packages to achieve the same thing as Python's 'mkdir -p'. 

Here is a function in Golang that accomplishes this task. The code checks if directory exists using os package Stat function, if it doesn't exist then creates it with MkdirAll method.
```go
package main

import (
	"log"
	"os"
)

func mkdirp(path string) error {
	_, err := os.Stat(path)
	if os.IsNotExist(err) {
		errDir := os.MkdirAll(path, 0755)
		return errDir
	}
	return err
}

func main() {
    err := mkdirp("./path/to/dir") // Use your desired path here
	if err != nil {
		log.Fatal(err)
	}
}
```
In the above code, `os.Stat` is used to check if a directory exists and it return an error with os.IsNotExist function we can use to determine whether a folder does not exist or any other kind of error occurred while trying to access that path. If the directory doesn't exist, then MkdirAll method `os.MkdirAll` creates missing directories along the provided path. It also takes permissions as argument (0755 in this case).

