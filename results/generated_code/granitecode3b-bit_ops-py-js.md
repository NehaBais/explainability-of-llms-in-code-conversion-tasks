Sure! Here's the JavaScript code that performs the same operations as the Python code:
```javascript
function bitwiseBuiltIns(width, a, b) {
 const mask = (1 << width) - 1;
 console.log(`    AND:     0b${a.toString(2).padStart(width, '0')} 
           & 0b${b.toString(2).padStart(width, '0')} 
           = 0b{(a & b) & mask.toString(2).padStart(width, '0')}`);
 console.log(`    OR:      0b${a.toString(2).padStart(width, '0')} 
           | 0b${b.toString(2).padStart(width, '0')} 
           = 0b{(a | b) & mask.toString(2).padStart(width, '0')}`);
 console.log(`    XOR:     0b${a.toString(2).padStart(width, '0')} 
           ^ 0b${b.toString(2).padStart(width, '0')} 
           = 0b{(a ^ b) & mask.toString(2).padStart(width, '0')}`);
 console.log(`    NOT:   ~ 0b${a.toString(2).padStart(width, '0')} 
           = 0b{(~a) & mask.toString(2).padStart(width, '0')}`);
 
 console.log(`    SHIFTS
    
      RIGHT:   0b${a.toString(2).padStart(width, '0')} >> 1
             = 0b{(a >> 1) & mask.toString(2).padStart(width, '0')}`);
     
     LEFT:    0b${a.toString(2).padStart(width, '0')} << 1
             = 0b{(a << 1) & mask.toString(2).padStart(width, '0')}`);   
}

function rotr(width, a, n) {
  if (n < 0) {
    return rotl(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    const mask = (1 << width) - 1;
    a = a & mask;
    n = n % width;
    return ((a >> n)    // top moved down
            | ((a & ((1 << n) - 1))   // Bottom masked...
               << (width - n)))  // ... then moved up    
  }
}

function rotl(width, a, n) {
  if (n < 0) {
    return rotr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    const mask = (1 << width) - 1;
    a = a & mask;
    n = n % width;
    return ((a << n)    // top moved up
            | ((a & ((1 << n) - 1))   // Bottom shifted left
               >> (width - n)))  // ... then shifted right
  }
}

function asr(width, a, n) {
  if (n < 0) {
    return asr(width, a, -n);
  } else if (n == 0) {
    return a;
  } else {
    const mask = (1 << width) - 1;
    a = a & mask;
    n = n % width;
    let result = 0;
    for (let i = 0; i < width; i++) {
      if ((a >> i) & 1) {
        result |= ((1 << (n + i)) - 1) << i;
      }
    }
    return result;
  }
}

if (typeof module !== 'undefined' && module.exports) {
  module.exports = {
    bitwiseBuiltIns,
    rotr,
    rotl,
    asr,
  };
}
```

