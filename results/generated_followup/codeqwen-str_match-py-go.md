The error occurs because the `strings.Index` function does not accept three arguments. The third argument is used as an offset for the search, but it is not available in Go's standard library.

To fix this, you can use a simple loop to keep searching for the substring until there are no more occurrences. Here's the corrected code:
```go
loc := strings.Index("abab", "bb")
for loc != -1 {
	fmt.Println("The location of 'bb' is:", loc)
	loc = strings.Index("abab", "bb", loc+1)
}
```
