The error is caused by unexpected parentheses `)` at the end of some statements. The fix involves removing these unexpected parentheses.

```go
package main

import (
	"fmt"
	"sort"
)

func factors(n int64) sort.Interface {
	var fs []int64 = make([]int64, 0))
	fs = append(fs, n)
	fs = append(fs, 1))

	for test := (n - 1); test >= int64(math.Sqrt(float64(n)))) ; test--) {
		if (n % test == 0) {
			fs = append(fs, test))
			fs = append(fs, n/test))
		}
	}

	sort.Sort(sort.Reverse(sort.Int64Slice(fs))))

	return sort.Interface(nil)
}

func main() {
	n := 315
	factors := factors(n)

	fmt.Printf("Factors of %d:\t", n)

	for _, factor := range factors.SortedElements() {
		fmt.Println(factor)
	}
}
```
