The error in the original C code is that the `strings.Dup()` function is not defined in the standard Go library. To fix this, we can import the "fmt" package and use the `fmt.Sprintf()` function instead. Here's the corrected code in a single line:
```go
fmt.Println(fmt.Sprintf("%s%s", cstr, str))
```
This code imports the "fmt" package, uses `fmt.Sprintf()` to concatenate `cstr` and `str`, and prints the result to the console.

