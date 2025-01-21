package main
import  (
    "fmt"
    "math"
    "testing/assert"
    "sort"
)
func main()  {
   assert.Equal(nil, vec![1, 2, 4, 5, 10, 10, 20, 25, 50, 100], factor(100)); 
   assert.Equal(nil, vec![1, 101], factor(101));
}
func factor(num int)  []int  {
   var factors  []int
   for i := 1; i <= int(math.Sqrt(float64(num))); i++  {
      if num  % i  == 0  {
         factors = append(factors, i)
         factors = append(factors, num/i)
       }
    }
   sort.Ints(factors) 
   return factors
}