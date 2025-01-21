 Here's the equivalent JavaScript code for the provided C++ code:

```javascript
function generateFactors(n) {
    let factors = [1, n];
    for (let i = 2; i * i <= n; ++i) {
        if (n % i === 0) {
            factors.push(i);
            if (i * i !== n) {
                factors.push(n / i);
            }
        }
    }

    factors.sort((a, b) => a - b);
    return factors;
}

const sampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < sampleNumbers.length; ++i) {
    let factors = generateFactors(sampleNumbers[i]);
    process.stdout.write(`Factors of ${sampleNumbers[i].toString().padStart(4)} are: `);
    console.log(factors.join(' '));
}
```

This JavaScript code defines a function `generateFactors` to compute the factors of a given positive integer, and then it iterates over an array of sample numbers to display their factors in a similar format as the C++ code. The output is printed using Node.js's `process.stdout`.
