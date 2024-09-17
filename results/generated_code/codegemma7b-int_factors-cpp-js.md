```javascript
function generateFactors(n) {
    const factors = [1, n];

    for (let i = 2; i * i <= n; i++) {
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

for (const number of sampleNumbers) {
    const factors = generateFactors(number);
    console.log(`Factors of ${number} are: ${factors.join(' ')}`);
}
```
