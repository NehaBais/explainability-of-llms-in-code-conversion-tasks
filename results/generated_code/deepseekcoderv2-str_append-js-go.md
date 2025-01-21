 Sure, here's how you can convert the given JavaScript code to Go:

```go
package main

import (
	"fmt"
)

func main() {
	var s1 string = "Hello"
	s1 += ", World!"
	fmt.Println(s1)
}
```

In this Go code:
- We declare a string variable `s1` and initialize it with the value "Hello".
- We then append ", World!" to `s1` using the `+=` operator.
- Finally, we print the contents of `s1` using `fmt.Println`.
