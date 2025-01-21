The error `undefined: os` occurs because the `os` package, which provides access to operating system functionality (like file operations), was not imported. The fix is to import the `os` package.

The error `undefined: strconv` occurs because the `strconv` package, which contains functions for converting between integer and string types, was not imported. The fix is to import the `strconv` package.

The corrected code in a single code block is:

```go
package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	args := os.Args[1:]
	if len(args) != 2 {
		fmt.Println("Usage: go run main.go <int> <int>")
		return
	}

	a, err := strconv.Atoi(args[0])
	if err != nil {
		fmt.Println(err)
		return
	}
	b, err := strconv.Atoi(args[1])
	if err != nil {
		fmt.Println(err)
		return
	}

	sum := a + b
	difference := a - b
	product := a * b

	integerQuotient := math.Trunc(float64(a) / float64(b))
	remainder := a % b

	exponentiation := math.Pow(float64(a), float64(b))

	fmt.Printf("sum:              %d\n", sum)
	fmt.Printf("difference:       %d\n", difference)
	fmt.Printf("product:          %d\n", product)
	fmt.Printf("integer quotient:  %d\n", integerQuotient)
	fmt.Printf("remainder:        %d\n", remainder)
	fmt.Printf("exponentiation:   %.2f\n", exponentiation)
}
```
