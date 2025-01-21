In Go, there is no direct equivalent to Rust's `str` crate or `std::string` for the purpose of matching strings as in Rust. However, Go has a built-in package `strings` which provides similar functionalities.

Here is how you can implement these three types of string matching and handle optional requirements as specified:

```go
package main

import (
    "fmt"
    "strings"
)

func printMatch(matchPos int) {
    if matchPos != -1 {
        fmt.Printf("Found match at pos %d\n", matchPos)
    } else {
        fmt.Println("Did not find any matches")
    }
}

func main() {
    s1 := "abcd"
    s2 := "abab"
    s3 := "ab"

    // Determining if the first string starts with second string
    fmt.Printf("s1 starts with s3: %v\n", strings.HasPrefix(s1, s3))
    
    // Determining if the first string contains the second string at any location
    fmt.Printf("s1 contains s3: %v\n", strings.Contains(s1, s3))

    // Print the location of the match 
    printMatch(strings.Index(s1, s3)) // Found match at pos 0

    printMatch(strings.Index(s1, s2)) // Did not find any matches

    // Determining if the first string ends with the second string
    fmt.Printf("s2 ends with s3: %v\n", strings.HasSuffix(s2, s3))
}
```

In this Go program:

- `strings.HasPrefix` checks if a string starts with another substring.
- `strings.Contains` checks if a string contains a given substring.
- `strings.Index` returns the index of the first occurrence of a substring in a string. If the substring is not found, it returns -1.

The `printMatch` function takes an integer and prints the match position or "Did not find any matches" accordingly. The main function uses these functions to perform the required operations on strings and print results according to the problem requirements.
