Sure, here's the equivalent code in Golang:
```go
package main
import (
"fmt"
"os"
"bufio"
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
```
In this code, we use the `bufio` package to read input from the user and the `strconv` package to convert the input strings to integers. We then use a `switch` statement to compare the two integers and print out the appropriate message based on the comparison result. The default case is used to handle the case when both numbers are equal.

