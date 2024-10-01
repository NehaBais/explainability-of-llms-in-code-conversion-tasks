package main

import (
	"log"
	"os"
)

func createFile(filename string) {
	if _, err := os.Create(filename); err != nil {
		log.Fatal(err)
	}
}

func createDir(dirname string) {
	err := os.Mkdir(dirname, 0755)
	if err != nil && !os.IsExist(err) {
		log.Fatal(err)
	}
}

func main() {
	createFile("output.txt")
	createFile("/output.txt")

	createDir("docs")
	createDir("/docs")
}
