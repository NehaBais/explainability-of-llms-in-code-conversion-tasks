The error occurred because the `:=` operator was used on an expression with side effects, such as assigning to an array or slice. The fix is to assign the value of the expression to a new variable before using it in the assignment statement.
```go
s := "abcdefgh"
n, m, char, chars := 2, 3, 'd', "cd"
// starting from n=2 characters in and m=3 in length;
fmt.Println(s[n-1 : n+m-1])
// starting from n characters in, up to the end of the string;
fmt.Println(s[n-1:])
// whole string minus last character;
fmt.Println(strings.TrimRight(s, string(s[len(s)-1])))
// starting from a known character char="d" within the string and of m length;
indx := strings.Index(s, string(char))
fmt.Println(s[indx : indx+m])
// starting from a known substring chars="cd" within the string and of m length. 
indx := strings.Index(s, string(chars))
fmt.Println(s[indx : indx+m])
```

