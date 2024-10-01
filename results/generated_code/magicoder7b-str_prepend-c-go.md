 In Go, you can use the `fmt.Sprintf()` function for string formatting and concatenation. Here's how you could implement this functionality in Go:

```go
package main

import (
	"fmt"
	"strings"
	"syscall"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := strings.TrimSpace(str) + "\x00" // to append null character at end of string, for strdup function in Go 
	newStr := fmt.Sprintf("%s%s", cstr, dup)
	fmt.Println(newStr)
}
```

In the above code:
- A `newStr` is created using `fmt.Sprintf()` that concatenates a string literal and a variable `dup`, which is an alias to a string `str`. 
- We added "\x00" because in Go, strings need to be null terminated. So if you want to use the function from C (like strdup) for copying the string you should know that it does not allocate memory for null termination and you have to add it yourself or use some other way of copying a string. 
- The `fmt.Println(newStr)` statement is used to print the new formatted string to the console.
