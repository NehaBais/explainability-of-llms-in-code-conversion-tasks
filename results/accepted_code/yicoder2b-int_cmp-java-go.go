package main

import (
	"bufio"
	"fmt"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	var nbr1, nbr2 int
	fmt.Printf("Enter first integer: ")
	_ = reader.Read(&nbr1)

	fmt.Printf("Enter second integer: ")
	_ = reader.Read(&nbr2)

	if nbr1 < nbr2 {
		fmt.Println(strconv.Itoa(nbr1) + " is less than " + strconv.Itoa(nbr2))
	} else if nbr1 > nbr2 {
		fmt.Println(strconv.Itoa(nbr1) + " is greater than " + strconv.Itoa(nbr2))
	} else {
		fmt.Println(strconv.Itoa(nbr1) + " is equal to " + strconv.Itoa(nbr2))
	}
}
