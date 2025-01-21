 The error "reader.ReadInt undefined (type *bufio.Reader has no field or method ReadInt)" occurs because Go does not have an equivalent function to read integers directly from a bufio.Reader like C++'s `std::cin >>`. To solve this, we will need to use the function `Scan` of `bufio.Scanner`, which reads data into string, and then convert that string into integer.

Corrected Go code:
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

	a, b, err := readNumbers(reader)
	if err != nil {
		fmt.Println("could not read the numbers")
		return
	}

	// test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	// test for equality
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	// test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}

func readNumbers(reader *bufio.Reader) (int, int, error) {
	var err error
	aStr, _ := reader.ReadString('\n') // reads a string with newline character
	a, err = strconv.Atoi(strings.TrimSpace(aStr)) // converts string to integer and remove leading/trailing white spaces
	if err != nil {
		return 0, 0, err
	}

	bStr, _ := reader.ReadString('\n') // reads a string with newline character
	b, err = strconv.Atoi(strings.TrimSpace(bStr)) // converts string to integer and remove leading/trailing white spaces
	if err != nil {
		return 0, 0, err
	}
	return a, b, nil
}
```
