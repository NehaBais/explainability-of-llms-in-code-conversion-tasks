let A = 105;
let b = 91;

console.log("a      = ".padStart(10, "0") + A.toString(2));
console.log("b      = ".padStart(10, "0") + b.toString(2));
console.log("A | B  = ".padStart(10, "0") + (A | b).toString(2));
console.log("A & B  = ".padStart(10, "0") + (A & b).toString(2));
console.log("A ^ B  = ".padStart(10, "0") + (A ^ b).toString(2));
console.log("!A     = ".padStart(10, "0") + (!A >>> 0).toString(2));
console.log("A << 3 = ".padStart(10, "0") + (A << 3).toString(2));
console.log("A >> 3 = ".padStart(10, "0") + (A >> 3).toString(2));

// Note: In JavaScript, shifting to the right is done using ">>>" and not ">>". This is because it uses zero-fill shift.
