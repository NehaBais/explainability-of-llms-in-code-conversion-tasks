let sc = new Scanner(System.in);
let a = sc.nextInt();
let b = sc.nextInt();

let sum = a + b;
let difference = a - b;
let product = a * b;
let division = Math.trunc(a / b); // truncates towards 0
let remainder = a % b;

console.log("a + b = " + sum);
console.log("a - b = " + difference);
console.log("a * b = " + product);
console.log("quotient of a / b = " + division); // truncates towards 0
console.log("remainder of a / b = " + remainder); // same sign as first operand
