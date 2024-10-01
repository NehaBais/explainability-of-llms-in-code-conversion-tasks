```go
func startsWith(str, prefix string) bool {
	return strings.HasPrefix(str, prefix)
}

func contains(str, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str, suffix string) bool {
	return strings.HasSuffix(str, suffix)
}

func indexOf(str, substr string) int {
	return strings.Index(str, substr)
}

func lastIndexOf(str, substr string) int {
	return strings.LastIndex(str, substr)
}
```

**Usage Example:**


str := "abcd"
prefix := "ab"
suffix := "zn"

fmt.Println(startsWith(str, prefix)) // Output: true
fmt.Println(endsWith(str, suffix)) // Output: false

str = "abab"
substr := "bb"

fmt.Println(contains(str, substr)) // Output: false

substr = "ab"
fmt.Println(contains(str, substr)) // Output: true

loc := indexOf(str, substr)
fmt.Println(loc) // Output: 0

loc = lastIndexOf(str, substr)
fmt.Println(loc) // Output: 2

