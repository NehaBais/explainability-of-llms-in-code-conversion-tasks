The error occurs because the `printMatch` function is defined before the package declaration. The fix is to move the `printMatch` function after the package declaration.

```go
package main

func printMatch(possibleMatch *string) {
    if possibleMatch != nil {
        fmt.Printf("Found match at pos %d\n", *possibleMatch)
    } else {
        fmt.Println("Did not find any matches")
    }
}

func main() {
    // ... code as in the original example ...
}
```
