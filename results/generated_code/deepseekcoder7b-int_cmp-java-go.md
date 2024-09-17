The equivalent code in Golang would be:

```go
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
```
In this Golang code: 
- We use the `Scan` function from package `fmt` instead of a BufferedReader because it's more straightforward for reading in two integers. 
- The error checking is included to ensure that the inputs are valid and can be converted into int type. If any input cannot convert, then an error message will be displayed.  
- We use fmt.Printf with format specifiers `%d` instead of concatenation using '+' sign in Java as it’s more idiomatic for Golang. 
- All three comparison operators are included here to test all the conditions separately. It’s equivalent to the original Java code provided.

