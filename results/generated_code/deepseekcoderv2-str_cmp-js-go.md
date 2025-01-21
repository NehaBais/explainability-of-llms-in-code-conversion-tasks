 Sure, here's how you can achieve the same functionality in Go. Go provides a rich set of string comparison and manipulation functions that are similar to JavaScript but with some differences due to its type system.

Here's the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(
		"abcd" == "abcd", // true
		"abcd" == "abcd", // true
		123 == 123,       // true
		123 == float64(123), // false (due to type difference)
		"ABCD" == strings.ToLower("ABCD"), // true (case insensitive)
		"ABCD" != "abcd", // true
		123 != 123,       // false
		123 != float64(123), // true (due to type difference)
		"abcd" < "dcba", // true
		"abcd" > "dcba", // false
	)
}
```

### Explanation:

1. **Comparing two strings for exact equality**:
   ```go
   fmt.Println("abcd" == "abcd") // true
   ```

2. **Comparing two numeric strings for exact equality**:
   - In Go, comparing integers and floating-point numbers with different types will result in a type error unless they are explicitly converted to the same type. Here's an example:
     ```go
     fmt.Println(123 == 123) // true
     fmt.Println(123 == float64(123)) // false (due to type difference)
     ```

3. **Comparing two strings for inequality**:
   - The same operator `!=` is used in Go to check for inequality:
     ```go
     fmt.Println("ABCD" != "abcd") // true
     ```

4. **Comparing two numeric strings for inequality**:
   - As mentioned earlier, comparing different types will result in a type error:
     ```go
     fmt.Println(123 != 123) // false
     fmt.Println(123 != float64(123)) // true (due to type difference)
     ```

5. **Comparing two strings lexically**:
   - In Go, the `<` and `>` operators can be used for lexicographical comparison:
     ```go
     fmt.Println("abcd" < "dcba") // true
     fmt.Println("abcd" > "dcba") // false
     ```

6. **Case insensitive comparison**:
   - Go's `strings` package provides a function to convert strings to lowercase for case-insensitive comparison:
     ```go
     fmt.Println("ABCD" == strings.ToLower("ABCD")) // true (case insensitive)
     ```

This demonstrates how Go handles string comparisons and type differences, providing both exact equality checks and lexicographical order comparisons with the ability to handle case insensitivity.
