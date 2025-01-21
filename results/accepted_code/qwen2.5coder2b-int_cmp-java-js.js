function compareNumbers() {
  var input1 = prompt("Please enter the first number: ");
  var input2 = prompt("Please enter the second number: ");

  if (input1 < input2) {
    alert(input1 + " is less than " + input2);
  } else if (input1 > input2) {
    alert(input1 + " is greater than " + input2);
  } else {
    alert(input1 + " is equal to " + input2);
  }
}

compareNumbers();
