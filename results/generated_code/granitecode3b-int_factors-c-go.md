Sure! Here's the equivalent Golang code for the `factor()` function:
```
func factor(num int, f *Factors) *Factors {
 f.list = append(f.list, num)
 if len(f.list) > cap(f.list)/2 {
  f.list = make([]int, 0, len(f.list)*2)
 }
 for i := 0; i < len(f.list); i++ {
  dvsr := f.list[i]
  if num%dvsr == 0 {
   f.list = append(f.list, num/dvsr)
  }
 }
 sort.Ints(f.list)
 return f
}
```
This function takes an integer `num` and a pointer to a `Factors` struct `f`. It first appends the input `num` to the `f.list` slice. Then, it checks if the current length of `f.list` is greater than half of its capacity. If so, it doubles the capacity of `f.list` using the built-in `make()` function.
Next, it iterates over each element in `f.list` and checks if the current element divides `num` evenly. If it does, it appends the result of dividing `num` by the current element to the end of `f.list`.
Finally, it sorts the `f.list` slice using the built-in `sort.Ints()` function and returns the updated `Factors` struct pointer.

