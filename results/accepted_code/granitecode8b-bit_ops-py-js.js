function bitwiseBuiltIns(width, a, b) {
  let mask = (1 << width) - 1;
  console.log(`    AND:     0b${a.toString(2).padStart(width, '0')} 
   & 0b${b.toString(2).padStart(width, '0')} 
   = 0b${((a & b) & mask).toString(2).padStart(width, '0')}
   
 OR:      0b${a.toString(2).padStart(width, '0')} 
   | 0b${b.toString(2).padStart(width, '0')} 
   = 0b${((a | b) & mask).toString(2).padStart(width, '0')}
   
 XOR:     0b${a.toString(2).padStart(width, '0')} 
   ^ 0b${b.toString(2).padStart(width, '0')} 
   = 0b${((a ^ b) & mask).toString(2).padStart(width, '0')}
   
 NOT:   ~ 0b${a.toString(2).padStart(width, '0')} 
   = 0b${((~a) & mask).toString(2).padStart(width, '0')}
   
 SHIFTS
    
      RIGHT:   0b${a.toString(2).padStart(width, '0')} >> 1
             = 0b${((a >> 1) & mask).toString(2).padStart(width, '0')}      
    
      LEFT:    0b${a.toString(2).padStart(width, '0')} << 1
             = 0b${((a << 1) & mask).toString(2).padStart(width, '0')}      
`);
}
function rotr(width, a, n) {
  if (n < 0) {
    return rotl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    let mask = (1 << width) - 1;
    [a, n] = [a & mask, n % width];
    return (((a >> n)    // top moved down
            | ((a & ((1 << n) - 1))   // bottom masked...
               << (width - n)))  // ... then moved up    
  }
}
function rotl(width, a, n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    let mask = (1 << width) - 1;
    [a, n] = [a & mask, n % width];
    return (((a << n)    // top moved up
            | ((a >> (width - n)) & mask))   // bottom masked...
               .toString(2).padStart(width, '0'))  // ... then moved down    
  }
}
function asr(width, a, n) {
  let result = a >> n;
  if (a & (1 << (width - 1))) {
    result |= ((1 << width) - 1) << n;
  }
  return result;
}
if (typeof module !== 'undefined' && typeof module.exports !== 'undefined') {
  module.exports = {
    bitwiseBuiltIns: bitwiseBuiltIns,
    rotr: rotr,
    rotl: rotl,
    asr: asr
  };
} else {
  bitwiseBuiltIns(8, 27, 125);
}