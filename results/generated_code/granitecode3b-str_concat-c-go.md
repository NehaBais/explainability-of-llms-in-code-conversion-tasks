Sure! Here's the equivalent Golang code:
```
package main
import (
 "fmt"
)
func main() {
 s := "hello"
 s2 := s + " literal"
 fmt.Println(s, s2)
}
```
The output of this code will be: `hello hello literal`
This is because in Golang, the `+` operator can concatenate strings directly. The `sconcat` function allocates a new string with the concatenated value using `malloc`, `strcpy`, and `strcat`. Then it returns the pointer to the new string. Finally, the `puts` function prints the contents of the variable `s2`.

