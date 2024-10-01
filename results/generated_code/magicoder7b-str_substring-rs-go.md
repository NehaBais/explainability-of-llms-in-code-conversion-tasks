 In Go, the `strings` package provides a function named `SplitN`, which can be used to split and slice strings. Here's how you could implement it:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

    // Print 3 characters starting at index 2 (c文字)
	for i, runeValue := range s[n:] {
		if i == m-1 {
			break
		}
		fmt.Print(string(runeValue))
	}
	fmt.Println()

    // Print all characters starting at index 2 (c文字化けdef)
	for i, runeValue := range s[n:] {
		fmt.Print(string(runeValue))
	}
	fmt.Println()

    // Print all characters except the last (abc文字化けde)
	for i := len(s)-1; i > n; i-- {
		fmt.Print(string(s[i]))
	}
	fmt.Println()

    // Print 3 characters starting with 'b' (bc文)
	cpos := strings.IndexRune(s, 'b')
	for i := cpos; i < cpos+m && i < len(s); i++ {
		fmt.Print(string(s[i]))
	}
	fmt.Println()

    // Print 3 characters starting with "けd" (けde)
	spos := strings.IndexRune(s, '文') - strings.IndexRune(s, 'a')
	for i, runeValue := range s[spos : spos+m] {
		if i == m-1 {
			break
		}
		fmt.Print(string(runeValue))
	}
	fmt.Println()
}
```

The main difference here is that Go doesn't have built in string slicing and indexing methods like Rust, so we need to manually loop through the rune values of a string, or use the `strings.IndexRune` function to find the position of a character within a string. 

Also note that Go treats strings as sequences of Unicode characters (i.e., runes), not bytes like Rust's UTF-8/UTF-16 encoding. Therefore, if you want to print out a string in Go, you need to convert each rune back into a string with `string(runeValue)`.
