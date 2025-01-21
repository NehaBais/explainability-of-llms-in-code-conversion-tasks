To convert the given C code to Golang, you can use the `math/big` package for handling large integers and arrays. Here is the corresponding Golang code:

```go
package main

import (
	"fmt"
	"math/big"
)

func factor(num *big.Int) []*big.Int {
	factors := make([]*big.Int, 0)
	for i := big.NewInt(1); i*i <= num; i++ {
		if num.Mod(i, i).Equal(big.NewInt(0)) {
			factorCount := factors.Len() + 2
			factors = append(factors, nil, nil)
			factors[factorCount-2] = i
			factors[factorCount-1] = num.Div(num, i)
		}
	}
	if i*i == num {
		factorCount := factors.Len() + 1
		factors = append(factors, nil)
		factors[factorCount-1] = i
	}
	return factors[:factorCount]
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	for _, num := range nums2factor {
		factors := factor(big.NewInt(int64(num)))
		fmt.Printf("factors of %d are: ", num)
		for i, factor := range factors {
			if i != 0 {
				fmt.Print(", ")
			}
			fmt.Println(factor)
		}
		fmt.Println()
	}
}
```

### Explanation:
1. **Factor Function**:
   - The `factor` function takes a `big.Int` and returns a slice of `*big.Int`.
   - It iterates through all numbers from 1 to the square root of the given number.
   - If a divisor is found, it appends both the divisor and the quotient to the list of factors.
   - If the square root is an integer, it also appends the divisor itself as a factor.

2. **Main Function**:
   - It uses `big.NewInt` to handle large numbers efficiently.
   - It calls the `factor` function for each number in the `nums2factor` slice and prints the factors of each number.

This approach ensures that the code can handle large input numbers without overflow or exceeding memory limits.
