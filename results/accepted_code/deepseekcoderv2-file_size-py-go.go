package main

import (
	"fmt"
	"io/ioutil"
)

func main() {
	size, err := ioutil.ReadFile("input.txt")
	if err == nil {
		fmt.Println(len(size))
	} else {
		fmt.Println("The file does not exist.")
	}
	size2, err := ioutil.ReadFile("/input.txt")
	if err == nil {
		fmt.Println(len(size2))
	} else {
		fmt.Println("The file does not exist.")
	}
}
