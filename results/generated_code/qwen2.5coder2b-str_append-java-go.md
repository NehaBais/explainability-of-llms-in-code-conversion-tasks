In Go, you can achieve this by using the `+=` operator or the `fmt.Sprintf` function. Below is how you can rewrite your Java code in Go:

```go
package main

import (
	"fmt"
)

func main() {
	string := "abc"
	fmt.Println(string) // Outputs: abc

	string += "def" // Using the += operator to append
	fmt.Println(string) // Outputs: abcdef

	// Alternatively, you can use fmt.Sprintf
	string = fmt.Sprintf("%s%s", string, "def")
	fmt.Println(string) // Outputs: abcdef
}
```
In this Go code:
- `string += "def"` appends the string `"def"` to the original string variable.
- `fmt.Sprintf("%s%s", string, "def")` is used for a more readable approach. It takes two arguments: a format string and values for those arguments. In this case, it concats the strings `"abc"` and `"def"`.
The result will be printed as: `abcdef`.
