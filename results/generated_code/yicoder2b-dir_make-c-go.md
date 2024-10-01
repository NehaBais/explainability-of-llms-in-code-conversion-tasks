This is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func CreateDirIfNotExists(dir string) error {
	splits := filepath.Split(dir, '/')
	var parent string
	for _, s := range splits[:len(splits)-1] {
		parent = filepath.Join(parent, s)
		_, err := os.Stat(parent)
		if err != nil && !os.IsNotExist(err) {
			return fmt.Errorf("couldn't create directory %s: %v", parent, err)
		}
		if err == nil {
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
This function will create any missing parent directories for the given path. It uses the `path/filepath` package to split and join paths easily. 

Please note that error handling isn't as extensive as in C++ version, but it does ensure that the directory is created at least once, even if some of its parents already exist.
