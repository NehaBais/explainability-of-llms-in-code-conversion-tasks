Here is the equivalent JavaScript code:

```javascript
function factor(n) {
    let factors = [];
    for (let x = 1; x <= Math.floor(Math.sqrt(n)); x++) {
        if (n % x === 0) {
            factors.push(x);
            factors.unshift(n / x);
        }
    }
    return factors;
}

console.log(factor(45).join(', '));
console.log(factor(53).join(', '));
console.log(factor(64).join(', '));
```

This JavaScript code does essentially the same thing as your Python code. It finds all the factors of a given number by iterating from 1 to the square root of that number, checking if the current number can divide evenly into the target number (i.e., the remainder is 0), and if it can, adding both that number and the quotient to an array. 

In JavaScript, `unshift()` method inserts new items at the start of an array and returns the new length. Because factors are added in descending order, we use `unshift()` to add the larger factor (n / x) to the front so it will appear after its corresponding smaller factor.

Finally, the code calls `join(', ')` when printing out the factors for better readability, joining all elements of the array into a string separated by commas.
