The error occurs because the `strings` package does not have `CompareFold` function available, which was introduced in Go 1.6 for case-insensitive comparison of strings.

The fix is to add a check if the current version of Golang supports the `strings.CompareFold` function before using it. If it doesn't exist, fall back to `strings.EqualFold`.

Here's the corrected code:

```go
package main

import (
	"fmt"
	"strings"
)

func compare(A string, B string) {
	if A == B {
		fmt.Printf("%s  1 0 0 0 0 0 %s\n", A, B)
	} else if A != B {
		fmt.Printf("%s  0 1 0 0 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) > 0 {
		fmt.Printf("%s  0 0 1 0 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) < 0 {
		fmt.Printf("%s  0 0 0 1 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) >= 0 {
		fmt.Printf("%s  0 0 0 0 1 0 %s\n", A, B)
	} else if strings.Compare(A, B) <= 0 {
		fmt.Printf("%s  0 0 0 0 0 1 %s\n", A, B)
	}
}

func compareCase(A string, B string) {
	if supportedGoVersion() && strings.CompareFold(A, B) == 0 {
		fmt.Printf("%s  1 0 0 0 0 0 %s ignoring case\n", A, B)
	} else if supportedGoVersion() && strings.CompareFold(A, B) != 0 {
		fmt.Printf("%s  0 1 0 0 0 0 %s ignoring case\n", A, B)
	} else if !supportedGoVersion() && strings.EqualFold(A, B) {
		fmt.Printf("%s  1 0 0 0 0 0 %s ignoring case\n", A, B)
	} else if !supportedGoVersion() && !strings.EqualFold(A, B) {
		fmt.Printf("%s  0 1 0 0 0 0 %s ignoring case\n", A, B)
	} else if supportedGoVersion() && strings.CompareFold(A, B) > 0 {
		fmt.Printf("%s  0 0 1 0 0 0 %s ignoring case\n", A, B)
	} else if supportedGoVersion() && strings.CompareFold(A, B) < 0 {
		fmt.Printf("%s  0 0 0 1 0 0 %s ignoring case\n", A, B)
	} else if supportedGoVersion() && strings.CompareFold(A, B) >= 0 {
		fmt.Printf("%s  0 0 0 0 1 0 %s ignoring case\n", A, B)
	} else if supportedGoVersion() && strings.CompareFold(A, B) <= 0 {
		fmt.Printf("%s  0 0 0 0 0 1 %s ignoring case\n", A, B)
	}
}

func supportedGoVersion() bool {
	return strings.HasPrefix(runtime.Version(), "go1.6") ||
		strings.HasPrefix(runtime.Version(), "go1.7") ||
		strings.HasPrefix(runtime.Version(), "go1.8") ||
		strings.HasPrefix(runtime.Version(), "go1.9") ||
		strings.HasPrefix(runtime.Version(), "go1.10") ||
		strings.HasPrefix(runtime.Version(), "go1.11") ||
		strings.HasPrefix(runtime.Version(), "go1.12") ||
		strings.HasPrefix(runtime.Version(), "go1.13") ||
		strings.HasPrefix(runtime.Version(), "go1.14") ||
		strings.HasPrefix(runtime.Version(), "go1.15") ||
		strings.HasPrefix(runtime.Version(), "go1.16")
}

func main() {
	// ...
}
```
