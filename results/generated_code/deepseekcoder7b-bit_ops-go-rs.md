In Rust, the bitwise operations are available in std::ops crate. Here is your Golang code converted to Rust:

```rust
use std::fmt;
use std::convert::TryInto;

fn main() {
    let mut a = -460;
    let b = 6;
    bitwise(a, b);
}

fn bitwise<T: fmt::Debug + Copy + From<u16>, U: Copy>(mut a: T, b: U) 
where
    <U as Copy>::Target: fmt::Debug,
{
    println!("a: {:016b}", a.to_bits());
    println!("b: {:016b}", b.to_bits());
  
    let ua = a.to_bits();
    let ub = b.try_into().expect("Second operand overflows");
    
    // Bitwise logical operations
    println!("and: {:016b}", (ua & ub));
    println!("or:  {:016b}", (ua | ub));
    println!("xor: {:016b}", (ua ^ ub));
    
    // Bitwise NOT
    println!("not: {:016b}", (!ua).to_bits());
  
    if ub < 0 {
        eprintln!("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
        return;
    }
    
    // Logical shifts  (unsigned left operand)
    println!("shl: {:016b}", (ua << ub));
    println!("shr: {:016b}", (ua >> ub));
  
    // Arithmetic shifts (signed left operand)
    let a = a.to_bits();
    println!("las: {:016b}", (a as i32 << ub as usize)); 
    println!("ras: {:016b}", (a >> ub as usize));
  
    // Rotations
    println!("rol: {:016b}", ((ua << ub) | (ua >> (32 - ub))));
    println!("ror: {:016b}", ((ua >> ub) | (ua << (32 - ub)))); 
}
```
Note that Rust doesn't have a built-in way to perform left and right rotates, so the above code uses bitwise shifts to achieve this. Also note that the `to_bits` method will panic if T is not exactly 16 bits in size (u16 or i16), which can be fixed by adding additional type bounds for different sized types.

