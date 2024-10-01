In Go, string comparison is simpler than in C++ because it does not require any special handling for case-insensitivity or lexical order.
Here's a conversion of the given C++ code:

```go
package main

import (
	"fmt"
	"strings"
	"strconv"
)

func demoCompare(a, b interface{}, semantically string) {
	equals := a == b
	notEquals := a != b
	less := a < b
	greater := a > b

	fmt.Printf("%v and %v are %s exactly %s equal.\n", a, b, "", semantically)
	fmt.Printf("%v and %v are %s %sinequal.\n", a, b, "", semantically)
	fmt.Printf("%v is %s %s ordered before %v.\n", a, "", semantically, b)
	fmt.Printf("%v is %s %s ordered after %v.\n", a, "", semantically, b)
}

func main() {
	// Case-sensitive comparisons.
	a := "1.2.Foo" 
	b := "1.3.Bar" 
	demoCompare(a, b, "lexically")

	// Case-insensitive comparisons by converting both strings to lowercase.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demoCompare(a, b, "lexically")

	// Numeric comparison; here 'numA' and 'numB' can be any type for which the relevant is a valid operation eg int, float etc.
	numA, _ := strconv.ParseFloat(a, 64) //assume error handling is done in context
	numB, _ := strconv.ParseFloat(b, 64)
	demoCompare(numA, numB, "numerically")
}
```

Please note:
- In Go, there isn't a special command for case-insensitive string comparison like `std::transform` in C++. Instead, use the builtin function strings.ToLower() to lowercase your strings before comparing them.
- For numeric comparison, use strconv package functions ParseFloat or ParseInt which will return error if conversion isn't possible but for the sake of simplicity errors are ignored in this script. Make sure you handle these errors as per your needs.
- String formatting is done using `fmt.Printf` instead of `std::cout << a`. The format specifiers used here (`%v`, `%s`) correspond to the types being printed.
