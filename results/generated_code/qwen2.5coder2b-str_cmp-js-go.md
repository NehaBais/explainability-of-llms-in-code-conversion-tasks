The equivalent Golang code for the above JavaScript code is:

```go
package main

import (
	"fmt"
)

func main() {
	fmt.Println("abcd" == "abcd", true)   // true
	fmt.Println("abcd" == "abcd", true)   // true
	fmt.Println(123 == "123", true)    // true
	fmt.Println(123 == "123", false)  // false
	fmt.Println("ABCD" == "abcd", false)  // false
	fmt.Println("ABCD" != "abcd", true)   // true
	fmt.Println(123 != "123", false)  // false
	fmt.Println(123 !== "123", true)    // true
	fmt.Println("abcd" < "dcba", true)   // true
	fmt.Println("abcd" > "dcba", false)   // false
	fmt.Println("ABCD".String() == "abcd".String(), true)  // true (case insensitive)
}
```
In Golang, strings are similar to JavaScript's strings and have similar methods for comparison. The type system in Golang ensures that string comparisons must be done using the `==` and `!=` operators which compare the values of the strings directly. For case-insensitive comparison, you can use the `.String()` method which returns a case-sensitive version of the string.

The other comparison methods like `<`, `>`, etc. are not available in Golang because they are not part of the language's standard library and require custom implementations.
