Here's the equivalent code in Golang:
```
import "fmt"
import "math"
func factor(n int) []int {
 var factors []int
 for x := 1; x <= int(math.Sqrt(float64(n))); x++ {
 if n%x == 0 {
 factors = append(factors, x)
 factors = append(factors, n/x)
 }
 }
 if x*x == n {
 factors = append(factors, x)
 }
 for i, j := 0, len(factors)-1; i < j; i, j = i+1, j-1 {
 factors[i], factors[j] = factors[j], factors[i]
 }
 return factors
}
func main() {
 fmt.Println("45: factors:", factor(45))
 fmt.Println("53: factors:", factor(53))
 fmt.Println("64: factors:", factor(64))
}
```
This code uses a loop to iterate over all possible factors of the input number `n`. It then checks if each factor is also a divisor of `n`, and adds it to the list of factors. If the input number is a perfect square, it adds the square root as a factor as well. Finally, it swaps the first half of the list with the second half to ensure that all factors are listed in ascending order.

