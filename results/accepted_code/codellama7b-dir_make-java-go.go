package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	path := "C:/parent/test"

	err := os.MkdirAll(path, 0755)
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("path successfully created")
}
