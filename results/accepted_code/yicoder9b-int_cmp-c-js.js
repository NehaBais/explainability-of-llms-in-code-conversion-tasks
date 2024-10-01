let a = prompt("Enter first number:");
a = parseInt(a); //convert string input into integer

let b = prompt("Enter second number:");
b = parseInt(b); // convert string input into integer

if (a < b) {
  alert(`${a} is less than ${b}`);
} else if (a == b) {
  alert(`${a} is equal to ${b}`);
} else {
  alert(`${a} is greater than ${b}`);
}
