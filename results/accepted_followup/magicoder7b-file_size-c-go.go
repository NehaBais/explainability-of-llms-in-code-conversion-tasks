package main

import (
	"fmt"
	"syscall"
)

func main() {
	var st syscall.Stat_t
	syscall.Stat("input.txt", &st)
	fmt.Println(st.Size)
	syscall.Stat("/input.txt", &st)
	fmt.Println(st.Size)
}
