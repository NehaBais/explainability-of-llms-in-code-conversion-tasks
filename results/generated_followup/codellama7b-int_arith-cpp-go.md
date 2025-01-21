
The error message is indicating that the `math` package was imported, but not used in the code. In Go, packages are automatically imported if they are needed for the code to compile, but unused imports can cause a warning or error. The fix is to remove the import statement and use the `math` functions directly in the code.

Here's the corrected code:
```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Println("a+b =", a+b)
	fmt.Println("a-b =", a-b)
	fmt.Println("a*b =", a*b)
	fmt.Printf("a/b = %d, remainder %d\n", int(math.Ceil(float64(a)/b)), a%b)
}
```
