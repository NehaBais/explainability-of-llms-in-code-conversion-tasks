### Solution - Golang
```go
package main
import "math"
func isqrt(x int) int { return int(math.Sqrt(float64(x))) }
func factor(n int) []int {
	var factors1, factors2 []int
	for x := 1; x < isqrt(n); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	x += 1
	if x*x == n {
		factors1 = append(factors1, x)
	}
	for i := len(factors2) - 1; i >= 0; i-- {
		factors1 = append(factors1, factors2[i])
	}
	return factors1
}
func main() {
	nums := []int{45, 53, 64}
	for _, n := range nums {
		fmt.Printf("%d: %v\n", n, factor(n))
	}
}
```
