In Go, the math package provides functions for basic arithmetic operations including integer division and modulus. Here is how you could convert your Rust code into Go:

```go
package main

import (
	"fmt"
	"math"
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

The `strconv.Atoi` function is used to convert the string arguments from the command line to integers. The `math.Trunc(float64(a) / float64(b))` computes the integer quotient, while `a % b` gives the remainder. The `math.Pow(float64(a), float64(b))` computes the power of `a` with `b`.

Remember to run this code from a terminal with two integers as arguments, e.g., `go run main.go 5 3`.
