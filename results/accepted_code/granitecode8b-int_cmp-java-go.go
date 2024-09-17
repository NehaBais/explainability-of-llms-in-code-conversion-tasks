package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	var nbr1, nbr2 int
	var err error
	fmt.Print("Enter first integer: ")
	nbr1, err = strconv.Atoi(os.Args[0])
	if err != nil {
		panic(err)
	}
	fmt.Print("Enter second integer: ")
	nbr2, err = strconv.Atoi(os.Args[1])
	if err != nil {
		panic(err)
	}
	switch {
	case nbr1 < nbr2:
		fmt.Printf("%d is less than %d", nbr1, nbr2)
	case nbr1 > nbr2:
		fmt.Printf("%d is greater than %d", nbr1, nbr2)
	case nbr1 == nbr2:
		fmt.Printf("%d is equal to %d", nbr1, nbr2)
	}
}
