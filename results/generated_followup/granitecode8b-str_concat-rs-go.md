The error is due to the fact that Golang does not support string interpolation using the `+` operator as Rust does. The fix is to use the `fmt` package in Golang to concatenate the strings. Here's the corrected code:
```go
func main() {
 s := "hello"
 fmt.Println(s)
 
 s1 := fmt.Sprintf("%s world", s)
 fmt.Println(s1)
}
```

