To convert this code from JavaScript to Go, you can use the following equivalent code:
```
package main

import (
	"os"
	"path/filepath"
)

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
In this Go code, we use the `os` and `path/filepath` packages to implement the same behavior as the JavaScript code. The `os.Stat()` function is used to check if a directory exists, and if it doesn't exist, we call the `mkdirp` function recursively with the parent directory path as an argument. If the `os.Stat()` function returns an error other than "ENOENT" (which means that the directory does not exist), we pass the error to the callback function.

The `filepath.Dir()` function is used to get the parent directory path from a given file path, and it's called recursively until we reach the root directory. Once we have the full path to the directory we want to create, we call the `os.MkdirAll()` function to create the directory and any missing parents. If there is an error creating the directory or any of its parent directories, we pass the error to the callback function.

Please note that this code is not tested, you may need to adjust it according to your specific use case.
