package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	err = os.Rename("c:/input.txt", "c:/output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}

	err = os.Rename("c:/docs", "c:/mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Println("Renaming successful.")
}
