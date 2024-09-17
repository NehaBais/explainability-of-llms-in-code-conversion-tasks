package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	nbr1, _ := strconv.Atoi(scanner.Text())

	scanner.Scan()
	nbr2, _ := strconv.Atoi(scanner.Text())

	switch {
	case nbr1 < nbr2:
		fmt.Println(nbr1, "is less than", nbr2)
	case nbr1 > nbr2:
		fmt.Println(nbr1, "is greater than", nbr2)
	default:
		fmt.Println(nbr1, "is equal to", nbr2)
	}
}
