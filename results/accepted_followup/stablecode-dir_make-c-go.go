package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func CreateDirectory(dirPath string) {
	err := os.MkdirAll(dirPath, 0777))

	if err != nil {
		panic(err)
	}
}

func main() {
	dirPath := "./path/to/dir"

	_, err := os.Stat(dirPath)

	if err != nil && !os.IsNotExist(err)) {
		fmt.Println("Error when trying to create the directory:", err)
		return
	} else if os.IsNotExist(err)) {
		CreateDirectory(dirPath)
	}

	fmt.Println("The directory already exists or was successfully created.")

}