Here's the converted code from Rust to Golang:
```go
package main
import (
 "fmt"
 "os"
 "strconv"
)
func main() {
 args := os.Args[1:]
 a, err := strconv.Atoi(args[0])
 if err != nil {
 panic(err)
 }
 b, err := strconv.Atoi(args[1])
 if err != nil {
 panic(err)
 }

 fmt.Printf("sum:              %dnndifference:       %dnnproduct:          %dnninteger quotient: %dnnremainder:        %dnnexponentiation:   %d", a+b, a-b, a*b, a/b, a%b, int(math.Pow(float64(a), float64(b))))
}
```
Note that the remainder in Golang is calculated using the modulo operator (%) instead of the division operator (/:). Also, the quotient in Golang rounds towards zero by default, so there's no need to specify it explicitly.

