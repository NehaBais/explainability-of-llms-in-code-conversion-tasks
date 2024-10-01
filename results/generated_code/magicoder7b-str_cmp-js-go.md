 In Golang, you can achieve the same comparison results using functions like strings.Compare(s1 string, s2 string), where s1 and s2 are your input strings. Here's a Golang version of your JavaScript code:

```go
package main
import "strings"

func main() {
	fmt.Println(
	    strings.Compare("abcd", "abcd") == 0, // true
	    strings.Compare("abcd", "abcd") == 0 && strings.Compare("abcd", "abcd") == 0, // true
	    strings.Compare("123", "123") == 0, // true
	    strings.Compare("123", "123") != 0, // false
	    strings.Compare("ABCD", "abcd") == 0, // false
	    strings.Compare("ABCD", "abcd") != 0, // true
	    strings.Compare("123", "123") != 0, // false
	    strings.Compare("123", "123") != 0, // true
	    strings.Compare("abcd", "dcba") > 0, // true
	    strings.Compare("abcd", "dcba") < 0, // false
	    strings.ToLower(strings.Compare("ABCD", "abcd")) == 0, // true (case insensitive)
	)
}
```
Just like JavaScript, Golang compares two strings lexically and can perform case sensitive and case insensitive comparisons. Note that in Golang, strings are always compared as runes, not bytes, so numeric strings can be compared to alphabetic ones.
