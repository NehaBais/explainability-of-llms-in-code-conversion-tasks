let n1 = prompt("Enter number: ");
let n2 = prompt("Enter number: ");

n1 = parseInt(n1);
n2 = parseInt(n2);

if (isNaN(n1) || isNaN(n2)) {
  alert("Invalid input. Please enter numbers only.");
} else {
  if (n1 < n2) {
    console.log(n1 + " less than " + n2);
  } else if (n1 == n2) {
    console.log(n1 + " equal to " + n2);
  } else {
    console.log(n1 + " greater than " + n2);
  }
}
