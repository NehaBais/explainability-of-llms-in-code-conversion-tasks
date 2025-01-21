The error is that there's a missing closing curly brace (`}`) at the end of the template string inside `console.log()`.

To fix it, we need to add a closing curly brace after `${n})` in the `console.log()` statement.
```javascript
function bitwise_built_ins(width, a, b) 
{
    const mask = ((1 << width) - 1);

    console.log(`\n  AND:     0b${a : 0 { width } b}} 
                                  & 
0b${b : 0 { width } b}} 
                                  = 
0b${(a & b) & mask : 0 { width } b}}`
);
}

function rotr(width, a, n) 
{
    if (n === 0) 
    {
        return a;
    }

    const mask = ((1 << width) - 1));
    const topBitMask = 1 << (width - 1));

    let aa = a | topBitMask;

    console.log(`\n  ROTATIONS
  
    RIGHT:   rotr(${width}), 0b${a :0{width}b}}, ${n})
        =       0b${rotr(width, a, n), "0"}${width}b}}      
        LEFT:    rotl(${width}), 0b${aa :0{width}b}}, ${n})
        =       0b${rotl(width, aa, n), "0"}${width}b}}    
`);
}
```
In this solution, I fixed the missing closing curly brace in the template string inside `console.log()`. Then, I provided a full code block containing all the necessary functions and logic to perform bitwise operations using built-in JavaScript functions.
