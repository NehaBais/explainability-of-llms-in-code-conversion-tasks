let input1 = 18; // You can get this value from an HTML form or wherever you are getting it from.
//input1 = parseInt(prompt("Enter first number"));
let input2 = 7; // You can get this value from an HTML form or wherever you are getting it from.
//input2 = parseInt(prompt("Enter second number"));

let qq = input1 + input2;
console.log("Sum: " + qq);

let ww = input1 - input2;
console.log("Difference: " + ww);

let ee = input1 * input2;
console.log("Product: " + ee);

//JavaScript automatically does integer division for '/' operator. It rounds towards negative infinity, but unlike Python's '//', it doesn’t convert operands to float type in case of integer division
let rr = input1 / input2;
console.log("Integer quotient: " + Math.floor(rr)); // Round down
console.log("Float quotient: " + rr);

//To get the remainder we need a '%' operator, but unlike Python it doesn’t convert operands to float type in case of non integer division
let tt = input1 / input2;
let uu = (input1 - input1 / input2) * -10; // The actual remainder is the difference between the original numbers and the quotient times the divisor.
console.log("Whole Remainder: " + (Math.floor(tt * 10) % 10)); // Round down, get last digit of tt*10 (= whole part of float division).
console.log("Actual Remainder: " + uu);

let yy = Math.pow(input1, input2);
console.log("Exponentiation: " + yy);
