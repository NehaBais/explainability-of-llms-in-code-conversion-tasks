In Go, you can use the built-in `strings` package for string operations. Here is how to perform similar operations in Golang as compared to C :

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Create a string variable equal to any text value.
	var str string = "Good Morning"
	
	// Append the string with another string literal in most idiomatic way.
	cstr := " to all"
    cstr2 := " !!!"
    
    // Check if there is enough space for appending operation
	if len(str)+len(cstr)+len(cstr2) < 1024 {   // Assuming a maximum size of 1024 characters.
        // Append using the + operator which does not cause memory issues in Go.
		str += cstr + cstr2   
	}
    
    // Show contents after append operation
	fmt.Println(str)
}
```
The above code firstly declares a string `str` and then concatenates the strings `cstr`, `cstr2` to it using the `+=` operator in Go which is more idiomatic than C's `sprintf()` function. The resultant string is printed on stdout using `fmt.Println()`.

