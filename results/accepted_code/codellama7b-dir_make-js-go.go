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
