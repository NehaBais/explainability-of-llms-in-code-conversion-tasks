 Here is the equivalent code in Go:
```
package main
import "fmt"

func main() {
    s1 := "abcd"
    s2 := "abab"
    s3 := "ab"

    // Beginning
    fmt.Println(s1[:len(s3)])

    // End
    fmt.Println(s1[len(s1)-len(s3):])

    // Anywhere
    if loc, err := s2.Find(s3); err == nil {
        fmt.Println("Found at location:", loc)
    } else {
        fmt.Println("Not found")
    }
}
```
Note that in Go, the `compare` method is not used to compare strings, instead, you can use the `==` operator to check if two strings are equal.

Also, the `string::npos` is replaced with the `math.MaxInt64` constant in Go.

In addition, the `find` method in Go returns an error value if there is no match found, so you need to handle that case by checking for the error.
