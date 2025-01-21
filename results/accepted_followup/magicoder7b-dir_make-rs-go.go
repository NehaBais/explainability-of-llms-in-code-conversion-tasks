package main

import (
	"os"
)

func createDirAll(dir string) error {
	return os.MkdirAll(dir, 0755)
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
