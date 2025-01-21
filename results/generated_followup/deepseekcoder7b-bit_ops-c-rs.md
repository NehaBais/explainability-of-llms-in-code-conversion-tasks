The errors are due to mismatched types and lack of bitwise implementations for u32 types. `println!("{:?}", expression)` is used in Rust to print any type of data including integers, floats, characters etc., it's a wrapper around formatting and requires an implementation for the given type.

The fix can be making all the arguments as i32 since bitwise operations are implemented only on i32 and u32 (unsigned 32-bit integer) types in Rust. The notations `~`, `<<`, `>>` are also used for bitwise operations but they are not standardized like `&`, `|`, `^` etc., so we can't use them to do the bitwise operations with u32 and i32 types.

Here is the corrected code:
```rust
fn main() {
    let a:i32 = 5; // For instance
    let b:u32 = 6; 
    
    println riu("a and b: {}", a & b as i32);
    println riu("a or b: {}", a | b as i32);
    println riu("a xor b: {}", a ^ b as i32);
}
``` 
Note that `as i32` is used to cast u32 to i32 before performing bitwise operations. The left shift (<<) and right shift (>>) are not applicable for unsigned integers in Rust, therefore they were omitted here. If these operations would have been needed on an array of bits like struct BitVec from the rustc-std-workspace crate, then it could be done by using bitwise operations directly or through a conversion to u32 and back again.

