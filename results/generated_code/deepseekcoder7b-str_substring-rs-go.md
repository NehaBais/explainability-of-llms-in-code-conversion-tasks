In Go, the equivalent code would be as follows:

```Go
package main

import (
	"fmt"
	utf8 "unicode/utf8"
)

func substringByLengthFromN(s string, n int, m int) string {
    return s[n : n+m]
}

func substringUntilEndFromN(s string, n int) string {
	return s[n:]
}

func substringExceptLastCharacter(s string) string {
	return s[:len(s)-1]
}

func substringByLengthFromKnownChar(s string, c rune, m int) string {
	i := utf8.RuneCountInString(s)
	for idx, char := range s {
		if char == c {
		    i = idx 
			break
		}
	}
	return substringByLengthFromN(s, i, m)
}

func substringByLengthFromKnownSubstr(s string, substr string, m int) string{
	i := utf8.RuneCountInString(s)
	j := len(substr)
	for idx := 0; idx <= (len(s)-j); idx++ {
        if s[idx:idx+j] == substr { 
            i = idx  
			break
         }
    }
	return substringByLengthFromN(s, i, m)
}

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3
    
	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(substringByLengthFromN(s, n, m))

    // Print all characters starting at index 2 (c文字化けdef)
    fmt.Println(substringUntilEndFromN(s, n))
	
	// Print all characters except the last (abc文字化けde)
	fmt.Println(substringExceptLastCharacter(s))
    
	// Print 3 characters starting with 'b' (bc文)
    fmt.Println(substringByLengthFromKnownChar(s, 'b', m))	
		
	// Print 3 characters starting with "けd" (けde)
	fmt.Println(substringByLengthFromKnownSubstr(s, "けd", m))
}
```

