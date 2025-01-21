package main

import (
	"fmt"
	"os"
)

func main() {
	path := "C:/parent/test"

	err := os.MkdirAll(path, 0755)
	if err != nil {
		fmt.Println("Error creating directory:", err)
		return
	}

	fmt.Println("Directory created successfully")
}
