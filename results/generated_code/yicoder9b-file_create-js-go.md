In Go language (Golang), you can use the os package to create files and directories. Here's how your JavaScript code would translate:

```go
package main

import (
	"os"
	"log"
	"io/ioutil"
)

func main() {
	createFile("output.txt", "")
	createFile("/output.txt", "")

	createDir("docs")
	createDir("/docs")
}

// create a file and write content to it
func createFile(name string, content string) {
    f, err := os.Create(name)
    if err != nil {
        log.Fatal(err)
    }
	defer f.Close()

	_, err = io.WriteString(f, content)
    if err != nil {
        log.Fatal(err)
    }
}

// create a directory
func createDir(name string) {
	err := os.Mkdir(name, 0750)
    if err != nil {
        log.Fatal(err)
    }
}
```

This Go code does exactly the same thing as your JavaScript code - it creates an empty file and directory in the current working directory and filesystem root twice each. It uses the os package's Create method to create a new file, and Mkdir to create a directory. If any error occurs during this process (such as permission denied), the error will be logged out and the program will exit.
