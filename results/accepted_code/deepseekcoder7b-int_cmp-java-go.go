package main

import (
	"fmt"
)

func main() {
	var nbr1, nbr2 int
	fmt.Println("Enter two integers")
	_, err := fmt.Scan(&nbr1, &nbr2)
	if err != nil {
		fmt.Println(err)
	} else {
		if nbr1 < nbr2 {
			fmt.Printf("%d is less than %d\n", nbr1, nbr2)
		}
		if nbr1 > nbr2 {
			fmt.Printf("%d is greater than %d\n", nbr1, nbr2)
		}
		if nbr1 == nbr2 {
			fmt.Printf("%d is equal to %d\n", nbr1, nbr2)
		}
	}
}
