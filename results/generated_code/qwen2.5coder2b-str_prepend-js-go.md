To convert this JavaScript code to Golang, you can use string concatenation. Here's how you would do it:

```go
package main

import (
	"fmt"
)

func main() {
	s := ", World"
	s = "Hello" + s
	fmt.Println(s)
}
```

In this Go program:
- We import the `fmt` package to print messages.
- We declare a variable `s` and initialize it with the value `, World`.
- We then concatenate the string `"Hello"` to `s` using the `+` operator.
- Finally, we print the resulting string `s`.
