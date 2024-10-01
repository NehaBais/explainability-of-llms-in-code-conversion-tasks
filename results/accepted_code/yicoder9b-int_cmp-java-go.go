package main

import (
	"fmt"
	"os"
	"strconv"
)

func getInput() (int, int) {
	var nbr1, nbr2 int
	fmt.Println("Enter first integer:")
	fmt.Scan(&nbr1)
	fmt.Println("Enter second integer:")
	fmt.Scan(&nbr2)
	return nbr1, nbr2
}

func compareIntegers() {
	nbr1, nbr2 := getInput()

	if nbr1 < nbr2 {
		fmt.Println(strconv.Itoa(nbr1) + " is less than " + strconv.Itoa(nbr2))
	} else if nbr1 > nbr2 {
		fmt.Println(strconv.Itoa(nbr1) + " is greater than " + strconv.Itoa(nbr2))
	} else {
		fmt.Println(strconv.Itoa(nbr1) + " is equal to " + strconv.Itoa(nbr2))
	}
}

func main() {
	compareIntegers()
	err := recover()
	if err != nil {
		fmt.Println("Error occurred: ", err)
		os.Exit(-1)
	}
}
