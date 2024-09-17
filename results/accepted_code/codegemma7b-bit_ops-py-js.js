function bitwiseBuiltIns(width, a, b) {
  const mask = (1 << width) - 1;

  console.log(`    AND:     0b${a.toString(2).padStart(width, "0")} 
           & 0b${b.toString(2).padStart(width, "0")} 
           = 0b${a & b & mask}.toString(2).padStart(width, '0')}`);

  console.log(`    OR:      0b${a.toString(2).padStart(width, "0")} 
           | 0b${b.toString(2).padStart(width, "0")} 
           = 0b${(a | b) & mask}.toString(2).padStart(width, '0')}`);

  console.log(`    XOR:     0b${a.toString(2).padStart(width, "0")} 
           ^ 0b${b.toString(2).padStart(width, "0")} 
           = 0b${(a ^ b) & mask}.toString(2).padStart(width, '0')}`);

  console.log(`    NOT:   ~ 0b${a.toString(2).padStart(width, "0")} 
           = 0b${~a & mask}.toString(2).padStart(width, '0')}`);

  console.log(`    SHIFTS`);

  console.log(`      RIGHT:   0b${a.toString(2).padStart(width, "0")} >> 1
             = 0b${(a >> 1) & mask}.toString(2).padStart(width, '0')`);

  console.log(`      LEFT:    0b${a.toString(2).padStart(width, "0")} << 1
             = 0b${(a << 1) & mask}.toString(2).padStart(width, '0')`);
}

function rotr(width, a, n) {
  if (n < 0) {
    return rotl(width, a, -n);
  }

  return (a >>> (width - n)) | (a << n);
}

function rotl(width, a, n) {
  return (a << n) | (a >>> (width - n));
}

function asr(width, a, n) {
  const signBit = a >> (width - 1);
  return (a >>> n) | (signBit << (width - n));
}

function helperFuncs(width, a) {
  console.log(`    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT`);

  console.log(`               asr(${width}, 0b${a.toString(2).padStart(width, "0")}, 1)
               =      0b${asr(width, a, 1).toString(2).padStart(width, "0")}`);

  console.log(`               asr(${width}, 0b${(a | 0x80).toString(2).padStart(width, "0")}, 1)
               =      0b${asr(width, a | 0x80, 1)
                 .toString(2)
                 .padStart(width, "0")}`);

  console.log(`               asr(${width}, 0b${a.toString(2).padStart(width, "0")}, 2)
               =      0b${asr(width, a, 2).toString(2).padStart(width, "0")}`);

  console.log(`               asr(${width}, 0b${(a | 0x80).toString(2).padStart(width, "0")}, 2)
               =      0b${asr(width, a | 0x80, 2)
                 .toString(2)
                 .padStart(width, "0")}`);

  console.log(`               asr(${width}, 0b${a.toString(2).padStart(width, "0")}, 4)
               =      0b${asr(width, a, 4).toString(2).padStart(width, "0")}`);

  console.log(`               asr(${width}, 0b${(a | 0x80).toString(2).padStart(width, "0")}, 4)
               =      0b${asr(width, a | 0x80, 4)
                 .toString(2)
                 .padStart(width, "0")}`);
}

bitwiseBuiltIns(8, 27, 125);
helperFuncs(8, 27);
