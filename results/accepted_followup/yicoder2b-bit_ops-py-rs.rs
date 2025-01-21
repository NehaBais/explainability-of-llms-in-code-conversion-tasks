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