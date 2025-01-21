The error occurs because the `substring` function returns a string pointer, while the `fmt.Println` function expects an actual string. The error can be fixed by dereferencing the returned string pointer before passing it to `fmt.Println`. Here's the corrected code:

```go
func main() {
	s := "hello world shortest program"

	fmt.Println(*substring(s, 12, 5))     // get "short"
	fmt.Println(*substring(s, 6, len(s))) // get "world shortest program"
	fmt.Println(*strWholeLess1(s))        // "... progra"
	fmt.Println(*strFromCh(s, 'w', 5))    // "world"
	fmt.Println(*strFromStr(s, "ro", 3))  // "rog"
}
```
