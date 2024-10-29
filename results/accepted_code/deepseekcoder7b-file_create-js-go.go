package main

import (
	"io/ioutil"
	"log"
	"os"
)

func handleErr(err error) {
	if err != nil {
		log.Println(err)
	}
}

func main() {
	err := ioutil.WriteFile("output.txt", []byte{}, 0644)
	handleErr(err)

	_, err = os.Stat("/output.txt")
	if os.IsNotExist(err) {
		err = ioutil.WriteFile("/output.txt", []byte{}, 0644) // file does not exist, create it
		handleErr(err)
	} else {
		handleErr(err) // something went wrong getting the file info
	}

	err = os.Mkdir("docs", 0755)
	handleErr(err)

	_, err = os.Stat("/docs")
	if os.IsNotExist(err) {
		err = os.Mkdir("/docs", 0755) // directory does not exist, create it
		handleErr(err)
	} else {
		handleErr(err) // something went wrong getting the dir info
	}
}
