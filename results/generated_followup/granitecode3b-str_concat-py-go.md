The error message indicates that Golang does not recognize `var` as a keyword, which is causing the compilation issue. To fix this error, we can simply remove `var` from the first two lines of code. Here's the corrected code in a single code block:
```go
s1 := "hello"
fmt.Println(s1 + " world")
// Output: hello world
s2 := s1 + " world"
fmt.Println(s2)
// Output: hello world
words := []string{"hello", "world", "mom"}
s2 = strings.Join(words, ", ")
fmt.Println(s2)
// Output: hello, world, mom
``` 
Note that I have also added `:=` for the first two lines to declare the variables and assign their values. This is a common idiom in Golang and is recommended.

