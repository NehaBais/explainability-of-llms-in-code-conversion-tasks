package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func create(directory string) {
	err := ioutil.WriteFile(directory+"/output.txt", []byte{}, 0644)
	if err != nil {
		log.Fatal(err)
	}

	err = os.Mkdir(directory+"/docs", 0755)
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
