In GoLang the equivalent code would be:

```Go
package main

import (
	"errors"
	"os"
	"path/filepath"
)

func createDir(dir string) error {
	p := ""
	for _, part := range filepath.SplitList(dir) {
		if len(part) == 0 {
			continue
		}
		p = filepath.Join(p, part)
		info, err := os.Stat(p)
		if err != nil {
			err = os.Mkdir(p, 0750)
			if err != nil {
				return errors.New("couldn't create directory " + p)
			}
		} else if !os.IsDir(info.Mode()) {
			return errors.New("couldn't create directory " + p)
		}
	}
	return nil
}
```
This function takes the path string as an argument and recursively creates each directory in order, checking to make sure that they do not already exist or are not files before creating them. If any error occurs during this process it returns an error message.
