Here is the equivalent code in Golang:

```go
package main

import (
    "fmt"
)

func main() {
    original := "Mary had a X lamb."
    toBeReplaced := "X"
    replacement := "little"

    newString := replaceString(original, toBeReplaced, replacement)
    fmt.Println("String after replacement:", newString)
}

func replaceString(s string, oldStr string, newStr string) string {
    return strings.Replace(s, oldStr, newStr, -1)
}
```
In this Golang code, I used the `strings.Replace` function to replace all occurrences of a substring in a string. The `-1` passed as the 4th argument means that all occurrences will be replaced.

Please note that the Go's `fmt.Println` is equivalent to C++'s `std::cout << "..."`.
