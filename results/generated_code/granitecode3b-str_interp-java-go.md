Here's the equivalent code in Golang:
```
package main
import "fmt"
func main() {
 adjective := "big"
 lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
 fmt.Println(lyric)
}
```
This code uses the `fmt` package to perform string interpolation, replacing the `%s` placeholder with the value of the `adjective` variable. The resulting interpolated string is then assigned to the `lyric` variable and printed to the console using `fmt.Println()`.

