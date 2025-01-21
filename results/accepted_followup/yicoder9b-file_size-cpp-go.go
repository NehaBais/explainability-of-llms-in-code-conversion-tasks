package main

import (
	"fmt"
	"os"
	"strconv"
)

func printFileSize(fileName string) {
	file, err := os.Open(fileName)
	if err != nil {
		panic(err)
	}
	defer file.Close()

	info, _ := file.Stat()
	fmt.Println("Size of file " + fileName + " is " +
		strconv.Itoa(int(info.Size())) + " bytes.")
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
