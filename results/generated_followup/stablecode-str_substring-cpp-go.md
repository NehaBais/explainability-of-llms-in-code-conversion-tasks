The error occurs due to incorrect syntax for defining constants, variable declaration, using the `strings.ReplaceAll()` function incorrectly, and missing or extra closing brackets.

Fix:
1. Replace `const int n = 3;` with `n := 3;`.
2. Replace `const int m = 4;` with `m := 4;`.
3. Change `char const c = '2';` to `c := '2'`.
4. Change `std::string const sub = "456";` to `sub := "456"``.
5. Correctly use the `strings.ReplaceAll()` function by passing a valid string, a substring to replace, and an empty string as the replacement.
6. Remove unnecessary closing brackets in the corrected code.

Corrected Code:
```go
package main

import (
	"fmt"
	"strings"
)

func main() {

	var s = "01234567890"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(strings.ReplaceAll(s, string([]c]), ""))))
	fmt.Println(strings.ReplaceAll(s, string([]sub]), ""))))
}
```
