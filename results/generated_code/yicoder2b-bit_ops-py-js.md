Sure, the Python code you provided is for performing bitwise operations on a number and shifting those bits. Here is how it could be rewritten in JavaScript:

```javascript
function bitwiseAndOrXorNotShift(width, a, b) {
    let mask = ((1 << width) - 1);
    console.log(`    AND:     0b${a.toString(2).padStart(width, '0')} 
           & 0b${b.toString(2).padStart(width, '0')} 
           = 0b${(a & b) & mask}.toString(16)`);
    console.log(`    OR:      0b${a.toString(2).padStart(width, '0')} 
           | 0b${b.toString(2).padStart(width, '0')} 
           = 0b${(a | b) & mask}.toString(16)`);
    console.log(`    XOR:     0b${a.toString(2).padStart(width, '0')} 
           ^ 0b${b.toString(2).padStart(width, '0')} 
           = 0b${(a ^ b) & mask}.toString(16)`);
    console.log(`    NOT:   ~ 0b${a.toString(2).padStart(width, '0')} 
           = 0b${(~a) & mask}`);
    console.log('      SHIFTS');
    for (let shift = 1; shift <= width; ++shift){
        console.log(`         RIGHT:   0b${a.toString(2).padStart(width, '0')} >> ${shift}
           = 0b${(a >>> shift)}.toString(16)`);
    }
    for (let shift = 1; shift <= width; ++shift){
        console.log(`         LEFT:    0b${a.toString(2).padStart(width, '0')} << ${shift}
           = 0b${(a << shift)}.toString(16)`);
    }
    let aa = ((a | (a << width)) >>> 0);
    console.log('      SIGN-EXTENDING ARITHMETIC SHIFT RIGHT');
    console.log(`               asr ${width}, 0b${a.toString(2).padStart(width, '0')}, ${shift}
           = 0b${(aa >>> shift)}.toString(16)`);
    let maskArray = Array(width).fill(mask);
    console.log(`               asr ${width}, 0b${a.toString(2).padStart(width, '0')}, ${shift}, 1
           = 0b${(maskArray[shift] >>> 0 | a >>> 0)}.toString(16)`);
    console.log(`               asr ${width}, 0b${a.toString(2).padStart(width, '0')}, ${shift}, 2
           = 0b${(maskArray[Math.floor(shift)] >>> 0 | a >>> 0)}.toString(16)`);
    console.log(`               asr ${width}, 0b${a.toString(2).padStart(width, '0')}, ${shift}, 4
           = 0b${(maskArray[Math.floor(shift)] >>> 0 | a >>> 0)}.toString(16)`);
}
bitwiseAndOrXorNotShift(8, 27, 125); // call the function with width = 8, numbers 27 and 125
```
This script will perform bitwise operations using AND, OR and XOR on two numbers (a and b). It also handles sign extension in ARSH operation. The output of the script will be printed to the console.
