let input = readline().split(" ");
let a = parseInt(input[0]);
let b = parseInt(input[1]);
if (a < b) {
  console.log(`${a} is less than ${b}`);
} else if (a == b) {
  console.log(`${a} is equal to ${b}`);
} else {
  console.log(`${a} is greater than ${b}`);
}
