var input1 = prompt("Enter a number: ", 18);
// var input1 = parseInt(prompt("Enter a number: "));
var input2 = prompt("Enter another number: ", 7);
// var input2 = parseInt(prompt("Enter another number: "));

var qq = input1 + input2;
console.log("Sum: " + qq);

var ww = input1 - input2;
console.log("Difference: " + ww);

var ee = input1 * input2;
console.log("Product: " + ee);

var rr = input1 / input2;
console.log("Integer quotient: " + Math.floor(rr));
console.log("Float quotient: " + rr);

var tt = input1 / input2;
var uu = (tt % 1) * -10;
// var uu = (Math.round(tt) - tt) * -10;
console.log("Whole Remainder: " + Math.floor(uu));
console.log("Actual Remainder: " + uu);

var yy = input1 ** input2;
console.log("Exponentiation: " + yy);
