package main

import (
	"os"
)

func main() {
	dirs := []string{"./docs", "/docs"}

	for _, dir := range dirs {
		err := os.Mkdir(dir, 0750)
		if err != nil && !os.IsExist(err) {
			panic("Error creating directory: " + err.Error())
		}
	}

	fh, err := os.Create("output.txt")
	if err != nil {
		panic("Error creating file: " + err.Error())
	}
	defer fh.Close()

	err = fh.Truncate(0)
	if err != nil {
		panic("Error truncating file: " + err.Error())
	}
}
