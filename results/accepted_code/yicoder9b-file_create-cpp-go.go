package main

import (
	"io/ioutil"
	"os"
)

func createFile(path string) {
	err := ioutil.WriteFile(path, nil, 0644)
	if err != nil {
		panic(err)
	}
	info, _ := os.Stat(path)
	println("Size of file is: " + string(info.Size()))
}

func createDir(path string) {
	err := os.Mkdir(path, 0750)
	if err != nil {
		panic(err)
	}
}

func main() {
	createFile("output.txt")
	createFile("/output.txt")

	createDir("docs")
	createDir("/docs")
}
