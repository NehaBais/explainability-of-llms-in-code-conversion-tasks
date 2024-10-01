Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func main() {
    s := "abc文字化けdef"
    n := 2
    m := 3

    // Print 3 characters starting at index 2 (c文字))
    output := ""
    for i := n; i < n+m && len(s) > i; i++ {
        output += string(s[i]))
    }
    fmt.Println("Output 1:", output))

    // Print all characters starting at index 2 (c文字化けdef))
    output = ""
    for i := n; len(s) > i; i++ {
        output += string(s[i]))
    }
    fmt.Println("Output 2:", output))

    // Print all characters except the last (abc文字化けde))
    output = ""
    for i := n; len(s) > i+1; i++ {
        output += string(s[i]))
    }
    fmt.Println("Output 3:", output))

    // Print 3 characters starting with 'b' (bc文))
    cpos := n
    for _, c := range s[n:] {
        if c == rune('b') {
            output = string(s[cpos:]))[:m]
            break
        }
        cpos++
    }
    fmt.Println("Output 4:", output))

    // Print 3 characters starting with "けd" (けde))
    spos := n
    for _, c := range s[n:] {
        if string(c) == "けd" {
            output = string(s[spos:]))[:m]
            break
        }
        spos++
    }
    fmt.Println("Output 5:", output))
}
```

Note: This code assumes that the input string `s` is correctly encoded in UTF-8. If you need to handle other encodings, additional logic will be required.
