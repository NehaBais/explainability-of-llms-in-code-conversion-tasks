The error is caused by using non-numeric types (`*big.Int`) for operations that require numeric values. For example, `num.Mod(i, i).Equal(big.NewInt(0))` attempts to compare two non-numeric values, which leads to the "invalid operation" error.

To fix this, replace `i++` with `i.Add(i, big.NewInt(1)).Mod(num)` and remove the `.Equal` method as it is not applicable for comparing `*big.Int` values directly. The corrected code would look like this:

```go
package main

import (
	"fmt"
	"math/big"
)

func factor(num *big.Int) []*big.Int {
	factors := make([]*big.Int, 0)
	for i := big.NewInt(1); i*i <= num; i.Add(i, big.NewInt(1)).Mod(num) == nil {
		factorCount := factors.Len() + 2
		factors = append(factors, nil, nil)
		factors[factorCount-2] = i
		factors[factorCount-1] = num.Div(num, i)
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
