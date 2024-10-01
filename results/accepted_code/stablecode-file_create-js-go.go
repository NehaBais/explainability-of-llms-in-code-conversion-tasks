package main

import (
	"io/ioutil"
	"log"
	"os"
)

func fct(err error) {
	if err != nil {
		log.Println(err)
	}
}

func createFile() {
	file, err := os.Create("output.txt")
	fct(err)
	defer file.Close()

	_, err = file.Write([]byte("")))
	fct(err)
}

func createDirectory() {
	err := os.MkdirAll("docs", 0o755))
	fct(err)
}

func main() {
	createFile()
	createFile()

	createDirectory()
	createDirectory()
}