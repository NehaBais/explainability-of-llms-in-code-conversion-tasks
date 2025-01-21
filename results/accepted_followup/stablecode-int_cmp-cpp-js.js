let a, b;

if (prompt("Enter first integer:")) && prompt("Enter second integer:"))) {
    a = parseInt(prompt("Enter first integer:")));
    b = parseInt(prompt("Enter second integer:")));

    if (a < b) alert(`${a} is less than ${b}.`);
    if (a === b) alert(`${a} is equal to ${b}.`);
    if (a > b) alert(`${a} is greater than ${b}.`);
} else {
    alert("Could not read the numbers.");
}