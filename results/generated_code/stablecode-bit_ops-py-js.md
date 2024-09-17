Here is the equivalent JavaScript code for the given Python code:

```javascript
function bitwise_built_ins(width, a, b) {
    const mask = ((1 << width) - 1);

    console.log(`\n  AND:     0b${a :0{width}b}} 
          & 0b${b :0{width}b}} 
          = 0b${(a & b) & mask :0{width}b}}`
    );
}

function rotr(width, a, n) {
    if (n < 0) {
        return rotl(width, a, -n);
    } else if (n === 0) {
        return a;
    } else {
        const mask = ((1 << width) - 1));
        const topBitMask = 1 << (width - 1));

        let aa = a | topBitMask;

        console.log(`\n  ROTATIONS
  
    RIGHT:   rotr(${width}), 0b${a :0{width}b}}, ${n})
        =       0b${rotr(width, a, n), "0"}${width}b}}      
        rotr(${width}), 0b${aa :0{width}b}}, ${2})
        =       0b${rotr(width, aa, 2), "0"}${width}b}}      
        rotr(${width}), 0b${aa :0{width}b}}, ${4})
        =       0b${rotr(width, aa, 4), "0"}${width}b}}    
`);
}

function rotl(width, a, n) {
    if (n === 0) {
        return a;
    }

    const mask = ((1 << width) - 1));
    const topBitMask = 1 << (width - 1));

    let aa = a | topBitMask;

    console.log(`\n  LEFT:   rotl(${width}), 0b${a :0{width}b}}, ${n})
        =       0b${rotl(width, a, n), "0"}${width}b}}      
        rotl(${width}), 0b${aa :0{width}b}}, ${2})
        =       0b${rotl(width, aa, 2), "0"}${width}b}}    
`);
}

if (typeof require !== 'undefined' && require.main==require) {
    // running directly, so use stdin and stdout
    const readline = require('readline');

    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    }));

    rl.question('Enter the width of the number: ', (width) => {
        rl.question('Enter the first number in binary form: ', (a) => {
            const n = parseInt(prompt("Enter the number of rotations to perform on the second number: ", ""))));

            console.log(`\n  ROTATIONS
  
    RIGHT:   rotr(${width}), 0b${a :0{width}b}}, ${n})
        =       0b${rotr(width, a, n), "0"}${width}b}}      
        LEFT:    rotl(${width}), 0b${aa :0{width}b}}, ${n})
        =       0b${rotl(width, aa, n), "0"}${width}b}}    
`);

    rl.close();
} else {
    // running via command line interface
    console.log('Enter the width of the number: ');
    const width = parseInt(prompt("", ""))));
    console.log('Enter the first number in binary form: ');
    const a = prompt("", "");
    console.log(`\n  ROTATIONS
  
    RIGHT:   rotr(${width}), 0b${a :0{width}b}}, ${n})
        =       0b${rotr(width, a, n), "0"}${width}b}}      
    LEFT:    rotl(${width}), 0b${aa :0{width}b}}, ${n})
        =       0b${rotl(width, aa, n), "0"}${width}b}}    
`);
}
```
