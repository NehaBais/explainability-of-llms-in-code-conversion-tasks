 Rust doesn't have bitwise operations like Golang so we must use the `num` crate that provides traits for types to allow common arithmetic and logic operations. Here is a translation of your code in Rust:

```rust
extern crate num; 
use num::NumOps;

fn bitwise(a: i16, b: u32) {
    println!("{:b} {:b}", a as u16, b);

    // Bitwise logical operations
    println!("and: {:b}", (a & b) as u16);
    println!("or:  {:b}", (a | b) as u16);
    println!("xor: {:b}", (a ^ b) as u16);
    println!("not: {:b}", !(a as u16));
    
    if b > 31 {
        println!("Right operand is out of range, but all shifts require an unsigned right operand (shift distance).");
        return;
    }
    let ua = a as u32;
    let ub = b;

    // Logical shifts (unsigned left operand)
    println!("shl: {:b}", (ua << ub) as u16);
    println!("shr: {:b}", (ua >> ub) as u16);

    // Arithmetic shifts (signed left operand)
    println!("las: {:b}", a << ub);
    println!("ras: {:b}", a >> ub);

    // Rotations
    let c = ((a << b) | ((a.abs() as u16) >> (32 - b))) as i16; 
    println!("rol: {:b}", c);
    let d = ((a >> b) | ((a & !(0xffff_u16)) << (32 - b))) as i16;
    println!("ror: {:b}", d);
}

fn main() {
    let a = -460i16;
    let b = 6u32;
    bitwise(a, b);
}
```
Please note that in Rust, the `<<` operator for signed integers is an arithmetic shift and to get the unsigned left shift we must first convert the integer to its unsigned counterpart. Also, Rust uses 1s complement for negative numbers so we use `.abs()` method to get absolute value. We also have to take care of bit length and size limitations while performing operations on the bits. The `num` crate has methods that allow us to perform common arithmetic and logic operations.
