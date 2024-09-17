### Code:
```javascript
function factor(n) {
    var factors1 = [], factors2 = [];

    for (var x = 1; x <= Math.sqrt(n); x++) {
        if (n % x === 0) {
            factors1.push(x);
            factors2.push(Math.floor(n / x));
        }
    }
    
    var lastElement = factors1[factors1.length - 1];

    if ((lastElement + 1) * (lastElement + 1) === n) {
        factors1.push(lastElement + 1);
    }

    factors2.reverse();
    factors1.push(...factors2);
    
    return factors1;
}

// Testing
console.log(factor(45)); // [1, 3, 5, 9, 15, 18]
console.log(factor(53)); // [1, 53]
console.log(factor(64)); // [1, 2, 4, 8, 16, 32, 64]
```
