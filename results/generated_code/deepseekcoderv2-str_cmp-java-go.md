## Solution - Golang
```
package main
import "fmt"
func compare(A, B string) {
if strings.Compare(A, B) == 0 {
fmt.Printf("'%s' and '%s' are lexically equal.", A, B)
} else {
fmt.Printf("'%s' and '%s' are not lexically equal.", A, B)
}
fmt.Println()
if strings.EqualFold(A, B) {
fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.", A, B)
} else {
fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.", A, B)
}
fmt.Println()
if strings.Compare(A, B) < 0 {
fmt.Printf("'%s' is lexically before '%s'.
", A, B)
} else if strings.Compare(A, B) > 0 {
fmt.Printf("'%s' is lexically after '%s'.
", A, B)
}
if strings.Compare(A, B) >= 0 {
fmt.Printf("'%s' is not lexically before '%s'.
", A, B)
}
if strings.Compare(A, B) <= 0 {
fmt.Printf("'%s' is not lexically after '%s'.
", A, B)
}
fmt.Printf("The lexical relationship is: %d
", strings.Compare(A, B))
fmt.Printf("The case-insensitive lexical relationship is: %d
", strings.Compare(strings.ToLower(A), strings.ToLower(B)))
}
func main() {
compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
}
```
