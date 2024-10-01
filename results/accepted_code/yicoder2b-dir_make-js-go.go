package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(p string, err error) {
	if _, ok := os.Stat(p); ok && !os.IsDir(err) {
		return
	}
	abspath, _ := filepath.Abs(p)
	switch err {
	case nil:
		// Directory already exists
		return
	case os.ErrNotDir:
		// Parent directory does not exist
		parent, _ := filepath.Split(abspath)
		if err = mkdirp(parent, nil); err != nil {
			fmt.Printf("Failed to create parent path %s: %v\n", parent, err)
		} else {
			err = mkdirp(abspath, nil)
		}
	default:
		fmt.Printf("Error creating directory %s: %v\n", abspath, err)
	}
}
