 Certainly! Below is the equivalent Go code that performs the same operations as the provided C++ code:

```go
package main

import (
	"fmt"
)

func main() {
	greeting := "Hello"
	greeting += " , world!"
	fmt.Println(greeting)
}
```

In this Go code:
1. We declare a string variable `greeting` and initialize it with the value `"Hello"`.
2. We append the string literal `", world!"` to the existing string using the `+=` operator, which is idiomatic in Go for string concatenation.
3. Finally, we print the contents of the variable after the append operation using `fmt.Println`.
