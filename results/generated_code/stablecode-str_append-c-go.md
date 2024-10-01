Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"unsafe"
)

func main() {
	// Create a string variable equal to any text value.
	str := "Good Morning"
	
	// Append the string variable with another string literal in the most idiomatic way.
	str += " to all"
	str += " !!!"
	
	// Print the contents of the variable after the append operation.
	fmt.Println(str)
}
```

This code creates a string variable `str` and initializes it with the text value "Good Morning". 

Next, it appends the string literal " to all" to the `str` variable using the `+=` operator. Then, it appends the string literal " !!!" to the `str` variable in the same manner.

Finally, the code prints the contents of the `str` variable after the append operation using the `fmt.Println()` function.
