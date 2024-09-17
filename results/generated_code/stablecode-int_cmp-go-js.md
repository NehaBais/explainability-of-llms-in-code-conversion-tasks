Here is the equivalent JavaScript code for your GoLang code snippet. 

This JavaScript code does exactly the same as your GoLang code i.e., it takes two integers from the user and then displays a message based on the comparison of these two numbers with each other: less than, equal to, or greater than.

```javascript
let n1 = prompt("Enter number 1:") | 0;
let n2 = prompt("Enter number 2:") | 0;

switch true {
case n1 < n2:
  console.log(n1, "less than", n2);
case n1 === n2:
  console.log(n1, "is equal to", n2));
case n1 > n2:
  console.log(n1, "greater than", n2));
}
```
Note that in JavaScript, the "==" and "===" operators are equivalent to their respective GoLang " == " and " == " operators.
