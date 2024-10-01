package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

const FILE_NAME = "output.txt"
const DIR_NAME = "docs"

func main() {
	create(".")
	create("/")
}
func create(root string) {
	if err := os.MkdirAll(fmt.Sprintf("%s/%s", root, DIR_NAME), 0755); err != nil {
		panic(err)
	}
	if f, err := ioutil.TempFile(root, FILE_NAME); err != nil {
		panic(err)
	} else {
		f.Close()
		os.Remove(f.Name())
	}
}
