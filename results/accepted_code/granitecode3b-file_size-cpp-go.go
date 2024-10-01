package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func printFileSize(filename string) {
	size, err := ioutil.ReadFile(filename)
	if err != nil {
		fmt.Fprintln(os.Stderr, err.Error())
		return
	}
	fmt.Printf("Size of file %s is %d bytes.n", filename, len(size))
}
func main() {
	printFileSize("./input.txt")
	printFileSize("/input.txt")
}
