### Explanation of the Error:
The error occurred because Go does not have an equivalent function to `strcasecmp()` or `strcmp()`.

### Fix for the Error:
To fix this, we can use the `strings` package's `CompareFold()` and `EqualFold()` functions instead. These functions ignore case when comparing strings.

### Code with Fixed Errors:
```go
package main

import  (
	 "fmt"
	 "strings"
)

func StrEq(a, b string) bool {
	if a == b {
		return true
	}

	return false
}

func StrNe(a, b string) bool {
	if !StrEq(a, b) {
		return true
	}

	return false
}

func StrGt(a, b string) bool {
	if a  > b  {
		return true
	}

	return false
}

func StrGe(a, b string) bool {
	if a  >= b  {
		return true
	}

	return false
}

func StrLt(a, b string) bool {
	if a  < b  {
		return true
	}

	return false
}

func StrLe(a, b string) bool {
	if a  <= b  {
		return true
	}

	return false
}

func StrCaseEq(a, b string) bool {
	if strings.EqualFold(a, b) {
		return true
	}

	return false
}

func StrCaseNe(a, b string) bool {
	if  !StrCaseEq(a, b)  {
		return true
	}

	return false
}

func StrCaseGt(a, b string) bool {
	if strings.CompareFold(b, a) < 0  {
		return true
	}

	return false
}

func StrCaseGe(a, b string) bool {
	if strings.CompareFold(b, a) <= 0  {
		return true
	}

	return false
}

func main()  {
	var a, b string
	fmt.Println("   eq     ne     gt    lt    ge    le")
	for  {
		 _, err  := fmt.Scan(&a, &b)
		if err != nil  {
			break
		}

		fmt.Printf("%-8s %-2d %-2d %-2d %-2d %-2d %-2d %s\n", a, StrEq(a, b), StrNe(a, b), StrGt(a, b), StrLt(a, b), StrGe(a, b), StrLe(a, b), b)
		fmt.Printf("%-8s %-2d %-2d %-2d %-2d %-2d %-2d %s ignoring case\n", a, StrCaseEq(a, b), StrCaseNe(a, b), StrCaseGt(a, b), StrCaseLt(a, b), StrCaseGe(a, b), StrCaseLe(a, b), b)
	}
}
```
