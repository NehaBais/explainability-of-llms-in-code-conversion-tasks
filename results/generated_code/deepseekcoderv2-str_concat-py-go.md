Answer:

```go
package main

import "fmt"

func main() {
	// Create a string variable equal to any text value.
	s1 := "hello"
	fmt.Println(s1)

	// Create another string variable whose value is the original variable concatenated with another string literal.
	s2 := s1 + " world"
	fmt.Println(s2)

	// To illustrate the operation, show the content of the variables.
	fmt.Println(", ".join([s1, "world", "mom"]))
}
```

