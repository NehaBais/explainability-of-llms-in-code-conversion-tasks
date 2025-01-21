Here is the equivalent JavaScript code for your Python code:

```JavaScript
function factor(n) {
    let factors = [];
    for(let x = 1; x < Math.floor(Math.sqrt(n)); x++) {
        if(n % x === 0) {
            factors.push(x);
            factors.push(n / x);
        }
    }
    let sqrtN = Math.floor(Math.sqrt(n));
    if(sqrtN * sqrtN === n) {
        factors.push(sqrtN);
    }
    factors.sort((a, b) => a - b); // Sort the array in ascending order
    return factors;
}

console.log("45: factors: " + factor(45));
console.log("53: factors: " + factor(53));
console.log("64: factors: " + factor(64));
```

The JavaScript code performs the same functionality as your Python code. It calculates and returns all of a given number's factors in an ascending order array.

You can run this code by adding it to an HTML file with a `<script>` tag or by running it on a Node.js environment.
