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