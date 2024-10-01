The equivalent Go code for your JavaScript code would be:
```go
package main

import (
    "fmt"
    "strings"
)

func main() {
    original := "Mary had a X lamb"
    little := "little"
    replaced := strings.Replace(original, "X", little, 1) //replace "X" with "little"
    fmt.Println(replaced)
}
```
This Go program will output: `Mary had a little lamb`. This is because it replaces the first occurrence of 'X' in the string with the value of `little`. If you want to replace all instances, remove the third argument of `Replace()` from the second line (`1`) which is 1.
