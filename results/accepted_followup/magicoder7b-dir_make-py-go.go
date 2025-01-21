package main

import (
	"os"
	path "path/filepath"
)

func mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}

func main() {
	err := mkdirp("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
