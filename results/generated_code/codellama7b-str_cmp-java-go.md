This code compares two strings using the `equals()` and `compareTo()` methods in Java. Here's how you can convert this code to Golang:

1. Use the `==` operator for exact equality comparison, as in Java.
2. Use the `!=` operator for inequality (i.e., the inverse of exact equality) comparison.
3. Use the `<` and `>` operators for lexical order comparison.
4. Use the `>=` and `<=` operators for non-lexical order comparison.
5. Use the `strings.EqualFold()` function for case-insensitive string comparison.
6. Use the `strings.Compare()` function for lexical comparison of two strings.
7. Use the `string` type for both strings in Golang.

Here's the converted code:
```go
package main

import "fmt"

func main() {
    A := "Hello"
    B := "Hello"
    fmt.Println(A == B) // true

    C := "5"
    D := "5.0"
    fmt.Println(C != D) // true

    E := "java"
    F := "Java"
    fmt.Println(E != F) // false

    G := "ĴÃVÁ"
    H := "ĵãvá"
    fmt.Println(G == H) // false

    I := "ĴÃVÁ"
    J := "ĕãvá"
    fmt.Println(I != J) // true

    K := A
    L := B
    if K < L {
        fmt.Printf("'%s' is lexically before '%s'.\n", K, L)
    } else if K > L {
        fmt.Printf("'%s' is lexically after '%s'.\n", K, L)
    }

    M := A
    N := B
    if M >= N {
        fmt.Printf("'%s' is not lexically before '%s'.\n", M, N)
    } else if M <= N {
        fmt.Printf("'%s' is not lexically after '%s'.\n", M, N)
    }

    fmt.Println(strings.EqualFold(A, B)) // true
    fmt.Println(strings.Compare(A, B))   // 0
}
```
Note that in Go, you can use the `==` operator for string comparison, but it's case-sensitive. If you want to compare strings without considering their case sensitivity, you can use the `strings.EqualFold()` function or the `strings.Compare()` function as shown above.
