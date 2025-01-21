The error occurs because the `strconv` package is imported but not used in the code. The `strconv` package provides functions for converting strings to integers, but it is not being used anywhere in the code. To fix this issue, you can remove the import statement for `strconv`.

Here's the corrected code:
```go
package main

import (
	"fmt"
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
