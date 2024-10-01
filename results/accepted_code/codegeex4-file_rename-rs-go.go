package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		log.Fatal(err)
	}
}
