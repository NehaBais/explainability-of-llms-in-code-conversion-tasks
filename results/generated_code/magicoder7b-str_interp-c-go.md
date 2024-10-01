 In Go, you can use the `fmt.Sprintf()` function for string interpolation. Here is how to achieve this in Golang:

```go
package main

import (
	"fmt"
)

func main() {
  extra := "little"
  fmt.Printf("Mary had a %s lamb.\n", extra)
}
```
In the above code, `"%s"` is a placeholder for string values in `fmt.Sprintf()`. The second argument of the function is the value that will replace the placeholder when printed to the console.
