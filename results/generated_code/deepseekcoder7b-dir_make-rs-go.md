In Go, you can use the os package to achieve this functionality. This package provides functions for interacting with the filesystem in a cross-platform way. 

Below is an equivalent implementation of your Rust code in Golang:

```go
package main

import (
	"log"
	"os"
)

func createDir(path string) {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		log.Fatalf("An error occurred while creating directory: %s", err)
	}
}

func main() {
    createDir("./path/to/dir")
}
```
In this Go code, we're defining a function called `createDir` that takes a path as an argument. This path is then passed to the os package’s MkdirAll function which creates all the necessary directories if they do not already exist. 0755 is a permission mask; you can modify it according to your requirements. If an error occurs, we log the failure and exit the program. Finally, in our main() function, we're calling `createDir` with the required path.

