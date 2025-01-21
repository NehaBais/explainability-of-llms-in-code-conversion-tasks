To convert this Java code to Golang, you can use the `io/ioutil` package for file operations. The `os` package contains functions to interact with the operating system.

Here's how you can implement it:

```go
package main

import (
	"io/ioutil"
	"os"
)

func main() {
	// Check if input.txt exists in the current working directory
	_, err := ioutil.ReadFile("docs/input.txt")
	if err != nil {
		if os.IsNotExist(err) {
			println("input.txt does not exist in the current working directory.")
		} else {
			panic("Error reading input.txt: " + err.Error())
		}
	}

	// Check if input.txt exists in the filesystem root
	err = ioutil.ReadFile("/docs/input.txt")
	if err != nil {
		if os.IsNotExist(err) {
			println("input.txt does not exist in the filesystem root.")
		} else {
			panic("Error reading input.txt: " + err.Error())
		}
	}

	// Check if docs directory exists in the current working directory
	exists, err := fileExists(os.Getenv("PWD"), "docs")
	if err != nil {
		panic("Error checking for docs directory: " + err.Error())
	} else if !exists {
		println("docs directory does not exist in the current working directory.")
	}

	// Check if docs directory exists in the filesystem root
	exists, err = fileExists("/", "docs")
	if err != nil {
		panic("Error checking for docs directory: " + err.Error())
	} else if !exists {
		println("docs directory does not exist in the filesystem root.")
	}
}

func fileExists(path string, filename string) (bool, error) {
	_, err := os.Stat(filepath.Join(path, filename))
	if err != nil {
		if os.IsNotExist(err) {
			return false, nil
		} else {
			return false, err
		}
	}
	return true, nil
}
```

In this code:
- We first attempt to read `input.txt` from the current working directory and print an error message if it does not exist.
- Then, we attempt to read `input.txt` from the filesystem root and print an error message if it does not exist.
- To check for the existence of a directory, we use the `fileExists` helper function which uses `os.Stat` to check if the file exists at the specified path. If the directory does not exist, `fileExists` returns false with an appropriate error message.

Note: The `os.Getenv("PWD")` is used to get the current working directory and the `filepath.Join(path, filename)` constructs a full path from the path and filename provided.
