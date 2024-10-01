The equivalent code in Golang would be:

```Go
package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s %2d %2d %2d %2d %2d %2d %s\n", a,
		a == b, a != b, a > b, a < b, a >= b, a <= b, b)
}

func compareCase(a, b string) {
	fmt.Printf("%s %2d %2d %2d %2d %2d %2d %s ignoring case\n", a,
		strings.EqualFold(a, b), !strings.EqualFold(a, b), strings.Compare(b, a) < 0, strings.Compare(a, b) < 0, strings.Compare(b, a) <= 0, strings.Compare(a, b) <= 0, b)
}

func main() {
	fmt.Println("eq , ne , gt , lt , ge , le")
	var args = []string{"ball", "bell", "ball", "ball", "YUP", "YEP"}
	for i := 0; i < len(args); i += 2 {
		compare(args[i], args[i+1])
		compareCase(args[i], args[i+1])
	}
}
```
In the Golang version of the code:
- We're using `==` and `!=` for exact equality and inequality respectively.
- The strings are compared lexically by using the `>` and `<` operators on strings directly in Go.
- The case insensitive comparison is performed with the help of function `strings.EqualFold()` from 'strings' package. It performs a case insensitive comparison.
- For numeric string comparisons, if these are not treated lexically, they will be compared numerically only when they start with a number and end with a non digit character.

`strings.Compare(a, b)` function returns an integer less than, equal to, or greater than zero if `a` is found, respectively, to be less than, to match, or be greater than `b` in lexical order.
