 Here are the Go equivalents of the Java methods:
```go
 func Substring(str string, n, m int) string {
 	return str[n:n+m]
 }
 func Substring(str string, n int) string {
 	return str[n:]
 }
 func Substring(str string) string {
 	return str[:len(str)-1]
 }
 func Substring(str string, c rune, m int) string {
 	return str[str.Index(c):str.Index(c)+m+1]
 }
 func Substring(str string, sub string, m int) string {
 	return str[str.Index(sub):str.Index(sub)+m+1]
 }
```
Note that Go uses a different notation for strings than Java, so we use the indexing notation `str[n:n+m]` instead of `str.substring(n, n+m)` to get a substring of length m starting at index n in str. We also use the `rune` type to represent Unicode code points, and the `Index` method to find the index of a specific character or substring within a string.
