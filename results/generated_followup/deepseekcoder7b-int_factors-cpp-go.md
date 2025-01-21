The error occurs because of incorrect usage of backticks ` inside the fenced code block. It's confusing for markdown parser that is used to render this documentation, causing syntax errors. The fix involves replacing these backticks with regular ones. 

Here is the corrected Golang code:
```go
package main
import (
	"fmt"
	"sort"
)
func GenerateFactors(n int) []int {
	factors := make([]int,0,2*n)  
	factors = append(factors, 1, n)
	for i := 2; i * i <= n; i++ {
		if n % i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
		}
	}
	return factors
}
func main() {
	sampleNumbers := []int{3135, 45, 60, 81}
	for _, num := range sampleNumbers {
		factors := GenerateFactors(num)
		sort.Ints(factors)  
		fmt.Printf("Factors of %4d are: ", num)
		for _, factor := range factors {
			fmt.Printf("%4d", factor)
		}
		fmt.Println()
	}
}
``` 
This fixed code should compile without any errors. It accomplishes the same as your C++ program which prints all factors of an array of integers in ascending order.

