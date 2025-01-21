package main

import (
	"fmt"
	"io/ioutil"
)

func sizeOfInputTxt() {
	data, err := ioutil.ReadFile("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("Size of input.txt: %d bytes\n", len(data))

	// File in file system root
	rootPath := "/"

	fileData, err := ioutil.ReadFile(rootPath + "input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("Size of root/input.txt: %d bytes\n", len(fileData))
}
