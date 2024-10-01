Here is the equivalent JavaScript code for your C++ program: 

```javascript
function generateFactors(n) {
    let factors = [1, n];
    for (let i = 2; i * i <= n; ++i) {
        if (n % i === 0) {
            factors.push(i);
            if (i * i !== n)
                factors.push(n / i);
        }
    }

    return factors.sort((a, b) => a - b);
}

const sampleNumbers = [3135, 45, 60, 81];
for (let i = 0; i < sampleNumbers.length; ++i) {
    let factors = generateFactors(sampleNumbers[i]);
    process.stdout.write(`Factors of ${sampleNumbers[i]} are: `);
    factors.forEach((factor) => process.stdout.write(`${factor} `));
    console.log();
}
```
This JavaScript code generates the factors for numbers in a similar way to your C++ program, and it uses the same sample number array. The main difference is that JavaScript does not have a built-in equivalent of C++'s ostream_iterator, so we use process.stdout.write instead.
