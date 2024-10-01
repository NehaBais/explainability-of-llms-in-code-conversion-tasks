```go
func Substring(str string, n, m int) string {
	return str[n : n+m]
}

func SubstringFrom(str string, n int) string {
	return str[n:]
}

func SubstringUntil(str string) string {
	return str[:len(str)-1]
}

func SubstringFromChar(str string, c byte, m int) string {
	start := strings.IndexByte(str, c)
	return str[start : start+m+1]
}

func SubstringFromSubstring(str string, sub string, m int) string {
	start := strings.Index(str, sub)
	return str[start : start+m+1]
}
```
