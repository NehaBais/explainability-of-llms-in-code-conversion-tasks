Sure, here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"strconv"
)

func compare(a string, b string) {
	fmt.Printf("\n%q is of type %s and %q is of type %s\n", a, strconv.TypeName(a), b, strconv.TypeName(b))
	if a < b {
		fmt.Printf("%q is strictly less than  %q\n", a, b)
	}
	if a <= b {
		fmt.Printf("%q is less than or equal to %q\n", a, b)
	}
	if a > b {
		fmt.Printf("%q is strictly greater than  %q\n", a, b)
	}
	if a >= b {
		fmt.Printf("%q is greater than or equal to %q\n", a, b)
	}
	if a == b {
		fmt.Printf("%q is equal to %q\n", a, b)
	}
	if a != b {
		fmt.Printf("%q is not equal to %q\n", a, b)
	}
	if a == b {
		fmt.Printf("%q has object identity with %q\n", a, b)
	}
	if a != b {
		fmt.Printf("%q has negated object identity with %q\n", a, b)
	}
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	a, _ := strconv.Atoi("24")
	b, _ := strconv.Atoi("123")
	compare(strconv.Itoa(a), strconv.Itoa(b))
}
```
This code does the same thing as your Python code: compares two strings, and reports on whether they are strictly ordered (lexically ordered) before or after than each other, if that matters, it also reports on whether they are equal or not, and how they are treated in types. The `strconv.Atoi` converts string to integer and `strconv.Itoa` converts integer to string. It is used because Golang does not have built-in function to convert type of string directly like Python.
The `compare()` function takes two strings as input, prints the output based on which one comes first in lexical order (alphabetically), reports if they are equal or not. The `main` function is just for testing purpose and converts numbers to strings because Golang does not have built-in function to convert type of string directly like Python.
