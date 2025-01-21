 Here's the equivalent JavaScript code for the provided Rust function that computes the factors of a positive integer:

```javascript
function main() {
    console.assert(JSON.stringify(factor(100)) === JSON.stringify([1, 2, 4, 5, 10, 10, 20, 25, 50, 100]), 'Test for 100 failed');
    console.assert(JSON.stringify(factor(101)) === JSON.stringify([1, 101]), 'Test for 101 failed');
}

function factor(num) {
    let factors = []; // creates a new array for the factors of the number

    for (let i = 1; i <= Math.sqrt(num); i++) { 
        if (num % i === 0) {
            factors.push(i); // pushes smallest factor to factors
            if (i !== num / i) { // Avoid adding the square root twice for perfect squares
                factors.push(num / i); // pushes largest factor to factors
            }
        }
    }
    factors.sort((a, b) => a - b); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
}

// Run the main function to perform the tests
main();
```

This JavaScript code defines a `factor` function that computes the factors of a given positive integer, similar to the Rust version. It uses a loop to find all divisors and then sorts them in ascending order before returning the list of factors. The test cases at the end ensure that the function works correctly for both 100 and 101.
