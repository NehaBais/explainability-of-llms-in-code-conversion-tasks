In Golang, the function would look like this:

```go
package main

import (
	"fmt"
)

func logic(a bool, b bool){
	fmt.Println("a AND b: ", a && b)
  fmt.Println("a OR b: ", a || b)
  fmt.Println("NOT a: ", !a)
}

// Usage
func main() {
	logic(true, false)
}
```
In this Golang code snippet, `&&` is used for logical AND operation, `||` for OR and `!` for NOT. Remember that Golang does not have the same concept of "print" as Java has so instead we use fmt.Println to output to console. You can call the logic function with two boolean values in its usage example provided below.

