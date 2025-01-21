Here is how you can convert the given Python code to Golang:

```go
package main

import (
    "fmt"
)

func main() {
    // create a string variable equal to any text value
    s1 := "hello"

    // concatenate two strings and print it out
    fmt.Println(s1 + " world")

    // create another string variable whose value is the original variable concatenated with another string literal
    s2 := s1 + " world"
    fmt.Println(s2)

    // join multiple strings and print it out
    s3 := ", ".join([]string{s1, "world", "mom"})
    fmt.Println(s3)
}
```

Please note that in Go, unlike Python, there is no built-in function for joining slices of strings. Hence, the last part of the Python code cannot be directly translated to Go. Instead, you would need to manually concatenate the elements of the slice.

Here is how you can manually join multiple strings with ", ":

func main() {
    s1 := "hello"
    s2 := s1 + " world"
    
    // create a string array and manually concatenate it 
    s3 := ""
    for i, str := range []string{s1, "world", "mom"} {
        if i != 0 {
            s3 += ", "
        }
        s3 += str
    }

    fmt.Println(s2)
    fmt.Println(s3)
}
