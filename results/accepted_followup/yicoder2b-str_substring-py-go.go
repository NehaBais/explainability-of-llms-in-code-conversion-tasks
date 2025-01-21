package main
import "fmt"
var s = "abcdefgh"
n, m, char, chars = 2, 3, 'd', "cd"
fmt.Println(s[n-1 : n+m-1])
fmt.Println(s[n-1:])
fmt.Println(s[:len(s)-1])
fmt.Println(strings.IndexFunc("abcdefgh", func(r rune) bool { return r == 'd' }))
fmt.Println(strings.IndexFunc("abcdefgh", func(r rune) bool { return strings.HasPrefix(string([]byte{r}), string([]byte{chars[0]})) }))
fmt.Println(s[index : index+m])