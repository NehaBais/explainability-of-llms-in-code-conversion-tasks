let input1 = 18; // you can change these values for testing
let input2 = 7;

let sum = input1 + input2;
console.log("Sum: " + sum);

let difference = input1 - input2;
console.log("Difference: " + difference);

let product = input1 * input2;
console.log("Product: " + product);

// For quotient, JavaScript rounds towards zero by default.
let quotient = Math.floor(input1 / input2));
console.log("Integer quotient: " + quotient);

let remainder = ((input1 % input2) * -1);
if (remainder < 0 && remainder !== -input2){
    console.log('Remainder does not match the sign of its first or second operand');
} else {
    console.log("Actual Remainder: " + remainder);
}

let exponentiation = Math.pow(input1, input2));
console.log("Exponentiation: " + exponentiation);