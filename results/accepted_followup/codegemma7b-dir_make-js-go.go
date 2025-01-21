package main

import (
	"os"
	"path/filepath"
)

// mkdirp creates a directory and its parent directories if they don't exist.
func mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}
