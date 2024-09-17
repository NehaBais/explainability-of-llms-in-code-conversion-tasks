let a = parseInt(process.argv[2]);
let b = parseInt(process.argv[3]);
console.log("a+b=" + (a + b)); //sum
console.log("a-b=" + (a - b)); //difference
console.log("a*b=" + a * b); //product
if (b != 0) {
  console.log("a/b=" + Math.floor(a / b)); //integer quotient
  if ((a ^ b) < 0) {
    console.log("Remainder has negative sign");
  } else {
    console.log("Remainder has positive or zero sign");
  }
}
console.log("Exponentiation=" + Math.pow(a, b)); //exponentiation
