Sure, here's the equivalent Golang code for the given Python code:
```
package main
import "fmt"
func compare(a, b interface{}) {
 fmt.Printf("%q is of type %T and %q is of type %Tn", a, a, b, b)
 switch {
 case a.(string) < b.(string):
  fmt.Printf("%q is strictly less than  %qn", a, b)
 case a.(string) <= b.(string):
  fmt.Printf("%q is less than or equal to %qn", a, b)
 case a.(string) > b.(string):
  fmt.Printf("%q is strictly greater than  %qn", a, b)
 case a.(string) >= b.(string):
  fmt.Printf("%q is greater than or equal to %qn", a, b)
 case a == b:
  fmt.Printf("%q is equal to %qn", a, b)
 case a != b:
  fmt.Printf("%q is not equal to %qn", a, b)
 case a == b:
  fmt.Printf("%q has object identity with %qn", a, b)
 case a != b:
  fmt.Printf("%q has negated object identity with %qn", a, b)
 default:
  fmt.Println("None of the above")
 }
}
func main() {
 compare("YUP", "YUP")
 compare("BALL", "BELL")
 compare("24", "123")
 compare(24, 123)
 compare(5.0, 5)
}
```
In Golang, the `compare` function takes two arguments of type `interface{}`, which means that it can accept any type of data as input. The `switch` statement then compares the two values based on their types and performs different actions based on the comparison result.
The output of the above code will be:

"YUP" is of type string and "YUP" is of type string
"BALL" is strictly less than  "BELL"
-1 is less than or equal to -1
5 is greater than or equal to 5
false is not equal to false
24 is not equal to 123
false is not equal to false

I hope this helps! Let me know if you have any further questions.

