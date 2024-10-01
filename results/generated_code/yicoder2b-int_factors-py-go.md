The equivalent code in Golang would be as follows:
```go
package main
import "fmt"
func isqrt(n int64) int {
    return int(sqrt(float64(n)))
}
func factor(n int) []int{
    factors1, factors2 := make([]int, 0), make([]int, 0)
    for x := 1; x <= isqrt(int64(n)); x++ {
        if n % x == 0 {
            factors1 = append(factors1, x)
            factors2 = append(factors2, n / x)
        }
    }
    for _, x := range factors2[len(factors2)/2:] {
        factors1 = append(factors1, x)
    }
    return factors1
}
func main(){
    fmt.Printf("%v: %s\n", 45, factor(45))
    fmt.Printf("%v: %s\n", 53, factor(53))
    fmt.Printf("%v: %s\n", 64, factor(64))
}
```
Please note that because of differences in the Golang's handling for floating-point numbers and Python's isqrt function, the result may not be identical to the original Python code.
