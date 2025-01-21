 Sure! Below is the equivalent Go code that performs the same tasks as the provided C++ code.

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

func demoCompare(a, b interface{}, semantically string) {
	switch v := a.(type) {
	case string:
		fmt.Printf("%s and %s are %sequally equal.\n", v, b.(string), ifEqual(v == b.(string)))
		fmt.Printf("%s and %s are %sinequal.\n", v, b.(string), ifNotEqual(v != b.(string)))
		fmt.Printf("%s is %sordered before %s.\n", v, ifLessThan(v < b.(string)), b.(string))
		fmt.Printf("%s is %sordered after %s.\n", v, ifGreaterThan(v > b.(string)), b.(string))
	case float64:
		fmt.Printf("%f and %f are %snumerically equal.\n", v, b.(float64), ifEqual(v == b.(float64)))
		fmt.Printf("%f and %f are %sinequal.\n", v, b.(float64), ifNotEqual(v != b.(float64)))
		fmt.Printf("%f is %sordered before %f.\n", v, ifLessThan(v < b.(float64)), b.(float64))
		fmt.Printf("%f is %sordered after %f.\n", v, ifGreaterThan(v > b.(float64)), b.(float64))
	}
}

func ifEqual(cond bool) string {
	if cond {
		return ""
	}
	return "not "
}

func ifNotEqual(cond bool) string {
	if !cond {
		return ""
	}
	return "not "
}

func ifLessThan(cond bool) string {
	if cond {
		return ""
	}
	return "not "
}

func ifGreaterThan(cond bool) string {
	if cond {
		return ""
	}
	return "not "
}

func main() {
	args := os.Args[1:]
	a := getArg(args, 0, "1.2.Foo")
	b := getArg(args, 1, "1.3.Bar")

	// Case-sensitive comparisons.
	demoCompare(a, b, "lexically")

	// Case-insensitive comparisons by folding both strings to a common case.
	a = strings.ToLower(a.(string))
	b = strings.ToLower(b.(string))
	demoCompare(a, b, "lexically")

	// Numeric comparisons; here 'float64' could be any type for which the relevant conversion is defined.
	var numA, numB float64
	fmt.Sscanf(a.(string), "%f", &numA)
	fmt.Sscanf(b.(string), "%f", &numB)
	demoCompare(numA, numB, "numerically")
}

func getArg(args []string, index int, defaultValue string) interface{} {
	if len(args) > index {
		return args[index]
	}
	return defaultValue
}
```

### Explanation:
1. **Case-sensitive comparisons**: The code directly compares the strings using `==` and `!=`.
2. **Case-insensitive comparisons**: Both strings are converted to lowercase using `strings.ToLower` before comparison.
3. **Numeric comparisons**: The strings are converted to float64 using `fmt.Sscanf`.
4. **Helper functions**: Helper functions `ifEqual`, `ifNotEqual`, `ifLessThan`, and `ifGreaterThan` are used to format the output based on the comparison results.
5. **Command-line arguments**: The code handles command-line arguments by using `os.Args` and a helper function `getArg`.

This Go code should perform the same tasks as your original C++ code, including case sensitivity, lexical comparison, and numeric comparisons.
