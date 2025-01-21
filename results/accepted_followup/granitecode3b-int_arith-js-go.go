package main

import (
	"fmt"
	"strconv"
	"strings"

	"flag"
)

func main() {
	var a, b int
	flag.IntVar(&a, "a", 0, "first integer")
	flag.IntVar(&b, "b", 0, "second integer")
	flag.Parse()

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b

	fmt.Printf("a + b = %dn", sum)
	fmt.Printf("a - b = %dn", difference)
	fmt.Printf("a * b = %dn", product)
	fmt.Printf("a / b = %dn", division)
	fmt.Printf("a % b = %dn", remainder)
}
