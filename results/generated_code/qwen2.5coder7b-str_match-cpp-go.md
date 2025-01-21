Here is how you can convert the given C++ code to Go:

```go
package main

import (
    "fmt"
)

func main() {
    s1 := "abcd"
    s2 := "abab"
    s3 := "ab"

    // Beginning
    fmt.Println(s1[:len(s3)] == s3)
    
    // End
    if len(s1) >= len(s3) {
        fmt.Println(s1[len(s1)-len(s3):] == s3)
    } else {
        fmt.Println(false)
    }

    // Anywhere
    loc := -1
    for i := 0; i <= len(s2)-len(s3); i++ {
        if s2[i:i+len(s3)] == s3 {
            if loc == -1 {
                loc = i
            } else {
                fmt.Println("Found at multiple locations.")
                return
            }
        }
    }

    if loc != -1 {
        fmt.Printf("First occurrence found at location %d\n", loc)
    } else {
        fmt.Println("String not found")
    }
}
```

This Go code does exactly the same thing as the C++ code:
- It checks whether `s1` begins with `s3`, ends with `s3`, and contains `s2`.
- For part 2, it also prints out the location where the match is found. If there are multiple matches, it will print a message and terminate early.
- Note that Go does not have a built-in function to find all occurrences of a substring like C++. Instead, we use a loop to go through `s2` and check each character block of length `len(s3)` whether they equal `s3`.
