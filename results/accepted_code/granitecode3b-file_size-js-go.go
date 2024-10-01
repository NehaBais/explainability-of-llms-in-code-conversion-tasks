package main

import (
	"fmt"
	"os"
)

func main() {
	f1, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(f1.Size())
	f2, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(f2.Size())
}
