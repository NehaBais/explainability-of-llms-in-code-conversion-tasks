package main

import (
	"fmt"
	"os"
)

func main() {
	var statInfo os.FileInfo
	var err error

	// Check the current working directory
	statInfo, err = os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", int64(statInfo.Size()))

	// Check the root directory
	statInfo, err = os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", int64(statInfo.Size()))
}
