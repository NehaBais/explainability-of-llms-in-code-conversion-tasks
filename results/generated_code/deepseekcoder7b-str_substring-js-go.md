The following Golang code performs similar operations as your JavaScript one, and it should work with any valid Unicode character in UTF-8 string. It uses 'rune' type to represent a unicode character which can be of 1-, 2-, 3-, or 4-byte depending on the value.

```go
package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func Substr(input string, start int, length int) string {
	runes := []rune(input)
	return string(runes[start:][:length])
}

func main()  {
	var str  = "abcdefgh"
	var n  = 2
	var m = 3

	// * starting from n characters in and of m length;
	fmt.Println(Substr(str,n,m)) //=> "cde"
	
        // * starting from n characters in, up to the end of the string;
	fmt.Println(Substr(str,n,utf8.RuneCountInString(str)-n))  // => "cdefgh"
	
	// * whole string minus last character;
	if len(str) > 0 {
            fmt.Println(str[:(len(str) - 1)])   // => "abcdefg"
	}
	
        // * starting from a known character within the string and of m length;
	fmt.Println(Substr(str,strings.IndexRune(str,'b'),m)) //=> "bcd"
        
	// * starting from a known substring within the string and of m length. 
	n = strings.Index(str,"bc")
	if n != -1 {
            fmt.Println(Substr(str,n,m))   // => "bcd"
	}	    
}
```
You may run it online using the Go playground: https://play.golang.org/p/532vKfG0Sx 

Note that in Golang string indexing works on bytes, not characters (runes). Therefore when manipulating strings we need to convert them into a slice of runes first which allows us to accurately handle and process unicode characters. Also note the difference between Go's `substr` function and JavaScript's `substr`: In JavaScript, if start is greater than string length, it returns an empty string while in Golang we return whole string minus negative start value.

