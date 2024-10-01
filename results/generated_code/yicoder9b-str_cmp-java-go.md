In GoLang the equivalent code would look like this:
```go
package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	if a == b {
		fmt.Printf("'%s' and '%s' are lexically equal.\n", a, b)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.\n", a, b)
	}

	if strings.EqualFold(a, b) {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.\n", a, b)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.\n", a, b)
	}

	if strings.Compare(a, b) < 0 {
		fmt.Printf("'%s' is lexically before '%s'. \n", a, b)
	} else if strings.Compare(a, b) > 0 {
		fmt.Printf("'%s' is lexically after '%s'. \n", a, b)
	}

	if strings.Compare(a, b) >= 0 {
		fmt.Printf("'%s' is not lexically before '%s'.\n", a, b)
	}

	if strings.Compare(a, b) <= 0 {
		fmt.Printf("'%s' is not lexically after '%s'.\n", a, b)
	}

	fmt.Printf("The lexical relationship is: %d \n", strings.Compare(a, b))
	fmt.Printf("The case-insensitive lexical relationship is: %d \n", strings.Compare(strings.ToLower(a), strings.ToLower(b)))
}

func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("ĴÃVÁ", "ĴÃVÁ")
	compare("ĴÃVÁ", "ĵãvá")
}
``` 
GoLang treats strings as sequences of runes (not bytes) and provides `strings.Compare()` function to compare two strings lexicographically. This function returns a negative value if the first string is less than the second, 0 if they are equal, or a positive value if the first one is larger.

`strings.EqualFold(a, b)` compares the strings a and b in a case-insensitive manner by converting them to lowercase before comparison.
The `==` operator can be used for exact equality comparison while "!=" can handle inequality (i.e., the inverse of exact equality). 

As per GoLang's type system, strings are compared lexicographically, which is similar to Python's and C++'s behavior where it considers all numeric characters as smaller than alphabetic ones and treats uppercase letters as smaller than lowercase ones.
