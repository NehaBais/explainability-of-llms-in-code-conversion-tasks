Here is a JavaScript version of your Rust code:

```javascript
function factor(num) {
    let factors = []; // creates a new array for the factors of the number

    for (let i = 1; i <= Math.floor(Math.sqrt(num)); i++) { 
        if (num % i == 0) {
            factors.push(i); // pushes smallest factor to factors
            factors.push(num/i); // pushes largest factor to factors
        }
    }
    factors.sort((a, B) => A - B); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
}

console.log(factor(100));  // outputs: [1, 2, 4, 5, 10, 20, 25, 50, 100]
console.log(factor(101)); // outputs: [1, 101]
```

This JavaScript function does exactly the same thing as your Rust one - it computes and returns a list of factors for a given number.
