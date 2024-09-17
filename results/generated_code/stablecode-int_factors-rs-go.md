Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"sort"
)

func factor(num int) []int {
	var factors []int

	for i := 1; i <= int(math.Sqrt(float64(num))))+1; i++ { 
		if num%i == 0 {
			factors = append(factors, i))
			factors = append(factors, num/i))
		}
	}
	
	sort.Ints(factors)

	return factors
}

func main() {
	fmt.Println(factor(100)))
	fmt.Println(factor(101)))
}
```
This is the Go equivalent of your Rust code. It calculates the factors of a given positive integer, stores them in a slice and returns it. It then prints the factor slices for the numbers 100 and 101 as examples.
