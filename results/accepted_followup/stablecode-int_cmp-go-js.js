let n1 = prompt("Enter number 1:") | 0;
let n2 = prompt("Enter number 2:") | 0;

switch (true) {
  case n1 < n2:
    console.log(n1, "less than", n2));
  case n1 === n2:
    console.log(n1, "is equal to", n2));
  case n1 > n2:
    console.log(n1, "greater than", n2));
}