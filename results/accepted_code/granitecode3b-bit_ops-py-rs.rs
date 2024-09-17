fn bitwise_built_ins(width: u32, a: u64, b: u64) {
    let mask = ((1 << width) - 1) as u64;
    println!(
        "    AND:     0b{a:0>width}b 
           & 0b{b:0>width}b 
           = 0b{(a & b) & mask :0>width}b
           
    OR:      0b{a:0>width}b 
           | 0b{b:0>width}b 
           = 0b{(a | b) & mask :0>width}b
           
    XOR:     0b{a:0>width}b 
           ^ 0b{b:0>width}b 
           = 0b{(a ^ b) & mask :0>width}b
           
    NOT:   ~ 0b{a:0>width}b 
           = 0b{(~a) & mask :0>width}b
           
    SHIFTS
    
      RIGHT:   0b{a:0>width}b >> 1
             = 0b{(a >> 1) & mask :0>width}b      
    
      LEFT:    0b{a:0>width}b << 1
             = 0b{(a << 1) & mask :0>width}b      
"
    )
}
fn rotr(width: u32, a: u64, n: u32) -> u64 {
    if n < 0 {
        return rotl(width, a, -n);
    } else if n == 0 {
        return a;
    } else {
        let mask = ((1 << width) - 1) as u64;
        let n = (n % width) as u32;
        let (a, n) = (a & mask, n % width);
        return ((a >> n)    // top moved down
                | ((a & ((1 << n) - 1))   // Bottom masked...
                   << (width - n))); // ... then moved up
    }
}
fn rotl(width: u32, a: u64, n: u32) -> u64 {
    if n < 0 {
        return rotr(width, a, -n);
    } else if n == 0 {
        return a;
    } else {
        let mask = ((1 << width) - 1) as u64;
        let n = (n % width) as u32;
        let (a, n) = (a & mask, n % width);
        return ((a << n)    // top moved up
                | ((a >> (width - n))  // bottom shifted left...
                   << n)); // ... then combined
    }
}
fn asr(width: u32, a: u64, n: u32) -> u64 {
    if n == 0 {
        return a;
    } else if n >= width {
        return (a >> (n - width));
    } else {
        let mask = ((1 << n) - 1) as u64;
        return (a >> n) | ((a & mask) << (width - n));
    }
}
fn helper_funcs(width: u32, a: u64) {
    println!(
        "SIGN-EXTENDING ARITHMETIC SHIFT RIGHT
    
               asr({width}, 0b{a:0>width}b, 1)
               =      0b{asar(width, a, 1):0>width}b      
               asr({width}, 0b{a.to_ne_bytes()}u8, 1)
               =      0b{asar(width, a, 1):0>width}b      
               asr({width}, 0b{a:0>width}b, 2)
               =      0b{asar(width, a, 2):0>width}b      
               asr({width}, 0b{a.to_ne_bytes()}u8, 2)
               =      0b{asar(width, a, 2):0>width}b      
               asr({width}, 0b{a:0>width}b, 4)
               =      0b{asar(width, a, 4):0>width}b 
               asr({width}, 0b{a.to_ne_bytes()}u8, 4)
               =      0b{asar(width, a, 4):0>width}b 
"
    )
}
