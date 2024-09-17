I have written the JavaScript code equivalent to the Python code. Please find the code below:

```javascript
function bitwiseBuiltIns(width, a, b) {
  const mask = (1 << width) - 1;

  console.log(`
    AND:     ${a.toString(2).padStart(width, '0')} 
            & ${b.toString(2).padStart(width, '0')}
            = ${(a & b & mask).toString(2).padStart(width, '0')}

    OR:      ${a.toString(2).padStart(width, '0')} 
            | ${b.toString(2).padStart(width, '0')}
            = ${(a | b & mask).toString(2).padStart(width, '0')}

    XOR:     ${a.toString(2).padStart(width, '0')} 
            ^ ${b.toString(2).padStart(width, '0')}
            = ${(a ^ b & mask).toString(2).padStart(width, '0')}

    NOT:    ~${a.toString(2).padStart(width, '0')}
            = ${(~a & mask).toString(2).padStart(width, '0')}

    SHIFTS
    
    RIGHT:   ${a.toString(2).padStart(width, '0')} >> 1
              = ${(a >>> 1).toString(2).padStart(width, '0')}      
    LEFT:    ${a.toString(2).padStart(width, '0')} << 1
              = ${(a << 1).toString(2).padStart(width, '0')}      
  `);
}

function rotr(width, a, n) {
  const mask = (1 << width) - 1;

  if (n < 0) return rotl(width, a, -n);
  else if (n === 0) return a;
  else {
    a &= mask;
    n %= width;

    return ((a >>> n) | (a << (-n & (width - 1)))) & mask;
  }
}

function rotl(width, a, n) {
  const mask = (1 << width) - 1;

  if (n < 0) return rotr(width, a, -n);
  else if (n === 0) return a;
  else {
    a &= mask;
    n %= width;

    return ((a << n) | (a >>> (-n & (width - 1)))) & mask;
  }
}

function asr(width, a, n) {
  const mask = (1 << width) - 1;

  if (n < 0) {
    // If the sign bit is set, the result is all ones.
    return ~(-a & mask);
  } else if (n === 0) {
    // The value remains unchanged.
    return a;
  } else {
    a &= mask;

    // If the sign bit is set, we need to extend it.
    let sign = a >> (width - 1);

    for (; n > 0; --n) {
      if (sign === 0) {
        a >>>= 1;
      } else {
        a |= (1 << (width - 1));
        a >>>= 1;
      }
    }

    return a & mask;
  }
}

function helperFuncs(width, a) {
  console.log(`
    
    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT
    
               asr(${a}, ${a}, 1)
                =      ${asr(width, a, 1)}      
    LEFT:    rotl(${a}, ${a}, 2)
                =      ${rotl(width, a, 2)}      
               rotr(${a}, ${a}, 4)
                =      ${rotr(width, a, 4)}      
  `);
}

bitwiseBuiltIns(8, 27, 125);
helperFuncs(8, 27);
```
