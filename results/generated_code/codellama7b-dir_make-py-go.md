package main
import (
	"os"
	"path/filepath"
)
func main() {
	var path string = "./path/to/dir"
	if err := os.MkdirAll(path, os.ModePerm); err != nil {
		panic(err)
	}
}

Here is a solution to your problem:
```
package main

import (
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	if err := os.MkdirAll(path, os.ModePerm); err != nil {
		return err
	}
	return nil
}
```
The "os" and "path/filepath" packages are imported in the code. The "os" package is used to make directories using MkdirAll(), which takes a path string and returns an error if there is an issue with creating the directory, or nil if it was successful. The "path/filepath" package provides functions for working with file paths.

The code in the "main" function defines a path variable that contains the desired path to be created. It then calls the mkdirp() function on this path, passing the path as an argument. If there is an issue creating the directory, such as the directory already existing, the code will return an error.

The mkdirp() function takes a string path as its only argument and creates the directory using os.MkdirAll(). It then returns nil if successful or an error if there was a problem.


