package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Println("Enter two integers:")

	var nbr1, nbr2 int
	fmt.Scanf("%d %d", &nbr1, &nbr2)

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
