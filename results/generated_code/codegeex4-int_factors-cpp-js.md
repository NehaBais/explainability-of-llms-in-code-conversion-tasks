Here is the equivalent JavaScript code:

```javascript
function generateFactors(n) {
    let factors = [1, n];
    for(let i=2; i*i<=n; ++i) {
        if (n % i === 0) {
            factors.push(i);
            if (i * i !== n)
                factors.push(Math.floor(n / i));
        }
    }

    factors.sort((a, b) => a - b);
    return factors;
}

const sampleNumbers = [3135, 45, 60, 81];

for(let i=0; i<sampleNumbers.length; ++i) {
    let factors = generateFactors(sampleNumbers[i]);
    console.log("Factors of " + sampleNumbers[i] + " are: " + factors.join(" "));
}
```

This JavaScript version does the same thing as your original C++ code. It generates all positive integer factors for each number in a given list, sorts them in ascending order and then logs the result to the console.

Note that in JavaScript arrays have built-in methods `push()` and `sort()`, which respectively add elements to an array and sort it. Also note that when dividing two numbers with the `/` operator, JavaScript will return a floating point number, even if both numbers are integers. Therefore, we use `Math.floor()` to round down to the nearest integer. 

Finally, JavaScript does not have standard methods for outputting formatted text or joining arrays by string with a separator like C++ std::copy and std::ostream_iterator. Instead, we concatenate strings using `+`, and use `join(" ")` to join array elements into a string separated by spaces.
