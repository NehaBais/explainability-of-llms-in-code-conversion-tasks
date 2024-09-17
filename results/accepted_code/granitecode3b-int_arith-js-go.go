package main

import (
	"fmt"
	"strings"
)

func main() {
	args := strings.Split(os.Args[1], " ")
	a, _ := strconv.Atoi(args[0])
	b, _ := strconv.Atoi(args[1])

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b

	fmt.Printf("a + b = %dnn", sum)
	fmt.Printf("a - b = %dnn", difference)
	fmt.Printf("a * b = %dnn", product)
	fmt.Printf("a / b = %dnn", division)
	fmt.Printf("a % b = %dn", remainder)
}
