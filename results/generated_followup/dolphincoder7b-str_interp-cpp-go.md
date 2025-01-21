The error occurs because we have not declared the variable `newString` or initialized it with any value. In C++, this variable is an output string that stores the final result after replacing the "X" with "little". To fix this issue, declare and initialize `newString` as an empty string.

The updated code snippet would be:
```go
package main

import  (
	 "fmt"
	 "strings"
)

func main() {
    original :=  "Mary had a X lamb."
    toBeReplaced :=  "X"
    replacement :=  "little"

    fmt.Println(original)

	 // Find and replace 'X' in the original string
    newString = strings.ReplaceAll(original, toBeReplaced, replacement)

    fmt.Printf("New String after replacement: %s \n", newString)
}
```
