```rust
fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}

fn bitwise_built_ins(width: usize, a: u32, b: u32) {
    let mask = (1 << width) - 1;
    println!("AND:     0b{:0width$b} 
           & 0b{:0width$b} 
           = 0b{:0width$b}",
           a,
           b,
           (a & b) & mask);
    println!("OR:      0b{:0width$b} 
           | 0b{:0width$b} 
           = 0b{:0width$b}",
           a,
           b,
           (a | b) & mask);
    println!("XOR:     0b{:0width$b} 
           ^ 0b{:0width$b} 
           = 0b{:0width$b}",
           a,
           b,
           (a ^ b) & mask);
    println!("NOT:   ~ 0b{:0width$b} 
           = 0b{:0width$b}",
           a,
           (~a) & mask);
    
    let mut a_masked = a & mask;
    for i in 1..=width {
        let right_shift = (a >> i) & mask;
        println!("RIGHT:   rotr({}, 0b{:0width$b}, {})",
                   width, 
                   a,
                   i,
                   right_shift);
    }
    
    for i in 1..=width {
        let left_shift = (a << i) & mask;
        println!("LEFT:    rotl({}, 0b{:0width$b}, {})",
                   width, 
                   a,
                   i,
                   left_shift);
    }
    
    let mut aa = a | mask;
    for i in 1..=width {
        let right_arith_shift_right = (aa >> i) & mask;
        println!("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT: asr({}, 0b{:0width$b}, {})",
                   width, 
                   a,
                   i,
                   right_arith_shift_right);
    }
}

fn rotr(width: usize, a: u32, n: u32) -> u32 {
    if n < 0 {
        return rotl(width, a, -n);
    } else if n == 0 {
        return a;
    } else {
        let mask = (1 << width) - 1;
        a &= mask;
        a <<= n % width;
        return ((a >> n)    // top moved down
                | ((a & ((1 << width) - 1)))); // bottom moved up
    }
}

fn rotl(width: usize, a: u32, n: u32) -> u32 {
    if n < 0 {
        return rotr(width, a, -n);
    } else if n == 0 {
        return a;
    } else {
        let mask = (1 << width) - 1;
        a &= mask;
        a >>= n % width;
        return ((a & ((1 << width) - 1))) // bottom moved up
                | (a << (width - n));
    }
}

fn asr(width: usize, a: u32, n: u32) -> u32 {
    let mut a_masked = a & mask;
    for i in 1..=n {
        let right_arith_shift_right = (a_masked >> i) & mask;
        println!("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT: asr({}, 0b{:0width$b}, {})",
                   width, 
                   a,
                   i,
                   right_arith_shift_right);
    }
}
```
