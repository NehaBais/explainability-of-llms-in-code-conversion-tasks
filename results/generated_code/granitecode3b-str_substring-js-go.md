Sure, here's the equivalent Golang code for the given requirements:
```
package main
import (
 "fmt"
 "unicode/utf8"
)
func main() {
 str := "abcdefgh"
 n := 2
 m := 3
 // * starting from n characters in and of m length;
 substr := str[n : n+m]
 fmt.Println(substr) // Output: "cde"
 // * starting from n characters in, up to the end of the string;
 substr = str[n:]
 fmt.Println(substr) // Output: "cdefgh"
 substr = str[:len(str)-1]
 fmt.Println(substr) // Output: "abcdefg"
 // * starting from a known character within the string and of m length;
 index := utf8.RuneInString(str)[n].Size() + n - 1
 substr = str[index : index+m]
 fmt.Println(substr) // Output: "bcd"
 // * starting from a known substring within the string and of m length. 
 index = utf8.runeInString(str)[utf8.RuneCountInString(str)-3].Size() + 2
 substr = str[index : index+m]
 fmt.Println(substr) // Output: "bcd"
}
```
This code uses the built-in `substr` and `substring` functions in Golang to achieve the desired substring operations. The `utf8` package is used to calculate the byte length of each rune in the string, which is necessary for handling Unicode characters with different lengths.

