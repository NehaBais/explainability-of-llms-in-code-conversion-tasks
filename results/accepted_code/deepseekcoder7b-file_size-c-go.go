package main

import (
	"fmt"
	"os"
)

func fileSize(filename string) (int64, error) {
	fInfo, err := os.Stat(filename)
	if err != nil {
		return 0, err
	}
	return fInfo.Size(), nil
}

func main() {
	size, err := fileSize("input.txt")
	if err == nil {
		fmt.Println(size)
	} else {
		fmt.Println(err)
	}

	// Uncomment below to check root directory files as well
	/*
	   size, err = fileSize("/input.txt")
	   if err == nil {
	       fmt.Println(size)
	   } else {
	       fmt.Println(err)
	   }
	*/
}
