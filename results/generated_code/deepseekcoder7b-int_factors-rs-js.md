Here is a JavaScript version of your Rust code:

```js
function main() {
    console.assert(JSON.stringify([1,2,4,5,10,10,20,25,50,100].sort()) === JSON.stringify(factor(100).sort())); // asserts that two expressions are equal to each other
    console.assert(JSON.stringify([1, 101].sort()) === JSON.stringify(factor(101).sort()));
}
main();

function factor(num) {
    let factors = []; // creates a new array for the factors of the number
    
    for (let i = 1; i <= Math.floor(Math.sqrt(num)); i++ ) { 
        if (num % i === 0){
            factors.push(i); // pushes smallest factor to factors
            factors.push(num/i); // pushes largest factor to factors
         }
     }
    return factors.sort((a, b) => a - b);  // sorts the factors into numerical order for viewing purposes
}
```
The main difference between Rust and JavaScript here is that in JavaScript we use `JSON.stringify()` to convert arrays to strings before comparing them. This way we can compare sorted arrays directly without creating additional utility functions. In addition, unlike Rust, JavaScript doesn't have a built-in method for sorting numbers (JavaScript Array's `sort()` function sorts elements alphabetically by default). Therefore, we pass an arrow function `(a, b) => a - b` to the `sort()` function that tells it how to compare numbers.

