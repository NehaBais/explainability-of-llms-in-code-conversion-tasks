```go
package main

import (
	"fmt"
)

func main() {
	var (
		nbr1 int
		nbr2 int
	)
	fmt.Print("Enter the first integer: ")
	fmt.Scan(&nbr1)
	fmt.Print("Enter the second integer: ")
	fmt.Scan(&nbr2)

	if nbr1 < nbr2 {
		fmt.Printf("%d is less than %d\n", nbr1, nbr2)
	} else if nbr1 > nbr2 {
		fmt.Printf("%d is greater than %d\n", nbr1, nbr2)
	} else {
		fmt.Printf("%d is equal to %d\n", nbr1, nbr2)
	}
}
```
