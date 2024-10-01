package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	}

	dir, err := os.Getwd()
	if err != nil {
		fmt.Println(err)
	}

	err = os.Chdir("/")
	if err != nil {
		fmt.Println(err)
	}

	err = os.Rename(dir+"/input.txt", dir+"/output.txt")
	if err != nil {
		fmt.Println(err)
	}

	err = os.Rename(dir+"/docs", dir+"/mydocs")
	if err != nil {
		fmt.Println(err)
	}

	os.Chdir(dir) // go back to the original directory
	if err != nil {
		fmt.Println(err)
	}
}
