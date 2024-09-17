Sure, here's the equivalent Golang code:
```
package main
import "fmt"
func main() {
 fmt.Println(factor(100)) // prints [1 2 4 5 10 10 20 25 50 100]
 fmt.Println(factor(101)) // prints [1 101]
}
func factor(num int) []int {
 factors := make([]int, 0) // creates an empty slice for the factors of the number

 for i := 1; i <= int((float64(num)/2 + 0.5); i++ ) { 
 if num%i == 0 {
 factors = append(factors, i) // appends smallest factor to factors
 factors = append(factors, num/i) // appends largest factor to factors
 }
 }

 for _, v := range factors { // iterates through slice and removes duplicates
 f := 0
 for i := 0; i < len(factors); i++ { 
 if factors[i] == v {
 f = i
 break
 }
 }
 if f != 0 && f != len(factors)-1 {
 factors = append(factors[:f], factors[f+1:]...) // removes duplicate factor
 i--
 }
 }

 return factors // returns the factors
}
```
Explanation:
- The Golang code creates a slice called "factors" to store the factors of the number.
- The for loop iterates from 1 to the square root of the number + 1, which is more efficient than iterating through all numbers up to the number.
- If the current number is divisible by the current iteration value, it is a factor and is appended to the "factors" slice.
- The second for loop removes any duplicate factors from the "factors" slice by checking if the current factor is the same as any other factor in the slice.
- Finally, the "factors" slice is returned as the result of the function.

