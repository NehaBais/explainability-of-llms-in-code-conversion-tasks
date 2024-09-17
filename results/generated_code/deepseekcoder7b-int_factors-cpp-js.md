Here is the JavaScript version of your C++ code. This will compute factors of a positive integer and print them on console.

Please note that in JavaScript, to get the length of an array we use `arrayName.length` instead of `sizeof(arrayName) / sizeof(elementType)` as used in C++. Also, there is no direct equivalent of `EXIT_SUCCESS` in JavaScript, so simply using 0 for success.

```javascript
function generateFactors(n){
    var factors = [1, n];
    for (var i = 2; i * i <= n; ++i) {
        if (n % i === 0) {
            factors.push(i);
            if (i * i !== n) 
                factors.push(Math.floor(n / i));
         }
    }
    return factors.sort((a, b) => a - b);
}

const sampleNumbers = [3135, 45, 60, 81];

for (let i = 0; i < sampleNumbers.length; ++i){
    let factors = generateFactors(sampleNumbers[i]);
    console.log("Factors of " + sampleNumbers[i] + " are: ", factors.join(' '));
} 

// In NodeJS, process ends with exit code 0 on success
process.exit(0);
```

In this JavaScript version, we use `console.log()` to print output and the spread operator (...) is used for arrays in console.log which replaces array elements with individual elements during the printing. The join method is used to convert the array into a string. Also note that we have not included any type definition as JavaScript is dynamically typed language, hence no need of mentioning data types while writing function or variables.

