package main

import (
	"fmt"
	"strconv"
)

func main() {
	s := "12345678"
	s = "0" + s // by concatenation
	fmt.Println(s)
}
