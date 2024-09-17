function bitwise(a, b) {

    // Perform a bitwise AND on integers a and b.
    console.log(`${a} & ${b}}: ${a & b}`); 

    // Perform a bitwise OR on integers a and b.
    console.log(`${a} | ${b}}: ${a | b}`);

    // Perform a bitwise XOR on integers a and b.
    console.log(`${a} ^ ${b}}: ${a ^ b}`);

    // Perform a bitwise NOT on the first integer, a.
    console.log(`not ${a}`: ~a}); 

    let ua = a; // Convert a to unsigned int 
    // Note: JavaScript does not support rotation operators or variable shift/rotate amounts, like C++

    // Perform a logical left rotate on integers a and b.
    // This is equivalent to performing an arithmetic right shift (>>) by the amount of the second integer, b. 
    console.log(`${a} lsr ${b}}: ${ua >> b}`); 

    // Perform a logical right rotate on integers a and b.
    // This is equivalent to performing an arithmetic left shift (<<) by the amount of the second integer, b. 
    console.log(`${a} ror ${b}}: ${std::rotr(ua, b)}`); 
}