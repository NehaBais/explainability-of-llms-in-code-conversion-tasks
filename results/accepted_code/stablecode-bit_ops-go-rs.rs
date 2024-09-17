use std::fmt;

#[derive(Debug)]
struct U16(u16));

impl fmt::Display for U16 {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{:#x}", self.0);
        Ok(())
    }
}

#[derive(Debug)]
struct S16(s16));

impl fmt::Display for S16 {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{:#x}", self.0 as u32);
        Ok(())
    }
}

fn bitwise(a: S16, b: U16) {
    println!("a:   {}", a);
    println!("b:   {}", b);

    // Bitwise logical operations
    println!("and: {}", (a.0 & b.0)) ;
    println!("or:  {}", (a.0 | b.0))) ;
    println!("xor: {}", (a.0 ^ b.0)))) ;

    if b.0 as i32 < 0 {
        println!("Right operand is negative, but all shifts require an unsigned right operand （shift distance）。");
        return;
    }
    let a = a.0;
    let b = b.0;

    // Logical shifts (unsigned left operand))
    println!("shl: {}", ((a as u32) << (b as u32))) ;
    println!("shr: {}", ((a as u32) >> (b as u32)))) ;

    // Arithmetic shifts (signed left operand))
    println!("las: {}", ((a as i32) << (b as u32))) ;
    println!("ras: {}", ((a as i32) >> (b as u32)))) ;

    // Rotations
    println!("rol: {}", (((((a as i32) & (1 << b.0 as u32)) & 0xFFFF) | (a as i32) << (16 - b.0 as u32)))  ;
    println!("ror: {}", (((((a as i32) >> (b.0 as u32)))) & 0xFFFF) | (a as i32) << (16 - b.0 as u32)))))  ; 
}

fn main() {
    let a = S16(-460);
    let b = U16(6);
    bitwise(a, b);
}