Here is the JavaScript equivalent of your C++ code:

```JavaScript
function generateFactors(n) {
    let factors = [1, n];
    for (let i = 2; i * i <= n; ++i) {
        if (n % i === 0) {
            factors.push(i);
            if (i * i !== n)
                factors.push(n / i);
        }
    }

    factors.sort((a, b) => a - b);
    return factors;
}

const SampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < SampleNumbers.length; ++i) {
    let factors = generateFactors(SampleNumbers[i]));
    console.log(`Factors of ${SampleNumbers[i]}} are: ` + factors.join(', ')));
}
```

This JavaScript code is performing the same operation as your C++ code, which is to compute the factors of a positive integer. 

The generated factors for each number in the SampleNumbers array are then logged to the console. 

Please note that this JavaScript code snippet will work correctly when run in an environment such as Node.js or a web browser's developer tools console.
