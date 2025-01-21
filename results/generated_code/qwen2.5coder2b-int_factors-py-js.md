Here is the JavaScript equivalent of your Python code:

```javascript
function computeFactors(n) {
    let factors1 = [];
    let factors2 = [];

    for (let x = 1; x < Math.sqrt(n); x++) {
        if (n % x === 0) {
            factors1.push(x);
            factors2.push(n / x);
        }
    }

    x++;

    if (x * x === n) {
        factors1.push(x);
    }

    factors1 = factors1.concat(factors2.reverse());

    return factors1;
}

for (let i of [45, 53, 64]) {
    console.log(`${i}: factors: ${computeFactors(i)}`);
}
```

In this JavaScript code, we have a function named `computeFactors` that computes the factors of a positive integer. This function uses the same logic as your Python code - loops through numbers starting from 1 up to the square root of `n`, checking if each number is a factor by using the modulo operator (`%`). If it is, both the current factor and its corresponding factor (which is obtained by dividing `n` by `x`) are added to the `factors1` array. After the loop finishes, we add any remaining factors that were found in the middle of the square root range (since they would have been missing from the first part of the loop) and reverse the order of the factors before combining them. Finally, the function returns this list of factors.

The `for...of` loop then calls this function for the numbers 45, 53, and 64.
