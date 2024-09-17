Sure, here's the equivalent Golang code:
```
package main
import (
 "fmt"
 "bufio"
 "os"
)
func main() {
 reader := bufio.NewReader(os.Stdin)
 aStr, _ := reader.ReadString('\n')
 bStr, _ := reader.ReadString('\n')
 a, _ := fmt.Sscanf(aStr, "%d", &a)
 b, _ := fmt.Sscanf(bStr, "%d", &b)
 if a < b {
 fmt.Println(a, "is less than ", b)
 } else if a == b {
 fmt.Println(a, "equals ", b)
 } else {
 fmt.Println(a, "is greater than ", b)
 }
}
```
Note that in Golang, we can use `bufio` to read input from the user and avoid manually parsing each line as a string before converting it to an integer. We also use `fmt.Sscanf()` to parse each string into an integer variable.

