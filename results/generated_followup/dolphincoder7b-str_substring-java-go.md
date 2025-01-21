The error occurs because the `fmt` package is not used and the two built-in packages, `bytes` and `strings`, are not imported correctly.

The code has been successfully converted to Golang and includes the necessary imports. However, the fix does require adjusting the code because it needs to import the bytes package instead of the fmt package. The corrected version of the code is as follows:

```go
package main

import  (
    "bytes"
    "strings"
)

func Substring(str string, n int, m int) string  {
	return str[n : n+m]
}

func Substring2(str string, n int) string  {
	return str[n:]
}

func Substring3(str string) string  {
	return str[:len(str)-1]
}

func Substring4(str string, c byte, m int) string  {
	index := bytes.IndexByte([]byte(str), c)
	if index == -1 {
		// Handle invalid character
		return ""
	}
	return str[index : index+m+1]
}

func Substring5(str string, sub string, m int) string  {
	index := strings.Index(str, sub)
	if index == -1 {
		// Handle missing substring
		return ""
	}
	return str[index : index+m+1]
}
```

This is a more compact and readable version of the previous code with better error handling for invalid characters and missing substrings. The `bytes` package allows us to efficiently find the byte index of a character in the string, while the `strings` package provides a convenient way to locate the first occurrence of a substring within another string. This corrected code effectively mimics the original Java function without compromising on readability and maintainability.
