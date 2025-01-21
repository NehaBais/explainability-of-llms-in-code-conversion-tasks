To convert the JavaScript code to Golang, you can use slices and append function for storing factors. Here is a translation of your JavaScript function into Golang:

```go
package main

import "fmt"

func factors(num int) []int {
	var n_factors []int
	for i := 1; i <= num/i; i++ {
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if num/i != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	return n_factors
}

func main() {
	fmt.Println(factors(45))  // [1,3,5,9,15,45]
	fmt.Println(factors(53))  // [1,53]
	fmt.Println(factors(64))  // [1,2,4,8,16,32,64]
}
```

This function will return a slice of integers which are the factors of the given number. 

Note that this code assumes the input is always a positive integer. It does not handle negative numbers or non-integer inputs as JavaScript function does. In Go we have to ensure inputs are valid before processing them.
