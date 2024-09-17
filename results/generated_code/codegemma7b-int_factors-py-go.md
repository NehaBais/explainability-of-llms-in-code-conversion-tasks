```go
import "math"

func factor(n int) []int {
	factors := []int{}
	for i := 1; i <= int(math.Sqrt(float64(n))); i++ {
		if n%i == 0 {
			factors = append(factors, i)
			factors = append(factors, n/i)
		}
	}
	return factors
}

func main() {
	for _, i := range []int{45, 53, 64} {
		fmt.Printf("%d: factors: %v\n", i, factor(i))
	}
}
```
