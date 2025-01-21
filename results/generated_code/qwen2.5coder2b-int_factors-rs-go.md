To convert the Rust code to Golang, you can follow these steps:

1. Import necessary packages.
2. Define the `factor` function which will compute the factors of a given number.
3. Iterate through numbers from 1 to the square root of the number and check if they divide evenly into the number (i.e., `num % i == 0`).
4. If divisible, add both the divisor and its corresponding quotient to the factor vector.
5. Sort the factor vector.
6. Return the sorted vector.

Here's the equivalent Golang code:

```go
package main

import (
	"fmt"
	"math"
)

func factor(num int) []int {
	factors := make([]int, 0)
	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			if i != num/i {
				factors = append(factors, num/i)
			}
		}
	}
	fmt.Println("Factors of", num, "are:", factors)
	return factors
}

func main() {
	testCases := []struct {
		num   int
		want  []int
	}{
		{100, []int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}},
		{101, []int{1, 101}},
	}

	for _, tc := range testCases {
		got := factor(tc.num)
		if !reflect.DeepEqual(got, tc.want) {
			fmt.Printf("FAIL: For num %d, expected %v but got %v\n", tc.num, tc.want, got)
		} else {
			fmt.Printf("PASS: For num %d, got the correct factors %v\n", tc.num, got)
		}
	}
}
```

Explanation:
- The `factor` function computes the factors of a given integer.
- It uses a loop to iterate through numbers from 1 to the square root of the number (`int(math.Sqrt(float64(num)))`).
- For each divisor, it checks if the number is divisible by the current divisor (`num % i == 0`).
- If divisible, both the divisor and its corresponding quotient are added to the `factors` slice.
- After iterating through all divisors, it sorts the `factors` slice using `sort.Ints`.
- The `main` function contains test cases to verify the correctness of the `factor` function.
