 Here's the JavaScript code that satisfies the requirement:
```
 function getTwoIntegers() {
    let num1;
    let num2;
    while (true) {
        num1 = prompt("Enter first integer: ");
        if (num1 != null && !isNaN(num1)) {
            break;
        } else {
            alert("Invalid input. Please enter a valid integer.");
        }
    }
    while (true) {
        num2 = prompt("Enter second integer: ");
        if (num2 != null && !isNaN(num2)) {
            break;
        } else {
            alert("Invalid input. Please enter a valid integer.");
        }
    }
    let result = "";
    if (parseInt(num1) < parseInt(num2)) {
       result += " is less than ";
    } else if (parseInt(num1) > parseInt(num2)) {
       result += " is greater than ";
    } else {
        result += " is equal to ";
    }
    alert(`${parseInt(num1)}${result}${parseInt(num2)}`);
}
```
Explanation:
The code first prompts the user for two integers, and then checks which comparison operator they match using the if-else statements. The 'isNaN' function is used to verify that the input is an integer. If the input is invalid, the user is alerted with a message to enter a valid integer. Once both numbers have been entered and are valid, the code determines which comparison operation to use and displays a corresponding message to the user.
