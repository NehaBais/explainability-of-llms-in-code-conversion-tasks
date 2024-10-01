package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(p string, cb func(error)) {
	err := os.MkdirAll(p, 0755)

	if err == nil {
		fmt.Println("Directory created successfully")
	} else {
		switch v := err.(type) {
		case *os.PathError:
			if v.Err != nil && v.Err.Error() == "parent directory does not exist" {
				mkdirp(filepath.Dir(p), cb)
				mkdirp(p, cb)
			}
		default:
			fmt.Println("Other error occurred.")
			cb(err)
		}
	}
}
