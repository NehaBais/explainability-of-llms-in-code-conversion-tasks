 In Go language, the string comparison is done in a similar manner to that of Rust. However, there isn't a direct conversion for all cases like `eq_ignore_ascii_case`. Here is how you can achieve the same comparisons:

```go
package main

import "strings"
import "fmt"

func main() {
    a := "abc"
    b := "Bac"

	// Comparing two strings for exact equality
	if a == b {
		fmt.Println("The strings are equal")
	}

	// Comparing two strings for inequality (i.e., the inverse of exact equality)
	if a != b {
		fmt.Println("The strings are not equal")
	}

	// Strings are coerced to &str when borrowed and needed, we can directly compare them as Go will handle conversion implicitly for us.
	if a < b {
		fmt.Println("The first string is lexically before the second")
	}
	if a > b {
		fmt.Println("The first string is lexically after the second")
	}
	if a <= b {
		fmt.Println("The first string is not lexically before the second")
	}
	if a >= b {
		fmt.Println("The first string is not lexically after the second")
	}

    // Go doesn't have direct equivalent to Rust's `eq_ignore_ascii_case`, but it has a function for case-insensitive comparisons in `strings` package
    if strings.EqualFold(a, b) {
        fmt.Println("Both strings are equal when ignoring case")
	}
}
```
In Go, we don't need to allocate new memory or convert types explicitly for comparison and most of the basic comparison operations (like == and != ) will handle type coercion automatically.
