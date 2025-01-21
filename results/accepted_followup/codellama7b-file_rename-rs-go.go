package main

import (
	"fmt"
	"os"
)

func main() {
	//Rename a file called input.txt into output.txt and
	//a directory called docs into mydocs.
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	}
}
