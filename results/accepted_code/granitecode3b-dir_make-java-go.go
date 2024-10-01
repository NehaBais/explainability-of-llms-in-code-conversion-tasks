package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.MkdirAll("C:/parent/test", 0755)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully")
	}
}
