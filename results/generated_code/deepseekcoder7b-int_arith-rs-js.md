In JavaScript, we don't have the exact equivalent of `env::args()` to get command line arguments. However, you can use process object in Node.js which provides an argument array similar to what C-based languages provide via their command line argument interface. Here is a code conversion:

```javascript
let args = process.argv.slice(2); 

let a  = parseInt(args[0]);   // assuming the first two arguments are integers.
let b  = parseInt(args[1]);   

console.log("sum:              " + (a  + b));
console.log("difference:       " + (a  - b));
console.log("product:          " + (a  * b));

// JavaScript follows the same convention as Rust for division rounding towards zero and different sign handling.
console.log("integer quotient: " + Math.floor(a / b)); // truncates towards zero
console.log("remainder:        " + (a % b));  // If they are different, the result has same sign as first operand in most JavaScript platforms.
```  

In this code, we assume that the user provides two integer arguments when running the script through Node.js command line. We parse these values to integers and perform all required operations. Notice how we use `Math.floor(a / b)` for integer division (i.e., rounding towards zero), which is similar in behavior to Rust's truncating division operation. The remainder operator gives the same sign as its first operand, like in most platforms including JavaScript. If you want different handling based on specific needs or constraints, you need to modify it accordingly.

