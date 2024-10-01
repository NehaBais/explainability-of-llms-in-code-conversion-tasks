package main

import (
	"fmt"
	"os"
)

func main() {
	_, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
	}

	_, err = os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
	}

	_, err = os.Stat("docs")
	if err != nil {
		fmt.Println(err)
	}

	_, err = os.Stat("/docs")
	if err != nil {
		fmt.Println(err)
	}
}
