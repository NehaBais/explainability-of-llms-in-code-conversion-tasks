Here is the equivalent code in JavaScript:

```javascript
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
```

Here, JavaScript's `prompt()` function is used to get user input. Then, both inputs are converted into integers using `parseInt()`. After that, it checks if the inputs are valid numbers. If they aren't, it will alert the user and end execution of the code.

In the comparison section, if, else if, and else statements are used to check if the first number is less than, equal to or greater than the second one respectively. The result is printed in the console.
