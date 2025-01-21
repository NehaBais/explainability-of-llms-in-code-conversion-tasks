The error occurs because of special characters used in GoLang which are not supported in JavaScript. 

For example, ":" instead of "=" is being used for assignment in GoLang, "{" and "}" braces are placed on the next line to denote a scope instead of being on same line as if-statement, etc.

The corrected code with these fixes applied would be:
```go
package main 

import (
	"fmt"
	"sort"
	"math"
)

func Factors(num int) []int {
	var factors []int 
	for i := 1; float64(i) <= math.Floor(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			if (num/i)!= i {
				factors = append(factors, num/i)
			}
		}
	}
	sort.Ints(factors)   
	return factors
}

func main() {
	fmt.Println(Factors(45))  //[1,3,5,9,15,45]
	fmt.Println(Factors(53))  //[1,53]
	fmt.Println(Factors(64))  // [1,2,4,8,16,32,64]
}
```

