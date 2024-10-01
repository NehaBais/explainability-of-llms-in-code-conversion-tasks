Below is your Python code converted to Golang. It assumes that 'n', 'm', character and substring are passed as function parameters for the methods.

```go
package main

import (
	"fmt"
)

func getSubStringNtoM(s string, n int, m int) {
    runes := []rune(s) 
    if len(runes) < n+m-1 {  // Check if the string is long enough.
        return 
    }
    fmt.Println(string(runes[n-1:n+m-1]))
}

func getSubStringNToEnd(s string, n int) {
    runes := []rune(s) 
	if len(runes) < n {  // Check if the string is long enough.
        return 
    }
	fmt.Println(string(runes[n-1:]))
}

func getSubStringMinusLastCharacter(s string) {
	runes := []rune(s) 
	if len(runes) < 2 {  // Check if the string is long enough.
        return 
    }
	fmt.Println(string(runes[:len(runes)-1]))
}

func getSubStringCharToM(s string, char rune, m int) {
	index := -1
	for i, crntRune := range s { 
		if crntRune == char {  // If the current character is equal to our known character.
			index = i 
			break 
		}
	}
	runes := []rune(s)
	if index+m > len(runes) { // Check if the string is long enough.
        return  
    }
	fmt.Println(string(runes[index:index+m]))
}

func getSubStringCharsToM(s string, chars string, m int) {
	index := strings.Index(s, chars) // If the substring exists.
	if index == -1 { 
        return  // Return if it doesn't exist.
    }
	runes := []rune(s) 
	if len(runes[index:]) < m {  // Check if the string is long enough.
        return 
    }
	fmt.Println(string(runes[index : index+m]))
}
```
Please note that in Go, strings are Unicode compatible and we use rune type to handle individual characters regardless of their size (a single character may be one byte or four bytes). Also note the use of 'range' keyword which provides access both to the content and its index of a string.
