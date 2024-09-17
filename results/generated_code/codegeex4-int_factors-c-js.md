Here is the JavaScript version of your C code:

```javascript
function factor(num) {
    let factorsList = [];
    for (let divisor=1; divisor*divisor <= num; divisor++) {
        if (num % divisor !== 0) continue;

        factorsList.push(divisor);
        if (divisor != num / divisor)
            factorsList.push(num / divisor);
    }

    return factorsList.sort((a, b) => a - b);
}

let numbersToFactor = [2059, 223092870, 3135, 45];

numbersToFactor.forEach(number => {
    let factors = factor(number);

    console.log(`factors of ${number} are: ` + factors.join(', '));
});
```

This JavaScript code takes the same input as your C code and produces the same output. Note that it assumes you have a modern browser or Node.js environment to handle promises and other ES6+ features.

In the function "factor", we generate factors for a given number by dividing it with every integer up to its square root, similar to how we do it in the original C code. The results are stored in an array (which JavaScript calls an Array). 

The "forEach" loop at the bottom is used to iterate over each number to factorize and print out the factors for each number.
