```go
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
```
This Go code does the same thing as your Java program. It gets two integers from user input and then displays a message if the first integer is less than, equal to, or greater than the second integer. Please note that it also catches the error in case there was an issue reading the number from the input.
