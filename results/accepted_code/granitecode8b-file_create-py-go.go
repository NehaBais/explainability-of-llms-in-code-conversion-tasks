package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func create(directory string) {
	if err := ioutil.WriteFile(fmt.Sprintf("%s%coutput.txt", directory, os.PathSeparator), []byte(""), 0644); err != nil {
		log.Fatal(err)
	}
	if err := os.MkdirAll(fmt.Sprintf("%s%cdocs", directory, os.PathSeparator), 0755); err != nil {
		log.Fatal(err)
	}
}
func main() {
	create(".") // current directory
	create("/") // root directory
}
