package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter first integer: ")
	nbr1Str, _ := reader.ReadString('\n')
	nbr1, _ := strconv.Atoi(nbr1Str[:len(nbr1Str)-1]) // Remove newline character

	fmt.Print("Enter second integer: ")
	nbr2Str, _ := reader.ReadString('\n')
	nbr2, _ := strconv.Atoi(nbr2Str[:len(nbr2Str)-1]) // Remove newline character

	if nbr1 < nbr2 {
		fmt.Println(nbr1, "is less than", nbr2)
	}
	if nbr1 > nbr2 {
		fmt.Println(nbr1, "is greater than", nbr2)
	}
	if nbr1 == nbr2 {
		fmt.Println(nbr1, "is equal to", nbr2)
	}
}
