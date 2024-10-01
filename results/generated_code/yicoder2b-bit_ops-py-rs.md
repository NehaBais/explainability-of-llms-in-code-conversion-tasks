Sure, the equivalent Rust code for your Python script would look something like this:

```rust
fn bitwise_built_ins(mut width: u8, mut a: i32, b: i32) {
    let mask = (1 << width) - 1;
    println!("    AND:     0b{:b}
               & 0b{:b}
               = 0b{:b}
               
    OR:      0b{:b} 
               | 0b{:b} 
               = 0b{:b}
               
    XOR:     0b{:b} 
               ^ 0b{:b} 
               = 0b{:b}
               
    NOT:   ~ 0b{:b}
               = 0b{:b}
               
    SHIFTS
            
      RIGHT:   (a >> 1) & mask.into(),
              == 0b{:b}
              
      LEFT:    a << 1 & mask.into(),
              == 0b{:b}
           
      ROTATIONS
               rotr({width}, a, 1)
               =       0b{:b}
               rotr({width}, a, 2)
               =       0b{:b}
    
                rotl({width}, a, 1)
                =       0b{:b}
                rotl({width}, a, 2)
                =       0b{:b}
            
          SIGN-EXTENDING ARITHMETIC SHIFT RIGHT
               asr(width, a, 1)
               =      0b{:b}
               asr(width, aa, 1)
               =      0b{:b}
               asr(width, a, 2)
               =      0b{:b}
    ");
}

fn main() {
    bitwise_built_ins(8, 27, 125);
    let mut width = 1;
    let mut a = 27;
    let b = 125;
    bitwise_built_ins(width, a, b);
}
```
Please note that:
- `0b` is used to represent the binary form of a number.
- `&mask.into()` is equivalent to `a & mask` in Python.
- Rust uses `u8`, `i32` etc. as the types of width and numbers respectively.
- You can't do operations on signed integers (`asr`) with different bit widths. For instance, you can't take an arithmetic right shift of a 16-bit number by a 5-bit index. Therefore, this example uses only unsigned types in the `bitwise_built_ins` function.
- The print format is not exactly the same as Python's `print()`. You need to convert i32 values into u8 first because of their different range.
