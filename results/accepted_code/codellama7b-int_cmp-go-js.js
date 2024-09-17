function main() {
  var n1,
    n2 = prompt("Enter number: ");

  if (typeof n1 !== "number") {
    console.log("Please enter a valid integer");
    return;
  }

  if (typeof n2 !== "number") {
    console.log("Please enter a valid integer");
    return;
  }

  if (n1 < n2) {
    console.log(n1 + " is less than " + n2);
  } else if (n1 === n2) {
    console.log(n1 + " is equal to " + n2);
  } else if (n1 > n2) {
    console.log(n1 + " is greater than " + n2);
  }
}
