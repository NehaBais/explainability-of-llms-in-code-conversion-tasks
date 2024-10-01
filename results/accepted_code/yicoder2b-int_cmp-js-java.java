// Using prompt to get inputs from user
var num1 = parseInt(prompt('Enter first number'));
var num2 = parseInt(prompt('Enter second number'));
  
function compare(a, b) {
    if (a == b) { // Equal comparison operator
        console.log(a + " is equal to " + b);
    } else if (a < b) { // Less than operator
        console.log(a + " is less than " + b);
    } else { // Greater than operator
        console.log(a + " is greater than " + b);
    }
}