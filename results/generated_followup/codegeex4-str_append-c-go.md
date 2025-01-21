The error occurs because `cap` is not a function for string types, but it's used to get the capacity of slices (like array or slice), maps, or channels. The fix is to use the length of the string instead of its capacity to check if there's enough space.

Corrected code:

```go
package main

import (
	"fmt"
)

func main() {
	str := "Good Morning" // Create a string variable equal to any text value.
	cstr := " to all"
	cstr2 := " !!!"

	if len(str)+len(cstr)+len(cstr2) <= len(str) {
		str = str + cstr // Append the string variable with another string literal in the most idiomatic way.

		// Alternative method using concatenation
		str += cstr2

		fmt.Println(str) // Show the contents of the variable after the append operation.
	}
}
```

In Go, you don't have to define a specific size for your string variable. It can dynamically grow as per the requirement. Therefore, there is no need to worry about insufficient allocated space like in C.
