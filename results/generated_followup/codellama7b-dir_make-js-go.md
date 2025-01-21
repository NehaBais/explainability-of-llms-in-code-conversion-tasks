The error occurs because the `main` package does not have access to the `mkdirp` function, as it is defined outside of the main package. To fix this, we need to move the `mkdirp` function inside the `main` package.

Here's the corrected code:
```go
package main

import (
	"os"
	"path/filepath"
)

func main() {
	// The directory path we want to create
	p := "/path/to/dir"

	mkdirp(p, func(err error) {
		if err != nil {
			panic(err)
		}
	})
}

func mkdirp(p string, cb func(err error)) {
	if _, err := os.Stat(p); err == nil {
		return // The directory already exists.
	} else if !os.IsNotExist(err) {
		cb(err)
	} else {
		// The directory doesn't exist. Make its parent and try again.
		parent := filepath.Dir(p)
		mkdirp(parent, func(err error) {
			if err != nil {
				cb(err)
			} else {
				// Recursively call mkdirp with the full path.
				mkdirp(p, cb)
			}
		})
	}
}
```
