 Certainly! Here's how you can convert the given Java code into Go:

```go
package main

import (
	"fmt"
)

func main() {
	// Create a string variable equal to any text value.
	stringVar := "def"
	
	// Prepend the string variable with another string literal.
	stringVar = "abc" + stringVar
	
	// Print the result
	fmt.Println(stringVar)
}
```

In this Go code:
- We declare a string variable `stringVar` and assign it the value `"def"`.
- We then prepend the string literal `"abc"` to `stringVar`.
- Finally, we print the result using `fmt.Println`.
