Here's the equivalent JavaScript code for your requirement:

```JavaScript
// Get two integers from user via prompt.
let firstNum = parseInt(prompt('Enter the first number'));
let secondNum = parseInt(prompt('Enter the second number'));

if (firstNum < secondNum) {
    alert(`${firstNum} is less than ${secondNum}`);
} else if (firstNum === secondNum) {
    alert(`${firstNum} equals ${secondNum}`);
} else if (firstNum > secondNum){
    alert(`${firstNum} is greater than ${secondNum}`);
};
```
The `prompt` function in JavaScript will get input from the user. Then it converts that to an integer using `parseInt()` and stores them into firstNum and secondNum respectively. After that, it runs a series of conditions similar to Rust's if-else condition and displays alert messages accordingly.
