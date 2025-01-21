The error mentioned is due to incorrect indentation or syntax errors while writing statements outside function bodies in Golang. These errors typically occur when statement like '{', '[', '(' are not properly closed by a matching '}', ']', or ')'. 

1. The first line after the function definition should be an empty line or a comment which explains the purpose of this particular function.
2. After the first line, you should leave at least one line of blank space or comment after every statement.
3. The next lines must be inside the function body, not after it.
4. In Golang, the println function is used to output variables and values to the console. Inside this function parentheses are required to enclose the variable that you want to display as an argument. Replace "print" with "println" in these lines:
```golang
package main
import "fmt"
var s = "abcdefgh"
n, m, char, chars = 2, 3, 'd', "cd"
fmt.Println(s[n-1 : n+m-1])
fmt.Println(s[n-1:])
fmt.Println(s[:len(s)-1])
fmt.Println(strings.IndexFunc("abcdefgh", func(r rune) bool { return r == 'd' }))
fmt.Println(strings.IndexFunc("abcdefgh", func(r rune) bool { return strings.HasPrefix(string([]byte{r}), string([]byte{chars[0]})) }))
fmt.Println(s[index : index+m])
```
This should solve the error and print the desired output for given inputs in Golang.
