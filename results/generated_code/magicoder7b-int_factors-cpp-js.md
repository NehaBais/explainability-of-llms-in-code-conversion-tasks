 Here is the JavaScript version of your C++ code:

```JavaScript
function generateFactors(n) {
    let factors = [1, n];
    for (let i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push(i);
            if (i * i != n)
                factors.push(n / i);
        }
    }

    factors.sort((a, b) => a - b);
    return factors;
}

let sampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < sampleNumbers.length; ++i) {
    let factors = generateFactors(sampleNumbers[i]);
    console.log("Factors of " + sampleNumbers[i] + " are: ", ...factors);
}
```
Just like the C++ version, this JavaScript function `generateFactors()` takes a number as input and generates its factors. It then outputs these factors using `console.log()`. We use the spread operator (`...`) to pass each factor of the array individually. The output will be in the format "Factors of [number] are: [factor1, factor2...]".
