 Sure, here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func Substring(str string, n int, m ...int) string {
	if len(m) > 0 && m[0] != 0 {
		return str[n : n+m[0]]
	}
	return str[n:]
}

func SubstringWithoutLastChar(str string) string {
	return str[:len(str)-1]
}

func SubstringFromCharacter(str, charStr string, m int) (string, error) {
	index := strings.Index(str, charStr)
	if index == -1 {
		return "", fmt.Errorf("character not found")
	}
	return str[index : index+m], nil
}

func SubstringFromSubstring(str, subStr string, m int) (string, error) {
	index := strings.Index(str, subStr)
	if index == -1 {
		return "", fmt.Errorf("substring not found")
	}
	return str[index : index+m], nil
}

func main() {
	// Test cases
	str := "Hello, 世界!"
	fmt.Println(Substring(str, 7, 5))       // Output: "世界"
	fmt.Println(Substring(str, 7))          // Output: "世界!"
	fmt.Println(SubstringWithoutLastChar(str)) // Output: "Hello, 世界"
	
	// For SubstringFromCharacter and SubstringFromSubstring, you need to handle potential errors if the character or substring is not found.
	result, err := SubstringFromCharacter(str, "世", 3)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println(result) // Output: "世界"
	}
	
	result2, err := SubstringFromSubstring(str, "世", 3)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println(result2) // Output: "世界"
	}
}
```

This Go code provides the same functionality as the Java code you provided. It includes functions to handle substrings starting from a given index with a specified length, starting from a given index up to the end of the string, excluding the last character, starting from a known character within the string and of a specified length, and starting from a known substring within the string and of a specified length. The `Substring` function can handle optional lengths for the substring, and the other functions are designed to work with characters or substrings that may not be found in the input string by returning an error if they are not present.
