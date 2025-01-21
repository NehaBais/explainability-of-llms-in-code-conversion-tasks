The error is caused by incorrect usage of `s` inside the padStart method which is not recognized as a placeholder for the number to start padding with zeros from right side. 

Here's the corrected version:
```js
console.log("shr: " + ((a >> b)).toString(2).padStart(16, '0'));
```
The padStart method is used on a string representation of `(a >> b)` which returns a number, so it requires two arguments; the total width of the resulting string and what to pad with. Here we are padding with zeros from left side (start), hence second argument is '0'. 
This will generate a binary string for shifting right operation and ensure that it's always length of 16 bits, padded on left by zeroes if necessary.

