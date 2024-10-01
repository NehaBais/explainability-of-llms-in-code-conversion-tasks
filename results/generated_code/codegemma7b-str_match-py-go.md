```go
func startsWith(str, substr string) bool {
	return strings.HasPrefix(str, substr)
}

func contains(str, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str, substr string) bool {
	return strings.HasSuffix(str, substr)
}

func findFirst(str, substr string) int {
	return strings.Index(str, substr)
}

func findNext(str, substr string, start int) int {
	return strings.Index(str[start:], substr) + start
}
```

**Usage Example:**

str := "abcd"
substr := "ab"

startsWith := startsWith(str, substr) // True
contains := contains(str, substr) // True
endsWith := endsWith(str, substr) // False

location := findFirst(str, substr) // 0
nextLocation := findNext(str, substr, location+1) // 2
