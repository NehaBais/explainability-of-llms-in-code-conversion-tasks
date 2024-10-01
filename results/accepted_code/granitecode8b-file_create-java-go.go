package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.WriteFile("output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = os.MkdirAll("docs", os.ModePerm)
	if err != nil {
		fmt.Println(err)
	}
}
