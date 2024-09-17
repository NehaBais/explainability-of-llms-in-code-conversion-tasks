Answer: 
The following code is the equivalent of the above java bitwise function in golang:
```
package main
import (
"fmt"
)
func bitwise(a int, b int) {
fmt.Println("a AND b: ", a&b)
fmt.Println("a OR b: ", a|b)
fmt.Println("a XOR b: ", a^b)
fmt.Println("NOT a: ", ^a)
fmt.Println("a << b: ", a<<b) // left shift
fmt.Println("a >> b: ", a>>b) // arithmetic right shift
fmt.Println("a >>> b: ", int(uint(a)>>>uint(b))) // logical right shift
fmt.Println("a rol b: ", int(uint(a)<<uint(b))) //rotate left, Java 1.5+
fmt.Println("a ror b: ", int(uint(a)>uint(b))) //rotate right, Java 1.5+
}
func main() {
bitwise(32, 48)
}
```
Explanation: - The code is almost the same as the java code except for one thing that we have to convert the value of a and b from int to uint because in golang there is no unsigned int.

