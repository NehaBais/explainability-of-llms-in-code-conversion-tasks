package main

import (
	"io/ioutil"
	"os"
)

func create(directory string) {
	ioutil.WriteFile(directory+"/output.txt", []byte{}, 0644)
	os.Mkdir(directory+"/docs", 0755)
}

func main() {
	create(".") // current directory
	create("/") // root directory (not recommended, it's not possible to access "/" in Go)
}
