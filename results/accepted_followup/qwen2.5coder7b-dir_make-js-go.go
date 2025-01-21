package main

import (
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	err := mkdirp("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
