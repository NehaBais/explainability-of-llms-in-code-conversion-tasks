
Here's the equivalent code in Go:
```
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var a, b int
	_, err := fmt.Scan(&a, &b)
	if err != nil {
		panic(err)
	}

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %d\n", division)
	fmt.Printf("a %% b = %d\n", remainder)
}
```
Note that in Go, you need to use the `fmt` package to format your output and the `%d` syntax is used for integers. The `strconv` package is also used to convert strings to integers using the `Atoi()` function. Also, note that in Go, you don't need to specify the data type of variables when declaring them.
