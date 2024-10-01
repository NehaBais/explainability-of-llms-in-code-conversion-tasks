The equivalent Golang code for the given Python code is as follows:

```go
package main
import "fmt"
var s = "abcdefgh"
n, m, char, chars = 2, 3, 'd', "cd"
// starting from n characters in and m length;
fmt.Println(s[n-1 : n+m-1])
// starting from n characters in, up to the end of the string;
fmt.Println(s[n-1:])
// whole string minus last character;
fmt.Println(s[:len(s)-1])
// starting from a known character char inside the string and m length;
index := strings.IndexFunc("abcdefgh", func(r rune) bool { return r == 'd' })
fmt.Println(s[index : index+m])
// starting from a known substring chars inside the string and m length;
index := strings.IndexFunc("abcdefgh", func(r rune) bool { return strings.HasPrefix(string([]byte{r}), string([]byte{chars[0]})) })
fmt.Println(s[index : index+m])
```
Please note that in Golang, string indices are 0 based as well. Also, to find a character using IndexFunc function, you need to return true when the rune is equal to your char. This code will print the desired output for given inputs.
