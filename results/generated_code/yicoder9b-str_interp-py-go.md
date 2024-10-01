In Go language, you can use the `fmt` package for string formatting similar to Python's f-string or format method. 

Here is how the above python code would be converted into Golang:

```go
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
	fmt.Println(newStr)
}
``` 
In this Go code: `%s` is the format specifier for string, and `Sprintf()` function is used to interpolate or replace the format specifiers with actual values (from variables) in a formatted string. Then it prints out the resultant string using `fmt.Println()`.
