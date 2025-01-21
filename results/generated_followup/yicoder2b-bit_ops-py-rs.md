Sure, I can help with that. The error message is saying that "variable does not need to be mutable". This means there's no mutable declaration for width or a in the print format. Without them, Rust will try to perform operations on variables that are not yet declared as mutable, thus causing errors.

The corrected code would look like this:

```rust
fn bitwise_built_ins(width: u8, a: i32, b: i32) {
    let mask = (1 << width) - 1;
    println!(
        "    AND:     0b{:b}
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
    "
    );
}

fn main() {
    bitwise_built_ins(8, 27, 125);
    let mut width = 1;
    let mut a = 27;
    let b = 125;
    bitwise_built_ins(width, a, b);
}
```

The corrected code contains the variables that need to be mutable in their print format.
