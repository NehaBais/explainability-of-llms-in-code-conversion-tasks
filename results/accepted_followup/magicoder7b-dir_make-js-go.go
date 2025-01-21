package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	mkdirp("/path/to/directory", func(err error) {
		if err != nil {
			fmt.Println("An error occurred: ", err)
		} else {
			fmt.Println("Directory created successfully")
		}
	})
}

func mkdirp(p string, cb func(error)) {
	err := os.MkdirAll(p, 0755)

	if err == nil {
		cb(nil)
	} else {
		switch v := err.(type) {
		case *os.PathError:
			if v.Err != nil && v.Err.Error() == "parent directory does not exist" {
				mkdirp(filepath.Dir(p), cb)
				mkdirp(p, cb)
			} else {
				cb(err)
			}
		default:
			fmt.Println("Other error occurred.")
			cb(err)
		}
	}
}
