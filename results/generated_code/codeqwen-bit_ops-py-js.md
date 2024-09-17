Here is the JavaScript version of your Python code:

```javascript
function bitwiseBuiltIns(width, A, b){
  let mask = (1 << width) - 1;
  console.log(`    AND:     0b${A.toString(2).padStart(width, '0')} 
        AND 0b${b.toString(2).padStart(width, '0')} 
        AND= 0b${((A & b) & mask).toString(2).padStart(width, '0')}\n`);

  console.log(`    OR:      0b${A.toString(2).padStart(width, '0')} 
        OR 0b${b.toString(2).padStart(width, '0')} 
        OR= 0b${((A | b) & mask).toString(2).padStart(width, '0')}\n`);

  console.log(`    XOR:     0b${A.toString(2).padStart(width, '0')} 
        XOR 0b${b.toString(2).padStart(width, '0')} 
        XOR= 0b${((A ^ b) & mask).toString(2).padStart(width, '0')}\n`);

  console.log(`    NOT:    0b${A.toString(2).padStart(width, '0')} 
        NOT= 0b${-(A + 1).toString(2).padStart(width, '0')}\n`);

  console.log('SHIFTS\n');

  console.log(`    LEFT:    ${leftShift(width, A, 1)}\n`);
  console.log(`    RIGHT:   ${rightShift(width, A, 1)}\n`);

  function leftShift(width, n, bits){
    let result = '0b';
    for (let i = 0; i < bits; i++) {
      result += '0'.padStart(width, '0');
    }
    return `LEFT:    ${n.toString(2).padStart(width, '0')} 
        LEFT ${bits}= ${result}\n`;
  }

  function rightShift(width, n, bits){
    let result = '0b';
    for (let i = 0; i < bits; i++) {
      result += '0'.padStart(width, '0');
    }
    return `RIGHT:   ${n.toString(2).padStart(width, '0')} 
        RIGHT ${bits}= ${result}\n`;
  }
}

function helperFuncs(width, A){
  console.log('ROTATIONS\n');

  for (let i = 1; i <= 4; i++) {
    console.log(`    LEFT:    ${rotateLeft(width, A, i)}\n`);
  }

  for (let i = 1; i <= 4; i++) {
    console.log(`    RIGHT: ${rotateRight(width, A, i)}\n`);
  }

  function rotateLeft(width, n, bits){
    return `LEFT:    ${n.toString(2).padStart(width, '0')} 
        LEFT ${bits}= ${(n << bits).toString(2).padStart(width, '0')}\n`;
  }

  function rotateRight(width, n, bits){
    return `RIGHT:   ${n.toString(2).padStart(width, '0')} 
        RIGHT ${bits}= ${(n >>> bits).toString(2).padStart(width, '0')}\n`;
  }
}

bitwiseBuiltIns(8, 27, 125);
helperFuncs(8, 27);
```

The main difference in this JavaScript code is that instead of using the bitwise NOT operator `~`, we use the unary negation operator `-`. In addition, I added padding zeros to make sure each binary number has a width of 8 bits. The JavaScript shift operators (<< and >>) work differently from Python's, so I created separate functions for rotating left/right.
