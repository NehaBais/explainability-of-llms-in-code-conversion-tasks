Here is the converted code from Python to Rust:
```
fn main() {
 let width = 8;
 let a = 27;
 let b = 125;
 let mask = (1 << width) - 1;
 
 println!("    AND:     0b{:0width$b} 
 & 0b{:0width$b} 
 = 0b{:0width$b}
", a, b, a & b & mask, width);
 
 println!("    OR:      0b{:0width$b} 
 | 0b{:0width$b} 
 = 0b{:0width$b}
", a, b, a | b & mask, width);
 
 println!("    XOR:     0b{:0width$b} 
 ^ 0b{:0width$b} 
 = 0b{:0width$b}
", a, b, a ^ b & mask, width);
 
 println!("    NOT:   ~ 0b{:0width$b} 
 = 0b{:0width$b}
", a, ~(a) & mask, width);
 
 println!("    SHIFTS
    
      RIGHT:   0b{:0width$b} >> 1
 = 0b{:0width$b}      
      LEFT:    0b{:0width$b} << 1
 = 0b{:0width$b}      
", a, a >> 1 & mask, width);
 
 let n = 4;
 println!("    ROTATIONS
    
      RIGHT:   rotr({}, 0b{:0{}b}, {})
 =       0b{:0{}b}      
   rotl({}, 0b{:0{}b}, {})
 =       0b{:0{}b}    
", width, a, n, width, width, width, width, rotr(width, a, n), width, a, n, width, width);
 
 let width = 8;
 let a = 27;
 let mask = (1 << width) - 1;
 let aa = a | (1 << (width - 1)); // a with top bit set
 
 for n in 0..width {
 println!("    asr({}:{}, {:0{}b}, {})
 =      0b{:0{}b}      
", width, a, n, width, width, asr(width, a, n), width, aa, n, width, width);
 }
}
fn rotr(width: usize, a: u32, n: usize) -> u32 {
 if n < 0 {
 return rotl(width, a, -n);
 } else if n == 0 {
 return a;
 }
 
 let shift = n % width;
 let rotate = width - shift;
 
 (a >> shift) | ((a << rotate) & mask)
}
fn rotl(width: usize, a: u32, n: usize) -> u32 {
 if n < 0 {
 return rotr(width, a, -n);
 } else if n == 0 {
 return a;
 }
 
 let shift = n % width;
 let rotate = width - shift;
 
 ((a << shift) & mask) | (a >> rotate)
}
fn asr(width: usize, a: u32, n: usize) -> u32 {
 if a & (1 << (width - 1)) != 0 {
 return (a as i32).wrapping_shr(n) as u32;
 } else {
 return a >> n;
 }
}
```

