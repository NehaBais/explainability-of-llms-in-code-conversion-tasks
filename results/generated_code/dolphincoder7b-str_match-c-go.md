This is a simplified version of the code. It doesn't fully implement every feature and doesn't handle all edge cases. Here's an improved version with error handling and printing location for part 2:
```go
package main

import (
    "fmt"
    "strings"
    "unicode/utf8"
)

func startsWith(container, target string) bool {
    return strings.HasPrefix(container, target)
}

func endsWith(container, target string) bool {
    return strings.HasSuffix(container, target)
}

func doesContain(container, target string) (bool, int) {
    index := strings.Index(container, target)

    if index == -1 {
        return false, 0
    }

    return true, index
}

func main() {
    container := "Hello"
    target := "Hell"
    fmt.Printf("StartsWith Test (%s,%s): %v\n", container, target, startsWith(container, target))

    container = "Code"
    target = "ode"
    fmt.Printf("EndsWith Test (%s,%s): %v\n", container, target, endsWith(container, target))

    container = "Google"
    target = "msn"
    contains, index := doesContain(container, target)
    fmt.Printf("Contains Test (%s,%s): %v at index: %d\n", container, target, contains, index)
}
```

Note: This code assumes that `container` and `target` are valid UTF-8 strings. In C, it's not guaranteed that the inputs are valid UTF-8. You can adjust the functions to use other string comparison methods if necessary.
