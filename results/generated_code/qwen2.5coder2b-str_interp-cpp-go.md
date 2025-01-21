To convert the given C++ code to Golang, you need to utilize the `strings.Replace` function from Go's standard library. The `strings.Replace` function can replace all occurrences of a substring with another substring in a string.

Here is the equivalent Golang code:

```go
package main

import (
    "fmt"
)

func main() {
    original := "Mary had a X lamb."
    toBeReplaced := "X"
    replacement := "little"

    newString := strings.Replace(original, toBeReplaced, replacement, -1)
    fmt.Println("String after replacement: ", newString)
}
```

In this Golang code:
- We import the `fmt` package to use it for printing.
- We define the original string, the substring to be replaced (`X`), and the replacement string (`little`).
- We use the `strings.Replace` function to replace all occurrences of `toBeReplaced` with `replacement` in `original`. The third argument `-1` tells `strings.Replace` that we want to replace all occurrences.
- Finally, we print the modified string.

This code will output: "String after replacement: Mary had a little lamb."
