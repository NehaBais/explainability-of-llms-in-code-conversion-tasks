let input1 = 18;
// input1 = parseInt(prompt('Enter number 1'));
let input2 = 7;
// input2 = parseInt(prompt('Enter number 2'));

let qq = input1 + input2;
console.log("Sum:           " + qq);
let ww = input1 - input2;
console.log("Difference:     " + ww);
let ee = input1 * input2;
console.log("Product:        " + ee);
let rr = input1 / input2;
console.log("Integer quotient:  " + Math.floor(rr));
console.log("Float quotient:    " + parseFloat(rr));
let tt = (input1 / input2).toFixed(3) - 0;
console.log("Whole Remainder:   " + Math.round(tt * 10));
console.log("Actual Remainder:  " + tt);
let yy = input1 ** input2;
console.log("Exponentiation:    " + yy);
