package main

import (
	"io/ioutil"
	"log"
	"os"
)

func main() {
	err := os.WriteFile("./output.txt", []byte{}, 0644)
	if err != nil {
		log.Fatal(err)
	}

	err = ioutil.WriteFile("/output.txt", []byte{}, 0644)
	if err != nil {
		log.Fatal(err)
	}

	err = os.Mkdir("docs", 0755)
	if err != nil {
		log.Fatal(err)
	}

	err = os.MkdirAll("/docs", 0755)
	if err != nil {
		log.Fatal(err)
	}
}
