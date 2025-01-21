Here is the GoLang version of your C++ code:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scan(&a, &b)
	
	fmt.Printf("\na+b = %d\n", a + b)
	fmt.Printf("a-b = %d\n", a - b)
	fmt.Printf("a*b = %d\n", a * b)
	fmt.Printf("a/b = %d, remainder %d\n", a / b, a % b)
}
```

Please note that Go doesn't support exponentiation operator like C++. You can use the `math.Pow` function from the math package in Golang to calculate power. For example: `fmt.Printf("%f", math.Pow(a, b))`.
