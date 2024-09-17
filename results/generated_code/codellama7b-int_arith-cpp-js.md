 Here is the code in JavaScript:
```
let a;
let b;
console.log("Please enter two integers:");
a = parseInt(prompt());
b = parseInt(prompt());
console.log(`a+b = ${a + b}`);
console.log(`a-b = ${a - b}`);
console.log(`a*b = ${a * b}`);
console.log(`a/b = ${a / b}, remainder ${a % b}`);
```
Note that in JavaScript, the `/` operator performs floating-point division, which may not always produce the same result as integer division in C++. To obtain integer division in JavaScript, you can use the `Math.floor()` method to round the result towards zero:
```
console.log(`a/b = ${Math.floor(a / b)}, remainder ${a % b}`);
```
