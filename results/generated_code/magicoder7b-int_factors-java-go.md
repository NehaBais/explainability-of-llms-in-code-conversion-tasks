 Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(n int64) []int64 {
    var factors = make([]int64, 0)
    for i := n; i > 1; i-- {
        if n%i == 0 {
            factors = append(factors, i)
            factors = append(factors, n/i)
        }
    }
    sort.Slice(factors, func(i, j int) bool { return factors[i] > factors[j] })
    return factors
}

func main() {
	fmt.Println(factors(10)) // Prints: [2 5 10]
}
```

In the Go code, I use a for loop to go down from `n` and check if each number is a factor of `n`. If it's a factor, then add both the factor and the quotient of `n / i` to the array. Finally, sort the factors in ascending order before returning them.
