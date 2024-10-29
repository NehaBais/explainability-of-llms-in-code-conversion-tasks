package main

import (
	"log"
	"os"
)

func mkdirp(path string) error {
	_, err := os.Stat(path)
	if os.IsNotExist(err) {
		errDir := os.MkdirAll(path, 0755)
		return errDir
	}
	return err
}

func main() {
	err := mkdirp("./path/to/dir") // Use your desired path here
	if err != nil {
		log.Fatal(err)
	}
}
