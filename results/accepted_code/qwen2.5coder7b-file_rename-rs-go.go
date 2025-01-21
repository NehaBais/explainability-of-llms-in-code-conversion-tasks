package main

import (
	"fmt"
	"os"
)

func main() {
	err := "File move error"

	if err != nil {
		fmt.Println(err)
		return
	}

	if err = os.Rename("input.txt", "output.txt"); err != nil {
		fmt.Println(err)
		return
	}

	if err = os.Rename("docs", "mydocs"); err != nil {
		fmt.Println(err)
		return
	}

	if err = os.Rename("/input.txt", "/output.txt"); err != nil {
		fmt.Println(err)
		return
	}

	if err = os.Rename("/docs", "/mydocs"); err != nil {
		fmt.Println(err)
		return
	}

	fmt.Println("All operations completed successfully")
}
