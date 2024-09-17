```
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	var nbr1, nbr2 int

	fmt.Println("Enter the first number: ")
	nbrStr1, _ := reader.ReadString('\n')
	nbr1, _ = strconv.Atoi(nbrStr1)

	fmt.Println("Enter the second number: ")
	nbrStr2, _ := reader.ReadString('\n')
	nbr2, _ = strconv.Atoi(nbrStr2)

	if nbr1 < nbr2 {
		fmt.Printf("%d is less than %d", nbr1, nbr2)
	} else if nbr1 == nbr2 {
		fmt.Printf("%d is equal to %d", nbr1, nbr2)
	} else {
		fmt.Printf("%d is greater than %d", nbr1, nbr2)
	}
}
```
This code uses the `bufio` package to read input from the user and the `strconv` package to convert the input strings into integers. The comparison operators are used in the if-else statements to determine which message to print.
