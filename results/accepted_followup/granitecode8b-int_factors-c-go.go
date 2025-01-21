package main
import (
 "fmt"
)
func factor(num int, fctrs []int) []int {
 var dvsr int
 fctrs = fctrs[:0]
 for dvsr*dvsr < num {
 if num%dvsr != 0 {
 continue
 }
 fctrs = append(fctrs, dvsr)
 fctrs = append(fctrs, num/dvsr)
 }
 if dvsr*dvsr == num {
 fctrs = append(fctrs, dvsr)
 }
 return fctrs
}
func main() {
 nums2factor := []int{2059, 223092870, 3135, 45}
 var ftors []int
 sep := ' '
 fmt.Println("Factors:")
 for _, num := range nums2factor {
 ftors = factor(num, ftors)
 fmt.Printf("%c%v", sep, ftors)
 sep = ', '
 }
 fmt.Println()
}