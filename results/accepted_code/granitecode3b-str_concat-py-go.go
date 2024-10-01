var s1 string = "hello"
fmt.Println(s1 + " world")
// Output: hello world

var s2 string = s1 + " world"
fmt.Println(s2)
// Output: hello world

words := []string{"hello", "world", "mom"}
s2 = strings.Join(words, ", ")
fmt.Println(s2)
// Output: hello, world, mom