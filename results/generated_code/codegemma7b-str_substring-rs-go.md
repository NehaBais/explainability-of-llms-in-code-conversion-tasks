```go
package main

import "fmt"

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(s[n : n+m])

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(s[n:])

	// Print all characters except the last (abc文字化けde)
	fmt.Println(s[:len(s)-1])

	// Print 3 characters starting with 'b' (bc文)
	bPos := strings.Index(s, "b")
	fmt.Println(s[bPos : bPos+m])

	// Print 3 characters starting with "けd" (けde)
	kePos := strings.Index(s, "けd")
	fmt.Println(s[kePos : kePos+m])
}
```
