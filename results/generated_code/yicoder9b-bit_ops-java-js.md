Here is the equivalent JavaScript code for your Java program:

```JavaScript
function bitwise(a,b){
  console.log("a AND b: " + (a & b));
  console.log("a OR b: "+ (a | b));
  console.log("a XOR b: "+ (a ^ b));
  console.log("NOT a: " + ~a);
  console.log("a << b: " + (a << b)); // left shift
  console.log("a >> b: " + (a >> b)); // arithmetic right shift
  // JavaScript does not have '>>>', instead we can use >>> or bitwiseNot for logical right shifts
  console.log("a >>> b: " + (a >>> b)); 
  // To implement rotate in JS you may need to create custom functions as Javascripts do not provide built-in functions for that
}
```
Please note, the 'rotateLeft' and 'rotateRight' function is not directly available in JavaScript. You might have to create a separate custom method/function for rotation operation. Also, keep in mind the type of shift operations (arithmetic vs logical) may behave differently with negative numbers depending on your use case.
