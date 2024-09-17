Here is the JavaScript version of your Python code:

```javascript

function bitwiseprint(width, a, b) {
    let mask = (1 << width) - 1;
    console.log(`\tAND:     0b${a.toString(2).padStart(width,'0')} 
             & 0b${b.toString(2).padStart(width,'0')} 
             = 0b${((a & b) & mask).toString(2).padStart(width,'0')}

    \tOR:      0b${a.toString(2).padStart(width,'0')} 
             | 0b${b.toString(2).padStart(width,'0')} 
             = 0b${((a | b) & mask).toString(2).padStart(width,'0')}

    \tXOR:     0b${a.toString(2).padStart(width,'0')} 
             ^ 0b${b.toString(2).padStart(width,'0')} 
             = 0b${((a ^ b) & mask).toString(2).padStart(width,'0')}

    \tNOT:   ~ 0b${a.toString(2).padStart(width,'0')} 
             = 0b${((~a) & mask).toString(2).padStart(width,'0')}
             
    \tSHIFTS

      RIGHT:   0b${a.toString(2).padStart(width,'0')} >> 1
            = 0b${((a >>> 1) & mask).toString(2).padStart(width,'0')}      

      LEFT:    0b${a.toString(2).padStart(width,'0')} << 1
            = 0b${((a << 1) & mask).toString(2).padStart(width,'0')}`);
}

function rotr(width, a, n) {
    "Rotate a, n times to the right"
    if (n < 0){
        return rotl(width, a, -n);
    }
    else if (n == 0){
        return a;
    }else{
        let mask = (1 << width) - 1;
        a = a & mask;
        n = n % width;
        return ((a >>> n)
                | ((a & ((1 << n) - 1)) 
                   << (width - n)));  
    }
}

function rotl(width, a, n) {
    "Rotate a, n times to the left"
    if (n < 0){
        return rotr(width, a, -n);
    } else if (n == 0){
        return a;
    }else{
        let mask = (1 << width) - 1;
        a = a & mask;
        n = n % width;
        return ((a << n)
                | (a >>> (width - n)));  
    }
}

function bitwisefunc(width, a){
    let aa = a | (1 << (width-1));
    console.log(`\tSIGN-EXTENDING ARITHMETIC SHIFT RIGHT

               asr(${width}, 0b${a.toString(2).padStart(width,'0')}, 1)
               = 0b${((a >> 1) & mask).toString(2).padStart(width,'0')}      
               asr(${width}, 0b${aa.toString(2).padStart(width,'0')}, 1)
               = 0b${((aa >> 1) & mask).toString(2).padStart(width,'0')}      
               asr(${width}, 0b${a.toString(2).padStart(width,'0')}, 2)
               = 0b${((a >> 2) & mask).toString(2).padStart(width,'0')}      
               asr(${width}, 0b${aa.toString(2).padStart(width,'0')}, 2)
               = 0b${((aa >> 2) & mask).toString(2).padStart(width,'0')}      
               asr(${width}, 0b${a.toString(2).padStart(width,'0')}, 4)
               = 0b${((a >>> 4) & mask).toString(2).padStart(width,'0')} 
               asr(${width}, 0b${aa.toString(2).padStart(width,'0')}, 4)
               = 0b${((aa >>> 4) & mask).toString(2).padStart(width,'0')}`); 
}

let width = 8, a = 27, b = 125;
bitwiseprint(width, a, b);
a = 27; bitwisefunc(width,a);

```
This code covers all the operations you specified in your original Python code. It prints out the results of bitwise AND, OR, XOR, NOT, LEFT SHIFT and RIGHT SHIFT for two given numbers. Also it performs sign extending arithmetic right shift with both positive and negative number as input.
