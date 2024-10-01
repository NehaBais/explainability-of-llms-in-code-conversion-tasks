Sure, here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"os"
)

func createDirAll(path string) error {
	if _ != os.Mkdir(path, 0755) && err != nil {
		return err
	}
	return nil
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully")
	}
}
```
This code will create a directory `./path/to/dir` if it does not exist. If the directory already exists, the function will return with an error (the variable err).
