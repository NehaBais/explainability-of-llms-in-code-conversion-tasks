 Here's the equivalent Go code for the provided C code that performs the same string matching operations:

```go
package main

import (
	"fmt"
	"strings"
)

// Determines if the first string starts with the second string.
func startsWith(container, target string) bool {
	return len(container) >= len(target) && container[:len(target)] == target
}

// Determines if the first string ends with the second string.
func endsWith(container, target string) bool {
	return len(container) >= len(target) && container[len(container)-len(target):] == target
}

// Determines if the first string contains the second string at any location.
func doesContain(container, target string) bool {
	return strings.Contains(container, target)
}

// Finds all occurrences of the second string within the first string and prints their locations.
func findOccurrences(container, target string) {
	index := 0
	for index < len(container) {
		i := strings.Index(container[index:], target)
		if i == -1 {
			break
		}
		fmt.Println("Found at position:", index+i)
		index += i + 1
	}
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %v\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test ( Code,ode ) : %v\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test ( Google,msn ) : %v\n", doesContain("Google", "msn"))

	// Optional requirement: Find and print all occurrences of the target string within the container string.
	fmt.Println("Find Occurrences Test ( HelloHello,Hell ):")
	findOccurrences("HelloHello", "Hell")
}
```

This Go code includes functions to check if one string starts with another (`startsWith`), if it ends with another (`endsWith`), and if it contains another string anywhere within it (`doesContain`). The `main` function demonstrates these checks with example strings. Additionally, there's a function `findOccurrences` that finds all occurrences of a substring within a string and prints their positions, fulfilling the optional requirement.
