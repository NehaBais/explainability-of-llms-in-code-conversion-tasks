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
	dir := filepath.Dir(path)
	if err := mkdirp(dir); err != nil {
		panic(err)
	}
}
