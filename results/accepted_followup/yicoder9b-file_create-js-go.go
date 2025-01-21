package main

import (
	"log"
	"os"
)

func main() {
	createFile("output.txt", "")
	createFile("/output.txt", "")

	createDir("docs")
	createDir("/docs")
}

// create a file and write content to it
func createFile(name string, content string) {
	f, err := os.Create(name)
	if err != nil {
		log.Fatal(err)
	}
	defer f.Close()

	_, err = f.WriteString(content) // use the WriteString method instead of io.WriteString
	if err != nil {
		log.Fatal(err)
	}
}

// create a directory
func createDir(name string) {
	err := os.Mkdir(name, 0750)
	if err != nil {
		log.Fatal(err)
	}
}
