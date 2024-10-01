To convert the given Java code to Golang, we can follow these steps:

1. Define the variables for the string "adjective" and "lyric".
2. Use the format method in the String class to create a new string with the values of the variables "adjective" and "lyric".
3. Print the resultant string.

Here's the equivalent Golang code:
```go
package main
import (
    "fmt"
)
func main() {
    adjective := "little"
    lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
    fmt.Println(lyric)
}
```
