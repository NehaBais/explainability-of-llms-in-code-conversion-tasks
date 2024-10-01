This code converts a C string to a Go string and then concatenates them. Here is the converted code:
```
package main

import (
	"fmt"
)

func main() {
	str := "Good Morning" // Go strings are immutable, so we use := instead of =
	cstr := " to all"
	cstr2 := " !!!!"
	x := len(str) + len(cstr) + len(cstr2)
	if x <= len(str) {
		// 1st method
		str += cstr
		fmt.Println(str)
		// 2nd method
		str = str[:x] + cstr2
		fmt.Println(str)
	}
}
```
Note that Go strings are immutable, so we use `:=` instead of `=` to declare a new string variable. We also use the `len()` function to get the length of a string in Go. In the 1st method, we concatenate the two strings using the `+=` operator. In the 2nd method, we create a new string by taking the first `x` characters of the original string and then appending the `cstr2` string to it. Finally, we print both of the concatenated strings using the `fmt.Println()` function.
