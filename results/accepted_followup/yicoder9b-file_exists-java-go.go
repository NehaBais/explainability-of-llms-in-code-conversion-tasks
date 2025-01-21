package main

import (
	"os"
)

func main() {
	_, err := os.Stat("docs/input.txt")
	if os.IsNotExist(err) {
		println("File does not exist or path is incorrect!")
	} else {
		println("File exists and located in the correct directory!")
	}
	_, err := os.Stat("/docs/input.txt")
	if os.IsNotExist(err) {
		println("File does not exist or path is incorrect!")
	} else {
		println("File exists and located in the correct directory!")
	}
}
