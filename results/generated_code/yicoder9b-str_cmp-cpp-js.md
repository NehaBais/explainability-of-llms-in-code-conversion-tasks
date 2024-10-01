Here is the JavaScript version of your C++ code:

```jsx
function demoCompare(a, b, semantically) {
  console.log(`${a} and ${b} are ${(a === b) ? '' : 'not '}exactly ${semantically} equal.`);
  console.log(`${a} and ${b} are ${(a !== b) ? '' : 'not '}${semantically} inequal.`);
  console.log(`${a} is ${(a < b) ? '' : 'not '}${semantically} ordered before ${b}.`);
  console.log(`${a} is ${(a > b) ? '' : 'not '}${semantically} ordered after ${b}.`);
}

// Case-sensitive comparisons.
let a = (process.argv[2] !== undefined ) ? process.argv[2] : "1.2.Foo";
let b = (process.argv[3] !== undefined) ?  process.argv[3] : "1.3.Bar";
demoCompare(a,b,'lexically');

// Case-insensitive comparisons by folding both strings to a common case.
a = a.toLowerCase();
b = b.toLowerCase();
demoCompare(a,b,'lexically'); 

// Numeric comparisons; here 'Number' could be any type for which the
// relevant >> operator is defined, eg int, long, etc.
let numA= Number(a);
let numB = Number(b);
demoCompare(numA,numB,'numerically'); 
```
This JavaScript version uses ES6 default parameters to handle missing command line arguments like the C++ version and utilizes the "Number" function for numeric comparisons. The logic remains the same, making a case-sensitive comparison first, then doing a case-insensitive one by converting both strings to lowercase.
