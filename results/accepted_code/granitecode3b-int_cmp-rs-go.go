package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	aStr, _ := reader.ReadString('\n')
	bStr, _ := reader.ReadString('\n')
	a, _ := fmt.Sscanf(aStr, "%d", &a)
	b, _ := fmt.Sscanf(bStr, "%d", &b)
	if a < b {
		fmt.Println(a, "is less than ", b)
	} else if a == b {
		fmt.Println(a, "equals ", b)
	} else {
		fmt.Println(a, "is greater than ", b)
	}
}
