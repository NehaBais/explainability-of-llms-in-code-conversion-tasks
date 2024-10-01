package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory
	err := ioutil.WriteFile("output.txt", []byte{}, 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = ioutil.WriteFile("/output.txt", []byte{}, 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = os.Mkdir("docs", 0755)
	if err != nil {
		fmt.Println(err)
	}
	err = os.Mkdir("/docs", 0755)
	if err != nil {
		fmt.Println(err)
	}
}
