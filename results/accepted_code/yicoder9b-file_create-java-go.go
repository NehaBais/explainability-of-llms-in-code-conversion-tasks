package main

import (
	"os"
	"path/filepath"
)

func main() {
	createFile("./output.txt")
	createDir("./docs")

	root := "/"
	absPath, err := filepath.Abs(root)
	if err != nil {
		panic(err)
	}
	createFile(filepath.Join(absPath, "output.txt"))
	createDir(filepath.Join(absPath, "docs"))
}

func createFile(name string) {
	fd, err := os.Create(name)
	if err != nil {
		panic(err)
	}
	defer fd.Close()
}

func createDir(name string) {
	err := os.Mkdir(name, 0750)
	if err != nil {
		panic(err)
	}
}
