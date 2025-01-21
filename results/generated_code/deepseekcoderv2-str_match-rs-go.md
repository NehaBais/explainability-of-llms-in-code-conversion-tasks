 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func printMatch(possibleMatch int, str1, str2 string) {
	if possibleMatch != -1 {
		fmt.Printf("Found match at pos %d\n", possibleMatch)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	if !startsWith(s1, s3) {
		fmt.Println("Assertion failed: s1 does not start with s3")
	}

	// Determining if the first string contains the second string at any location
	if !contains(s1, s3) {
		fmt.Println("Assertion failed: s1 does not contain s3")
	}

	// Print the location of the match
	printMatch(find(s1, s3), s1, s3) // Found match at pos 0
	printMatch(find(s1, s2), s1, s2) // Did not find any matches

	// Determining if the first string ends with the second string
	if !endsWith(s2, s3) {
		fmt.Println("Assertion failed: s2 does not end with s3")
	}
}

func startsWith(str1, str2 string) bool {
	return len(str1) >= len(str2) && str1[:len(str2)] == str2
}

func contains(str1, str2 string) bool {
	return indexOf(str1, str2) != -1
}

func find(str1, str2 string) int {
	index := indexOf(str1, str2)
	if index != -1 {
		return index
	}
	return -1
}

func endsWith(str1, str2 string) bool {
	return len(str1) >= len(str2) && str1[len(str1)-len(str2):] == str2
}

func indexOf(s, substr string) int {
	n := len(substr)
	for i := 0; i <= len(s)-n; i++ {
		if s[i:i+n] == substr {
			return i
		}
	}
	return -1
}
```

### Explanation:
1. **`startsWith` Function**: Checks if `str1` starts with `str2`.
2. **`contains` Function**: Checks if `str1` contains `str2`. It uses the helper function `indexOf` to find the position of the first occurrence of `str2` in `str1`.
3. **`find` Function**: Similar to `contains`, but it returns the index of the match or -1 if not found.
4. **`endsWith` Function**: Checks if `str1` ends with `str2`.
5. **`indexOf` Function**: Finds the first occurrence of `substr` in `s` and returns its index, or -1 if not found.
6. **`printMatch` Function**: Prints the location of the match for part 2.
7. **`main` Function**: Demonstrates the three types of string matching as specified.
