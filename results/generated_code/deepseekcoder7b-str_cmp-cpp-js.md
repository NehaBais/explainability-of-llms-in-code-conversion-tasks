Here is the JavaScript version of your C++ code.
```javascript
function demoCompare(a, b, semantically) {
   console.log((a === b ? "" : "not ") + a + " and " + b + " are exactly " + semantically + " equal.");
   
   console.log((a !== b ? "" : "not ") + a + " and " + b + " are " + semantically + " inequal.");
    
   console.log((a < b ? "" : "not ") + a + " is " + semantically + " ordered before " + b + '.');
   
   console.log((a > b ? "" : "not ") + a + " is " + semantically + " ordered after " + b + '.');
}

let arg1 = process.argv[2] || "1.2.Foo";  // Capturing first argument from command line or using default value
let arg2 = process.argv[3] || "1.3.Bar";  // Capturing second argument from command line or using default value

// Case-sensitive comparisons.
demoCompare(arg1, arg2, 'lexically');
   
// Case-insensitive comparisons by converting both strings to uppercase.
demoCompare(arg1.toUpperCase(), arg2.toUpperCase(), 'lexically'); 

// Numeric comparisons; here we are assuming that the input is a string representation of numeric value.
let numA = parseFloat(arg1);  
let numB = parseFloat(arg2);
demoCompare(numA, numB, "numerically");
```
In NodeJS environment, you can run this script using command line by providing two arguments: 
`node filename.js arg1 arg2`

If no argument provided it will consider `arg1` as '1.2.Foo' and `arg2` as '1.3.Bar'. You can replace these with your desired values. It works in a similar way to the C++ code you gave, demonstrating case sensitivity, lexical comparison, inequality etc.

