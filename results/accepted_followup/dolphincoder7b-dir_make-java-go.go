package main

import (
	"os"
	"path/filepath"
)

func main() {
	err := os.MkdirAll("C:/parent/test", 0755) // This creates all parents as well
	if err != nil {
		panic(err)
	} else {
		fmt.Println("path successfully created")
	}
}
