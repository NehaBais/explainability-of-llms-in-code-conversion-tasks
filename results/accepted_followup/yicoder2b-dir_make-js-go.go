package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(p string, err error, cbFunc func(error)) {
	if _, ok := os.Stat(p); ok && !os.IsDir(err) {
		cbFunc(fmt.Errorf("Error creating directory %s: %v\n", p, err))
		return
	}
	abspath, _ := filepath.Abs(p)
	switch err {
	case nil:
		// Directory already exists
		return
	case os.ErrNotDir:
		parent, _ := filepath.Split(abspath)
		if err = mkdirp(parent, nil, func(err error)) {
			cbFunc(fmt.Errorf("Failed to create parent path %s: %v\n", parent, err))
		} else {
			if err = mkdirp(abspath, nil, cbFunc); err != nil {
				// Error during recursive call of mkdirp
				cbFunc(fmt.Errorf("Error creating directory %s: %v\n", abspath, err))
			} else {
				cbFunc(nil) // Successfully created the directory
			}
		}
	default:
		cbFunc(fmt.Errorf("Error creating directory %s: %v\n", abspath, err))
	}
}

func main() {
	// Call the mkdirp function with a callback that will handle any error
	mkdirp("/path/to/directory", nil, func(err error) {
		if err != nil {
			fmt.Printf("Error creating directory: %v\n", err)
		} else {
			fmt.Println("Directory created successfully")
		}
	})
}