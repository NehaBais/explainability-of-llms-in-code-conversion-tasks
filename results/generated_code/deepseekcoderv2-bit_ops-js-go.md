### Solution - Golang
```go
package main

import (
	"fmt"
)
func bitwise(a int,b int){
	 fmt.Println("a AND b:", a & b)
	 fmt.Println("a OR b: ", a | b)
	 fmt.Println("a XOR b: ", a ^ b)
	fmt.Println("NOT a: ", ~a)
	fmt.Println("a << b: ", a << b) // left shift
	fmt.Println("a >> b: ", a >> b) // arithmetic right shift
	fmt.Println("a >>> b: ", a >>> b) // logical right shift
}

func main() {
	a := 10
	b := 5
	bitwise(a,b)
}
```
