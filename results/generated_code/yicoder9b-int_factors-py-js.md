Here is the equivalent JavaScript code for your Python function. This will compute the factors of a positive integer just like its Python counterpart.
```javascript
function factor(n) {
    let factors1 = [];
    let factors2 = [];

    for (let x=1, sqrt=Math.floor(Math.sqrt(n)); x<=sqrt; x++) {
        if (n % x === 0) {
            factors1.push(x);
            if (n/x !== x) factors2.push(n / x);  // avoid duplicate factor for perfect squares
        }
    }

    factors1 = factors1.concat(factors2.reverse());
    return factors1;
}

for (let i of [45, 53, 64]) {
    console.log(`${i}: factors: ${factor(i)}`);
}
```
This JavaScript code does essentially the same thing as your Python function - it iterates over every integer up to the square root of n and checks if that number is a factor of n by using the modulus operation (the remainder when n is divided by x). If it is, then x and n/x are added to two separate lists. These lists are combined at the end, with factors2 being reversed first to maintain the original order.

Finally, we iterate over an array containing 45, 53, and 64 and print out the list of their factors using our factor function.
