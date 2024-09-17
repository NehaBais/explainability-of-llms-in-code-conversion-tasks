let input1 = 18;
// input1 = prompt();
let input2 = 7;
// input2 = prompt();

let qq = input1 + input2;
console.log("Sum: " + qq);
let ww = input1 - input2;
console.log("Difference: " + ww);
let ee = input1 * input2;
console.log("Product: " + ee);
let rr = Math.floor(input1 / input2); // Using floor to get integer quotient
console.log("Integer quotient: " + rr);
let tt = input1 / input2;
let uu = (Math.round(tt) - tt) * -10; // Rounding the decimal part to be subtracted and multiplied by 10 for getting correct sign of remainder
// console.log(tt)
console.log("Whole Remainder: " + Math.abs(uu));
console.log("Actual Remainder: " + uu);
let yy = Math.pow(input1, input2);
console.log("Exponentiation: " + yy);
