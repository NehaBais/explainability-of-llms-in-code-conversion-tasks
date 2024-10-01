The equivalent code in Golang would be:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Good Morning" // Create a string variable equal to any text value.
	cstr := " to all"
	cstr2 := " !!!"
	if len(str)+len(cstr)+len(cstr2) <= cap(str) { 
		str = str + cstr  // Append the string variable with another string literal in the most idiomatic way.

		// Alternative method using concatenation
		str = strings.Join([]string{str, cstr2}, "")

		fmt.Println(str)  // Show the contents of the variable after the append operation.
	}
}

```

Note: 
- In Go, you don't have to define a specific size for your string variable. It can dynamically grow as per the requirement. Therefore, there is no need to worry about insufficient allocated space like in C.
- Also, `cap(str)` is not directly available for Go strings. But since go strings are immutable, appending does not change the original string but creates a new one. So we can check if the length of the required string is less than or equal to the capacity of the string variable (which is the total number of runes that the string can contain). If it's true, then it means there is enough space to add the new strings.
