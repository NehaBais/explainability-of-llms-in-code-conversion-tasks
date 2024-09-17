In Golang, you can use the built-in math package for sqrt function. Here is how your Python code would look translated into GoLang:

```go
package main
  
import (
    "fmt"
    "math"
)
 
func factor(n int) []int {
    var factors1, factors2 []int
    for x := 1; float64(x) <= math.Sqrt(float64(n)); x++ {
        if n % x == 0 {
            factors1 = append(factors1, x)
            factors2 = append(factors2, n/x)
        }
    }
    
    if (math.Pow(float64((factors2[len(factors2)-1])), 2)) == float64(n){
       factors1=append(factors1,factors2[len(factors2)-1])
    }
  
    factors1 = append(factors1, reverseFactors(factors2)...)
    
    return factors1
} 

func reverseFactors(input []int) []int {
    if len(input) == 0 {
        return input
    }
    return append(reverseFactors(input[1:]), input[0])
}
  
func main() {
    for _, i := range []int{45, 53, 64} {
        fmt.Printf("%d: factors: %v\n", i, factor(i))
    }
}
```
This code calculates the factors of a number by iterating from 1 to square root of n and if `n` is divisible by current value then it adds both values to `factors1` and `factors2`. For each iteration, it checks whether `x^2` equals to given integer `n` i.e., a perfect square or not. If yes, the iterated value will be appended to factors1. Finally, we are adding all elements of `factors2` in reverse order (using recursive function call) at the end of `factors1` to obtain the complete list of factors for given integer `n`.

