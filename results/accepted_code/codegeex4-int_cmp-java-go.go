package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter the first integer: ")
	nbr1, _ := strconv.Atoi(reader.ReadString('\n'))

	fmt.Print("Enter the second integer: ")
	nbr2, _ := strconv.Atoi(reader.ReadString('\n'))

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
