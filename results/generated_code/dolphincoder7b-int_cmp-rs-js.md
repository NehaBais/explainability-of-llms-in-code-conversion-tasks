To convert the Rust code to JavaScript, we will need to replace the various syntax elements and keywords. Here's what the converted code looks like:
```javascript
let reader = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

reader.question(`Enter two integers separated by a space: `, function (nums) {
    nums = nums.trim().split(" ");
    let [a, b] = nums.map(n => parseInt(n));

    if (a < b) {
        console.log(`${a} is less than ${b}`);
    } else if (a === b) {
        console.log(`${a} equals ${b}`);
    } else if (a > b) {
        console.log(`${a} is greater than ${b}`);
    };

    reader.close();
});
```
Note that the "std" crate isn't supported in JavaScript, so we can't import `io` and `BufRead`. Instead, we will use the built-in Node.js module "readline". Also note that parsing a string to an integer requires the use of `parseInt()` instead of `.parse()`. Finally, Rust's `take(2)` is replaced with JavaScript's array slicing `[0]` and `[1]`, which extracts the first two elements from the `nums` array.
