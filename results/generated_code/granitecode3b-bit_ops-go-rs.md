Here's the equivalent Rust code for the given Golang code:
```
fn bitwise(a: i16, b: i16) {
 println!("a:   {:b}
", a);
 println!("b:   {:b}
", b);
 
 // Bitwise logical operations
 println!("and: {:b}
", a & b);
 println!("or:  {:b}
", a | b);
 println!("xor: {:b}
", a ^ b);
 println!("not: {:b}
", !a);
 
 if b < 0 {
 println!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
 return;
 }
 let ua = a as u16;
 let ub = b as u32;
 
 // Logical shifts (unsigned left operand)
 println!("shl: {:b}
", ua << ub);
 println!("shr: {:b}
", ua >> ub);
 
 // Arithmetic shifts (signed left operand)
 println!("las: {:b}
", a << ub);
 println!("ras: {:b}
", a >> ub);
 
 // Rotations
 println!("rol: {:b}
", (a as u32) << ub | (a as u32) >> (16 - ub));
 println!("ror: {:b}
", (a as u32) >> ub | (a as u32) << (16 - ub));
}
fn main() {
 let a = -460;
 let b = 6;
 bitwise(a, b);
}
```
Note that in Rust, unsigned left shift (`<<`) and right shift (`>>`) operators are used for arithmetic shifts, which means that the sign bit is preserved. Signed left shift (`<<`) preserves the sign bit of the right-hand side operand, while signed right shift (`>>`) discards the sign bit of the right-hand side operand. In Golang, these operations are performed on unsigned integer operands by default, so there's no need to explicitly handle the sign bit in Rust.

