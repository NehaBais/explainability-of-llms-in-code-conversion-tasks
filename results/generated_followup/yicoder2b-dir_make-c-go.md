Sure, the problem with the C++ version is that it expects to handle more variables than what `filepath.Split` returns, whereas Golang's `os.Mkdir` function doesn't return any values and only takes one argument (`parent` in this case) for error checking.

The corrected Golang code would look like:
```go
package main

import (
	"fmt"
	"path/filepath"
	"os"
)

func CreateDirIfNotExists(dir string) error {
	splits := filepath.Split(dir, '/')
	var parent string
	for _, s := range splits[:len(splits)-1] { // last element is the directory itself in case it's missing its own parent
		parent = filepath.Join(parent, s)
		_, err := os.Stat(parent) // Stat returns error if dir does not exist
		if err != nil && !os.IsNotExist(err) {
			return fmt.Errorf("couldn't create directory %s: %v", parent, err)
		}
		if err == nil { // If the directory exists already, just move on to next parent
			continue
		}
		_, err = os.Mkdir(parent, 0755) // Default perms, change to fit your needs
		if err != nil {
			return fmt.Errorf("couldn't create directory %s: %v", parent, err)
		}
	}
	return nil
}
```
The corrected Golang version does exactly the same as the C++ version. It creates any missing parent directories for the given path by using the `filepath.Split` function to split the path into segments and then joining them back together with `filepath.Join`. 

If the directory does not exist at any segment, it is created at that segment (after all previous segments are created). If there was an existing directory at a segment, we just move on to the next segment without trying to create it again.
