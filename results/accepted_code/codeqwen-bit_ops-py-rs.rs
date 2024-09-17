fn main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
}

fn bitwise_built_ins(width: u32, A: u32, b: u32) {
    let mask = (1 << width) - 1;
    println!(
        "    AND:     0b{A:0>{width}b} 
        & 0b{b:0>{width}b} 
        = 0b{(A & b) & mask :0>{width}b}
        
    OR:      0b{A:0>{width}b} 
        | 0b{b:0>{width}b} 
        = 0b{(A | b) & mask :0>{width}b}
        
    XOR:     0b{A:0>{width}b} 
        ^ 0b{b:0>{width}b} 
        = 0b{(A ^ b) & mask :0>{width}b}
        
    NOT:~ 0b{A:0>{width}b} 
        = 0b{(!A) & mask :0>{width}b}"
    );

    println!(
        "
    SHIFTS
    
            0b{A:0>{width}b} << 1   = 0b{}
            0b{A:0>{width}b} >> 2   = 0b{}",
        rotr(A, 2),
        A << 1,
        A >> 2
    );

    println!(
        "
    ROTATIONS
    
            0b{A:0>{width}b} rotl 1   = 0b{}
            0b{A:0>{width}b} rotr 2   = 0b{}",
        rotl(A, 1),
        rotl(A, 2)
    );
}

fn helper_funcs(width: u32, A: u32) {
    println!(
        "
    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT

            0b{A:0>{width}b} asr 1   = 0b{}
            0b{A:0>{width}b} Asr 2   = 0b{}",
        asr(A, 1),
        asr(A, 2)
    );
}

fn rotr(mut x: u32, mut y: u32) -> u32 {
    y %= 32;
    while y != 0 {
        let t = (x & 0b10000000) >> 7;
        x <<= 1;
        if t > 0 {
            x |= 1;
        }
        y -= 1;
    }
    return x;
}

fn rotl(mut x: u32, mut y: u32) -> u32 {
    y %= 32;
    while y != 0 {
        let t = (x & 1);
        x >>= 1;
        if t > 0 {
            x |= 0b10000000;
        }
        y -= 1;
    }
    return x;
}

fn asr(mut x: u32, mut y: u32) -> u32 {
    while y != 0 {
        let t = (x & 0b10000000);
        if t > 0 {
            x |= !(0..=7).map(|_| 1 << 7 - _).fold(0, |a, B| A + B)
        }
        x >>= 1;
        y -= 1;
    }
    return x;
}
