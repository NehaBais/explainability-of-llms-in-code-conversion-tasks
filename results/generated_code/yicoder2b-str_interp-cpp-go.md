Sure, here is the equivalent code in Golang:
```go
package main

import (
    "fmt"
    "strings"
)

func main() {
    original := "Mary had a X lamb."
    toBeReplaced := "X"
    replacement := "little"
    newString := strings.Replace(original, toBeReplaced, replacement, 1) // replace only the first occurrence of 'X' with 'little'
    fmt.Println("String after replacement: " + newString)
}
```
This code does exactly what you asked for - it replaces the first occurrence of a specific string (`toBeReplaced`) in another string (`original`) with another string (`replacement`), then prints out the result.
