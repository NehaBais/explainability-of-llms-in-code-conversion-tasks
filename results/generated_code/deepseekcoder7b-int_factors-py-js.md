In JavaScript you can use the `Math.sqrt` function for square root calculation and Array's `push()` method to add an element at the end of an array. Here is how you could rewrite your Python code into JavaScript:

```javascript
function factor(n) {
    var factors1 = [];
    var factors2 = [];
    for (let x = 1; x <= Math.floor(Math.sqrt(n)); x++){
        if (n % x === 0){
            factors1.push(x);
            factors2.push(n / x);
        }
    } 
    
    var max = factors2[factors2.length-1];
    for (let i=factors1.length - 1; i >= 0; i--){
        if(factors1[i] !== max)
            factors1.push(n / factors1[i]);
    }    
    return factors1;
}

for (var i of [45, 53, 64]) {
    console.log(i + ": factors: "+ factor(i).join());
}
```

This JavaScript code does exactly the same thing as your Python script - it finds all factors for a list of numbers (45, 53 and 64 in this case), prints them out and also works with floating point numbers. It is important to note that the `push()` method adds elements at the end of an array which is why we need to reverse add the second half of our factors for perfect factorization.

