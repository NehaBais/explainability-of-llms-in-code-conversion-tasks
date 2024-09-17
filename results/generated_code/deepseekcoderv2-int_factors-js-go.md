
## Golang Solution

```go
package main

import (
	"fmt"
)

func factors(num int) []int {
	var nFactors = make([]int, 0)
	for i := 1; i <= num/2+1; i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
		}
	}
	return nFactors
}

func main() {
	fmt.Println("Hello World")
	var number int = 45
	fmt.Printf("%d factors are %v\n", number, factors(number))
}
```
