Here's the Golang code that meets the requirements:
```
package main
import "fmt"
func main() {
 s := "abcdefgh"
 n, m, char, chars := 2, 3, "d", "cd"
 // starting from n=2 characters in and m=3 in length;
 fmt.Println(s[n-1 : n+m-1])
 // starting from n characters in, up to the end of the string;
 fmt.Println(s[n-1:])
 // whole string minus last character;
 fmt.Println(s[:len(s)-1])
 // starting from a known character char="d" within the string and of m length;
 indx := strings.Index(s, char)
 fmt.Println(s[indx : indx+m])
 // starting from a known substring chars="cd" within the string and of m length.
 indx = strings.Index(s, chars)
 fmt.Println(s[indx : indx+m])
}
```
Note that I've used the `strings` package to find the index of the given character or substring in the string. This is necessary because Golang doesn't have a built-in function to find the index of a character in a string like Python does. The `index()` method on strings in Python returns the index of the first occurrence of the given character or substring, which is what we need for this task.

