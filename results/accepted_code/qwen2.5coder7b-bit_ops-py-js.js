function bitwiseBuiltIns(width, a, b) {
  let mask = (1 << width) - 1;
  console.log(`    AND:     0b${a.toString(2).padStart(width, "0")} 
           & 0b${b.toString(2).padStart(width, "0")} 
           = 0b${(a & b & mask).toString(2).padStart(width, "0")}
           
    OR:      0b${a.toString(2).padStart(width, "0")} 
           | 0b${b.toString(2).padStart(width, "0")} 
           = 0b${((a | b) & mask).toString(2).padStart(width, "0")}
           
    XOR:     0b${a.toString(2).padStart(width, "0")} 
           ^ 0b${b.toString(2).padStart(width, "0")} 
           = 0b${((a ^ b) & mask).toString(2).padStart(width, "0")}
           
    NOT:   ~ 0b${a.toString(2).padStart(width, "0")} 
           = 0b${((-a - 1) & mask).toString(2).padStart(width, "0")}
           
    SHIFTS
    
      RIGHT:   0b${a.toString(2).padStart(width, "0")} >> 1
             = 0b${((a >> 1) & mask).toString(2).padStart(width, "0")}      
    
      LEFT:    0b${a.toString(2).padStart(width, "0")} << 1
             = 0b${((a << 1) & mask).toString(2).padStart(width, "0")}
`);
}

function rotr(width, a, n) {
  if (n < 0) return rotl(width, a, -n);
  else if (n == 0) return a;
  else {
    let mask = (1 << width) - 1;
    a &= mask;
    n %= width;
    return ((a >> n) & mask) | ((a & ((1 << n) - 1)) << (width - n));
  }
}

function rotl(width, a, n) {
  if (n < 0) return rotr(width, a, -n);
  else if (n == 0) return a;
  else {
    let mask = (1 << width) - 1;
    a &= mask;
    n %= width;
    return ((a << n) & mask) | (a >> (width - n));
  }
}

function asr(width, a, n) {
  let signBit = a & (1 << (width - 1)) ? 0xffffffff : 0;
  a &= (1 << width) - 1;
  return ((a >> n) | (signBit << (width - n))) & ((1 << width) - 1);
}

function helperFuncs(width, a) {
  let aa = (a < 0 ? ~a + 1 : a) & ((1 << width) - 1);
  console.log(`    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT
    
               asr(${width}, 0b${a.toString(2).padStart(width, "0")}, 1)
               =      0b${asr(width, a, 1).toString(2).padStart(width, "0")}      
               asr(${width}, 0b${aa.toString(2).padStart(width, "0")}, 1)
               =      0b${asr(width, aa, 1).toString(2).padStart(width, "0")}
               asr(${width}, 0b${a.toString(2).padStart(width, "0")}, 2)
               =      0b${asr(width, a, 2).toString(2).padStart(width, "0")}      
               asr(${width}, 0b${aa.toString(2).padStart(width, "0")}, 2)
               =      0b${asr(width, aa, 2).toString(2).padStart(width, "0")}
               asr(${width}, 0b${a.toString(2).padStart(width, "0")}, 4)
               =      0b${asr(width, a, 4).toString(2).padStart(width, "0")} 
               asr(${width}, 0b${aa.toString(2).padStart(width, "0")}, 4)
               =      0b${asr(width, aa, 4).toString(2).padStart(width, "0")}
`);
}

bitwiseBuiltIns(8, 27, 125);
helperFuncs(8, 27);
