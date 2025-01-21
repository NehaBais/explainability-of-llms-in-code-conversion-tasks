To convert this JavaScript code to Golang, you can use string formatting to achieve similar functionality. Here's how it would look:

```go
package main

import "fmt"

func main() {
    var original = "Mary had a X lamb"
    var little = "little"
    
    // Using fmt.Sprintf to replace the placeholder with the value of little
    replaced := fmt.Sprintf("%s", original)
    replaced = strings.Replace(replaced, "X", little, -1) // Replace all occurrences
    
    fmt.Println("Original string:", original)
    fmt.Println("Replaced string:", replaced)
}
```

In this code:
- `fmt.Sprintf` is used to format the string with the new value. The `%s` placeholder in the format string will be replaced by the contents of the `original` variable.
- `strings.Replace` is used to replace all occurrences of "X" in the resulting string with the new value. The `-1` parameter tells the function to replace all occurrences, not just the first one.

Make sure you have Go installed on your system and that you can run Go programs by typing `go run filename.go`.
