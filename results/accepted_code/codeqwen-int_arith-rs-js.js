// Get two integers from the user
let A = prompt("Enter first integer");
let b = prompt("Enter second integer");

A = parseInt(A);
b = parseInt(b);

// Display their properties
alert("sum:              " + (A + b));
alert("difference:       " + (A - b));
alert("product:          " + A * b);
alert("integer quotient: " + Math.floor(A / b)); // truncates towards zero
alert("remainder:        " + (A % b)); // same sign as first operand

// JavaScript doesn't have built-in support for exponentiation in alerts or prompts, but it can be achieved like so:
alert("exponentiation:    " + Math.pow(A, b));
