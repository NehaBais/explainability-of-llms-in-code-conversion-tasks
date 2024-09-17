let A = prompt("Enter the first integer");
A = parseInt(A);

let b = prompt("Enter the second integer");
b = parseInt(b);

if (A < b) {
  alert(`${A} is less than ${b}`);
} else if (A == b) {
  alert(`${A} is equal to ${b}`);
} else {
  alert(`${A} is greater than ${b}`);
}
