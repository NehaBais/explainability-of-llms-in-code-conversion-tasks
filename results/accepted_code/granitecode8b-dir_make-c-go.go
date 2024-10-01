package main

import (
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	if err := os.MkdirAll(path, 0755); err != nil {
		return err
	}
	return nil
}
func main() {
	path := "./path/to/dir"
	if err := mkdirp(path); err != nil {
		panic(err)
	}
}
