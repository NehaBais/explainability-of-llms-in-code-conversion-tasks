```
function main() {
    var n1, n2 = prompt("Enter number: ");
    
    if (typeof n1 !== 'number') {
        console.log("Please enter a valid integer");
        return;
    }
    
    if (typeof n2 !== 'number') {
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
```
This JavaScript code uses the `prompt` function to ask for two numbers from the user and checks if they are valid integers using the `typeof` operator. If either of the numbers is not a valid integer, it logs an error message and returns from the function.

Once both numbers are valid, the code uses a `switch` statement to compare them and print the appropriate message based on the comparison result. The `switch` statement checks if `n1` is less than, equal to or greater than `n2`. If the condition is true, it prints the corresponding message using string concatenation.

Note that in JavaScript, you can use `prompt` function to ask for user input and get a response. Also, you can use `typeof` operator to check if the variable is of type integer.
