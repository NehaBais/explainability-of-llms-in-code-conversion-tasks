In Go language, you can use the `fmt` package's `Printf` function to print formatted strings and make comparisons between strings in similar ways as in Python.

The Go language doesn't have built-in functionality for comparing types (like Python does with the `is` operator), but you could manually check the type using the `%T` verb in `Printf`.

Here is the equivalent Golang code:

```go
package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%q is of type %T and %q is of type %T\n",
		a, a, b, b)
	if a < b {
		fmt.Printf("%q is strictly less than %q\n", a, b)
	}
	if a <= b {
		fmt.Printf("%q is less than or equal to %q\n", a, b)
	}
	if a > b {
		fmt.Printf("%q is strictly greater than %q\n", a, b)
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
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")

	// Go doesn't compare numbers as strings
	compare("5.0", "5") // This will not work, you need to convert them to float64
	compare(24, 123)
}

func compareInsensitive(a, b string) {
	fmt.Printf("%q is of type %T and %q is of type %T\n",
		a, a, b, b)
	if strings.ToLower(a) < strings.ToLower(b) {
		fmt.Printf("%q is strictly less than %q\n", a, b)
	}
	// Same for the other comparisons
}

func main() {
	compareInsensitive("Ball", "ball") // This will work even with different cases
}
```

Note: The `fmt` package in Go does not support direct string-to-numeric comparison as strings. If you need to compare a numeric string with a number, you would have to convert the string to the appropriate type (e.g., `strconv.ParseFloat` for floating-point numbers) before making the comparison.

Also, note that Golang doesn't have built-in case insensitive comparisons of strings, so we use the `strings.ToLower` function to make both strings lower case. If you want to perform a case sensitive comparison instead, you can just remove this part.
