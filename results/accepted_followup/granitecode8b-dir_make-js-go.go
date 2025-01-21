package main

import (
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, os.ModePerm)
	if err != nil {
		return err
	}
	return nil
}
func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		panic(err)
	}
}
