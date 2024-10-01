Sure! Here's the equivalent code in Golang:
```go
func Substring(str string, n int, m int) string {
 return str[n : n+m]
}
func Substring(str string, n int) string {
 return str[n:]
}
func Substring(str string) string {
 return str[:len(str)-1]
}
func Substring(str string, c rune, m int) string {
 return str[strings.Index(str, string(c)) : strings.Index(str, string(c))+m+1]
}
func Substring(str string, sub string, m int) string {
 return str[strings.Index(str, sub)] : strings.Index(str, sub)+m+1]
}
```
Note that in Golang, indexing starts at 0, and the length of a string is its number of Unicode code points, not its number of bytes. Additionally, the `strings` package is used to find the index of a substring within a string.

