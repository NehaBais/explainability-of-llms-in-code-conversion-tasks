The error occurred because `os.IsDir` is not directly available or does not exist in Go's standard library os package. To check if a file is directory, we can use the fact that it will have a `mode` that includes `os.ModeDir`.

The corrected code is as follows:

```go
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
		} else if (!(info.Mode() & os.ModeDir) == os.ModeDir) {
			return errors.New("couldn't create directory " + p)
		}
	}
	return nil
}
```
