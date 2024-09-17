function bitwise(a, b) {
    // Bitwise logical operations
    console.log("a:   ", a.toString(2).padStart(16,'0'));
    console.log("b:   ", b.toString(2).padStart(16,'0'));
    console.log("and: ", (a&b).toString(2).padStart(16,'0'));
    console.log("or:  ", (a|b).toString(2).padStart(16,'0'));
    console.log("xor: ", (a^b).toString(2).padStart(16,'0'));
    console.log("not: ", ~a);
    
    if (b < 0) {
        console.log('Right operand is negative, but all shifts require an unsigned right operand (shift distance).');
        return;
    }
    
    let ua = a >>> 0;
    let ub = b >>> 0;
    
    // Logical shifts (unsigned left operand)
    console.log("shl: ", (ua<<ub).toString(2).padStart(16,'0'));
    console.log("shr: ", (ua>>>ub).toString(2).padStart(16,'0'));
    
    // Arithmetic shifts (signed left operand)
    console.log("las: ", (a<<ub).toString(2).padStart(16,'0'));
    console.log("ras: ", (a>>>ub).toString(2).padStart(16,'0'));
    
    // Rotations
    let rol = ((a<<ub)|((a>>>(16-ub))&(~(-1)^(ub-1)))).toString(2).padStart(16,'0');
    let ror = (((a>>>ub)&a)<<(16-ub)).toString(2).padStart(16,'0');
    
    console.log("rol: ", rol);
    console.log("ror: ", ror);
}

let a, b = -460, 6;
bitwise(a, b);