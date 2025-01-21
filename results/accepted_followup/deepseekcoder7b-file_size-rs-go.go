package main

import  (
	"fmt"
	"os"
)

func main() {
	filename1 := "input.txt" // file in current directory
	size, err := getFileSize(filename1)
	if err != nil {
		fmt.Printf("Error getting size of %s: %v\n", filename1, err)
	} else {
		fmt<｜begin▁of▁sentence｜>ize of input.txt is {size} bytes