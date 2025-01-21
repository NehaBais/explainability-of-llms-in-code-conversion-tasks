Here is the equivalent JavaScript code for your C++ code:

```javascript
function generateFactors(n) {
    var factors = [1, n];
    for (var i = 2; i * i <= n; ++i) {
        if (n % i === 0) {
            factors.push(i);
            if (i * i !== n)
                factors.push(n / i);
        }
    }

    factors.sort((a, b) => a - b);
    return factors;
}

var sampleNumbers = [3135, 45, 60, 81];

for (var i = 0; i < sampleNumbers.length; ++i) {
    var factors = generateFactors(sampleNumbers[i]);
    console.log("Factors of " + String(sampleNumbers[i]).padStart(4, ' ') + " are: " + factors.join(' '));
}
```
This JavaScript version has the same functionality as your C++ code. It calculates the factors of a positive integer and prints them out to the console.
