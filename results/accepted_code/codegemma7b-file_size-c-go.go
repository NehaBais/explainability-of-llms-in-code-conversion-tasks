package main

import (
	"fmt"
	"os"
	"syscall"
)

func main() {
	var foo syscall.Stat_t
	err := syscall.Stat("input.txt", &foo)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(foo.Size())

	err = syscall.Stat("/input.txt", &foo)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(foo.Size())
}
