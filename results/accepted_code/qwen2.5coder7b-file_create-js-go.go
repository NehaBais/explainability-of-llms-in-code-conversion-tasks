package main

import (
	"log"
	"os"
)

func fct(err error) {
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	err := os.WriteFile("output.txt", []byte(""), 0644)
	fct(err)

	root, err := os.Open("/")
	fct(err)

	defer root.Close()

	err = os.Mkdir("docs", 0755)
	fct(err)

	err = os.Mkdir("/docs", 0755)
	fct(err)
}
