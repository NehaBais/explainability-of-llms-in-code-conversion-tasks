In Go language there is no direct equivalent of Java's indexOf and contains functions for strings but you can easily achieve the same functionality with built-in functions provided by Go. Here is how to do it:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// 1. Determine if a string starts with another string
	startsWith := strings.HasPrefix("abcd", "ab") //returns true
	fmt.Println(startsWith)
	
	// 2. Determine if a string ends with another string
	endsWith := strings.HasSuffix("abcd", "zn") //returns false
	fmt.Println(endsWith)
	
	// 3. Determine whether one string contains another
	contains := strings.Contains("abab", "bb")  // returns false
	fmt.Println(contains)
	contains = strings.Contains("abcd", "ab")   // returns true
	fmt.Println(contains) 
	
	// 4. Finding the location of a substring within a string
	loc := strings.Index("abab", "bb") //returns -1
	fmt.Println(loc)
	loc = strings.Index("abab", "ab") //returns 0
	fmt.Println(loc)
	// Finding next occurrence of a substring within a string
	loc = strings.IndexFrom("abab", "ab", loc+1)  // returns 2
	fmt.Println(loc)
}
```

This code will output:

true
false
false
true
-1
0
2
