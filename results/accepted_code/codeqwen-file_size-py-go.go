package main

import (
	"fmt"
	"os"
)

func getFileSize(fileName string) (int64, error) {
	info, err := os.Stat(fileName)
	if err != nil {
		return 0, err
	}
	return info.Size(), nil
}

func main() {
	size, err := getFileSize("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Printf("The size of the 'input.txt' file is %d bytes\n", size)
	}

	size, err = getFileSize("/input.txt")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Printf("The size of the '/input.txt' file is %d bytes\n", size)
	}
}
