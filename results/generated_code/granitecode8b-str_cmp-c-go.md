Here is the equivalent code in Golang:
```
package main
import "fmt"
func main() {
 fmt.Println("	eq , ne , gt , lt , ge , le")
 compare("ball", "bell")
 compare("YUP", "yep")
 comparecase("ball", "BELL")
}
func compare(a, b string) {
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %sn",
  a,
  a == b, a != b, a > b, a < b, a >= b, a <= b,
  b,
 )
}
func comparecase(a, b string) {
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s ignoring casen",
  a,
  strings.EqualFold(a, b), !strings.EqualFold(a, b), strings.Compare(b, a) < 0, strings.Compare(a, b) > 0, strings.Compare(b, a) <= 0, strings.Compare(a, b) >= 0,
  b,
 )
}
```
The `compare` function compares two strings for exact equality, inequality, greater than, less than, greater than or equal to, and less than or equal to using the `==`, `!=`, `>`, `<`, `>=`, and `<=` operators respectively. The `comparecase` function is similar, but it uses the `strings.EqualFold` function to perform a case insensitive comparison.
The Golang `string` type is immutable, so there are no pointers involved in this code. However, the `compare` and `comparecase` functions can be modified to use pointers if needed.

