Here is a simple Golang implementation of the above C++ code:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirP(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(-1)
	}

	pathToCreate := os.Args[1]

	err := mkdirP(pathToCreate)
	if err != nil {
		fmt.Printf("couldn't create directory: %s\n", pathToCreate)
		os.Exit(-1)
	}
}
```
This Go code creates a function `mkdirP` that takes in a path string as an argument and attempts to create the directory with all necessary parents using `os.MkdirAll`. If there is any error during creation of the directory, it returns an error. 

The main function checks if the length of os.Args (the slice containing command-line arguments) is not equal to 2 (indicating that either no path was provided or more than one argument was passed), and then prints out a usage message.

If a valid path is provided, `mkdirP` is called with this path as an argument. If there's an error during the directory creation process, the error message is printed and the program exits with status -1.
