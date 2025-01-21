The error occurred because the `strings` package is not imported, so its functions cannot be used directly. To fix this, we need to import the `strings` package at the beginning of our file.
Here's the corrected code in a single line:
```go
package main
import (
	"fmt"
	"strings"
)
func main() {
	greeting := "Hello"
	greeting += ", world!"
	fmt.Println(greeting)
}
```
The error occurred because the `strings` package is not imported, so its functions cannot be used directly. To fix this, we need to import the `strings` package at the beginning of our file. Now the code should compile without any errors.

