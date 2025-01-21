 Sure! Below is the equivalent code in Go that demonstrates the requested string comparisons:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// only same types can be compared
	// string and string or string and *string
	// exception: strict equality and inequality also work on string and *string
	a := "abc"
	b := "Bac"

	// Strings are coerced to string when needed
	if a == b {
		fmt.Println("The strings are equal")
	}
	if a != b {
		fmt.Println("The strings are not equal")
	}
	if strings.Compare(a, b) > 0 {
		fmt.Println("The first string is lexically after the second")
	}
	if strings.Compare(a, b) < 0 {
		fmt.Println("The first string is lexically before the second")
	}
	if strings.Compare(a, b) >= 0 {
		fmt.Println("The first string is not lexically before the second")
	}
	if strings.Compare(a, b) <= 0 {
		fmt.Println("The first string is not lexically after the second")
	}

	// case-insensitives:

	// equality
	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}

	// everything else, create new strings, then compare as above
	a2 := strings.ToUpper(a)
	b2 := strings.ToUpper(b)

	// repeat checks
}
```

### Explanation:
1. **Comparing two strings for exact equality and inequality:**
   - `if a == b { ... }` for equality check.
   - `if a != b { ... }` for inequality check.

2. **Comparing two strings for lexically ordered comparison:**
   - `strings.Compare(a, b)` is used to compare strings lexicographically. It returns:
     - `0` if `a == b`
     - `1` if `a > b`
     - `-1` if `a < b`
   - Based on the result of `strings.Compare`, appropriate conditions are checked.

3. **Case insensitive comparisons:**
   - `strings.EqualFold(a, b)` is used to check case-insensitive equality.
   - For other case-insensitivity needs, you can convert strings to uppercase or lowercase using `strings.ToUpper` and compare the results:
     ```go
     a2 := strings.ToUpper(a)
     b2 := strings.ToUpper(b)
     // repeat checks with a2 and b2
     ```

4. **Handling numeric strings:**
   - In Go, string comparison is based on lexicographical order, not numerical value. If you need to compare numeric strings as numbers, you would typically convert them to integers or floats for comparison:
     ```go
     numA, errA := strconv.Atoi(a)
     numB, errB := strconv.Atoi(b)
     if numA == numB { ... }
     ```

This Go code provides a similar functionality to the Rust example, demonstrating various string comparisons and handling case insensitivity appropriately.
