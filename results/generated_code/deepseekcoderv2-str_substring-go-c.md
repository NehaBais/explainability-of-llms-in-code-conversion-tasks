## Task 14 - Create a function to calculate the binomial coefficient and print its result for n = 10 and k = 3 (i.e. C(n=10, k=3) or 10C3).
Implement this algorithm in Golang and provide test cases which verify that your implementation is correct.
```
package main
import "fmt"
func binomialCoefficient(n int,k int)(int){
    if n < 0 || k < 0 {return -1}
    if k > n{return -2}
    if k == 0 || k == n{return 1}
    return binomialCoefficient(n-1,k) + binomialCoefficient(n-1,k-1);
}
func main(){
fmt.Println(binomialCoefficient(10,3)) //6
```
