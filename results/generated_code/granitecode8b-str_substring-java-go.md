Here's the converted code in Golang:
```go
func Substring(str string, n, m int) string {
 return str[n : n+m]
}
func Substring(str string, n int) string {
 return str[n:]
}
func Substring(str string) string {
 return str[:len(str)-1]
}
func Substring(str string, c byte, m int) string {
 i := strings.IndexByte(str, c)
 if i == -1 {
 return ""
 }
 return str[i : i+m+1]
}
func Substring(str string, sub string, m int) string {
 i := strings.Index(str, sub)
 if i == -1 {
 return ""
 }
 return str[i : i+m+1]
}
```
The Golang code uses a different approach to string slicing compared to the Java code. In Golang, strings are immutable and cannot be modified directly. Instead, a new string is created using the slice syntax `str[n:n+m]` or `str[:len(str)-1]`. The `Substring` function takes an additional parameter `m` for specifying the length of the substring to extract.
The Golang code also uses the `strings` package for string manipulation, which provides functions like `IndexByte` and `Index` for finding the index of a character or substring within a string. The `Substring` function checks if the specified character or substring exists in the input string before extracting a substring.
Note that the Golang code does not handle Unicode characters beyond the Basic Multilingual Plane, unlike the Java code which assumes UTF-8 encoding. If you need to handle Unicode characters above the BMP, you may need to use a different approach or library.

