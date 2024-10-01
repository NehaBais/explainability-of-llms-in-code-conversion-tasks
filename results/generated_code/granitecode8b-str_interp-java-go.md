Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
)
func main() {
 adjective := "big"
 lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
 fmt.Println(lyric)
}
```
In this code, we first import the `fmt` package, which provides functions for formatting and printing text in Golang. Then, we define two variables: `adjective` and `lyric`. 
The `adjective` variable is assigned a value of `"big"`, which will be used to replace the `%s` placeholder in the `lyric` string. The `lyric` variable uses the `fmt.Sprintf()` function to perform the string interpolation, replacing `%s` with the value of `adjective`.
Finally, we print the interpolated string using the `fmt.Println()` function.

