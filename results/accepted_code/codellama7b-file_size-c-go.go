package main

import (
	"fmt"
	"os"
)

func main() {
	var foo os.FileInfo
	foo, _ = os.Stat("input.txt")
	fmt.Println(foo.Size())
	foo, _ = os.Stat("/input.txt")
	fmt.Println(foo.Size())
}
