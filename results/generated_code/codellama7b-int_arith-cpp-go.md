
Here's the code in Go:
```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Println("a+b =", a+b)
	fmt.Println("a-b =", a-b)
	fmt.Println("a*b =", a*b)
	fmt.Printf("a/b = %d, remainder %d\n", a/b, a%b)
}
```
Note that in Go, you don't need to include the `<iostream>` header file since it is not needed for input/output operations. Also, you can use the `fmt` package instead of `cout` and `cin` to print to the console. Finally, since Go does not support integer division by default, we use the `math` package to perform integer division with rounding towards zero.
