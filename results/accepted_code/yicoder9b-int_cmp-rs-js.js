// Get two integers from user via prompt.
let firstNum = parseInt(prompt("Enter the first number"));
let secondNum = parseInt(prompt("Enter the second number"));

if (firstNum < secondNum) {
  alert(`${firstNum} is less than ${secondNum}`);
} else if (firstNum === secondNum) {
  alert(`${firstNum} equals ${secondNum}`);
} else if (firstNum > secondNum) {
  alert(`${firstNum} is greater than ${secondNum}`);
}
