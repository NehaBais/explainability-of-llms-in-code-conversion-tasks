package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func createFile(dir string) {
	err := ioutil.WriteFile(dir, []byte{}, 0644)
	if err != nil {
		fmt.Println("Error creating file:", err.Error())
	}
}

func createDirectory(dir string) {
	err := os.MkdirAll(dir, 0755)
	if err != nil {
		fmt.Println("Error creating directory:", err.Error())
	}
}

func main() {
	createFile("./output.txt")
	createDirectory("./docs")

	createFile("/output.txt")
	createDirectory("/docs")
}
