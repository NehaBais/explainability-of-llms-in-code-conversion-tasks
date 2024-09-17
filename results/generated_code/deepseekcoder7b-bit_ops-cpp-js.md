In JavaScript there are no bitwise operators like in C++. However we can use the standard Math object to do similar operations. Here is a simple conversion of your function:

```javascript
function bitwise(a, b) {
   console.log("a and b: ", (a & b)); 
   console.log("a or b: ", (a | b)); 
   console.log("a xor b: ", (a ^ b)); 
   
   // In JavaScript bitwise NOT can be done using ~ operator but it only works on signed integers.
   // So, we use the unary plus to convert a into an unsigned integer before performing bitwise NOT operation.
   console.log("not a: ", (~a+1)); 
   
   // In JavaScript there is no built-in way to do left or right shifts/rotate without using bit manipulation.
   // Here are equivalent of shl and shr that work for positive shift amount, but not arithmetic shift:
   console.log("a shl b: ", (a << b)); 
   console.log("a shr b: ", (a >> b)); 
   
   // Logical right shift is a bitwise operation in JavaScript too.
   let ua = a >>> 0; // convert into unsigned integer
   console.log("a lsr b: ", (ua >> b)); 
}
```
Note that `~` operator gives the bitwise NOT of an integer which means it flips all bits in its binary representation, making the negative number positive and vice-versa but JavaScript doesn't provide direct method to do left rotate or right rotate. To perform these operations we need to manually implement them using other bitwise operators as shown above.

