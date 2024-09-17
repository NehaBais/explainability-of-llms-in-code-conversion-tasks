Here is the equivalent JavaScript code for your Python requirement. This script computes and displays the factors of a given positive integer.

```JavaScript
function factor(n) {
    let factors1 = [], factors2 = [];

    for (let x = 1; x <= Math.sqrt(n); x++) {
        if (n % x == 0) {
            factors1.push(x);
            factors2.push(Math.floor(n / x)) );
        }
    }
    let x = factors1[factors1.length - 1] + 1;

    if (x * x === n) {
        factors1.push(x);
    }

    factors1 = factors1.concat(factors2.reverse()));
    return factors1;
}

console.log(factor(45)));
console.log(factor(53)));
console.log(factor(64)));
```

This JavaScript script provides the same functionality as your Python code: it computes and displays the factors of a given positive integer. 

The differences between the two codes are minor syntactical changes for different JavaScript environments (like node.js or browser console). The main logic remains the same, which is why the results should be identical in both scripts.
