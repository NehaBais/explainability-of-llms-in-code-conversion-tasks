package main

import (
	"errors"
	"os"
	"path/filepath"
)

// Mkdirp creates all directories in path, if they do not already exist.
func Mkdirp(path string, mode os.FileMode) error {
	absPath, err := filepath.Abs(path)
	if err != nil {
		return errors.New("Invalid Path: " + path)
	}
	return os.MkdirAll(absPath, mode)
}
