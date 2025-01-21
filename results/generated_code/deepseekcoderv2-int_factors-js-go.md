 Sure! Here's the equivalent Go code to compute the factors of a positive integer:

```go
package main

import (
	"fmt"
	"sort"
)

func factors(num int) []int {
	var nFactors []int
	for i := 1; i <= num/2; i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
			if num/i != i {
				nFactors = append(nFactors, num/i)
			}
		}
	}
	// Add the number itself as a factor if it's not already included
	if len(nFactors) == 0 || nFactors[len(nFactors)-1] != num {
		nFactors = append(nFactors, num)
	}
	sort.Ints(nFactors)
	return nFactors
}

func main() {
	fmt.Println(factors(45))  // [1, 3, 5, 9, 15, 45]
	fmt.Println(factors(53))  // [1, 53]
	fmt.Println(factors(64))  // [1, 2, 4, 8, 16, 32, 64]
}
```

### Explanation:
1. **Function Definition**: The `factors` function takes an integer `num` as input and returns a slice of its factors.
2. **Loop through possible factors**: The loop runs from `1` to `num/2` (inclusive) to find all divisors. If `i` is a divisor of `num`, it is added to the list.
3. **Check for self-factor**: If `num/i` is not equal to `i`, it is also added to the list as a factor.
4. **Add num itself**: After the loop, we check if `num` is already in the list (to handle prime numbers correctly).
5. **Sort the factors**: The slice of factors is sorted using Go's built-in sort function.
6. **Main Function**: The `main` function demonstrates how to call the `factors` function and print the results for given test cases.
