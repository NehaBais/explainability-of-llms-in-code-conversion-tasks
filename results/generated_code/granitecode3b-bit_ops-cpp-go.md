Sure! Here's the equivalent Golang code:
```
func bitwise(a, b int) {
 fmt.Println("a and b:", a&b)
 fmt.Println("a or b: ", a|b)
 fmt.Println("a xor b:", a^b)
 fmt.Println("not a:   ", ^a)

 // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
 // is negative, or is greater or equal to the number of bits in the integer being shifted.
 fmt.Println("a shl b:", a<<b)
 fmt.Println("a shr b:", a>>b)

 ua := uint(a)
 fmt.Println("a lsr b:", ua>>b)

 // there are no rotation operators in Golang, but as of Go1.19 there is a standard-library rotate function.
 // The rotate function works for all rotation amounts, but the integer being rotated must always be an
 // unsigned integer.
 fmt.Println("a rol b:", uint(math.RotateLeft(int64(a), int64(b))))
 fmt.Println("a ror b:", uint(math.RotateRight(int64(a), int64(b))))
}
``` 
The only difference is that Golang has a different unsigned integer type (`uint`) and the bitwise shift operators are represented by `<<` (left) and `>>` (right). Additionally, Golang's `math.RotateLeft()` and `math.RotateRight()` functions can be used to perform logical left and right rotates respectively.

