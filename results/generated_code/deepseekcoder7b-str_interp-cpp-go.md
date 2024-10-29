In Golang, you can use the `strings.Replace()` function to replace a substring in another string. Here is the equivalent Go code for your provided C++ code:

```go
package main

import (
	"fmt"
	"strings"
)

func main(){
	original := "Mary had a X lamb." 
	toBeReplaced := "X" 
	replacement := "big" 
    newString := strings.Replace(original, toBeReplaced, replacement, 1)
	fmt.Println("String after replacement:", newString)
}
```

This Go program does essentially the same thing as your C++ code. It replaces a substring "X" with another string "big" in a given original string and prints it out to console. The `strings.Replace()` function takes 4 arguments, original string, string to be replaced, replacement string and occurrence count (how many occurrences of the 'toBeReplaced' you want to replace), here set as 1 to only replace first match in the source string.

