 Here is the JavaScript version of your code:

```javascript
function bitwise(a, b) {
    console.log("a AND b: ", a & b);
    console.log("a OR b: ", a | b);
    console.log("a XOR b: ", a ^ b);
    console.log("NOT a: ", ~a);
    console.log("a << b: ", a << b); // left shift
    console.log("a >> b: ", a >> b); // arithmetic right shift
    console.log("a >>> b: ", a >>> b); // logical right shift
    console.log("a rol b: ", ((((a << b) & 0xFFFFFFFE) | ((a >> (32 - b)) & 1)))); //rotate left, not available in Javascript so we just make it as per the requirement i.e left rotation on bits of b places and bitwise AND with 2's complement of a to handle negative numbers
    console.log("a ror b: ", ((((a >> b) & 0xFFFFFFFE) | ((a << (32 - b)) & 1)))); //rotate right, not available in Javascript so we just make it as per the requirement i.e right rotation on bits of b places and bitwise AND with 2's complement of a to handle negative numbers
}
```

Please note that JavaScript doesn't have built-in functions for left or right rotates like Java, so I just made up an implementation which works in the similar manner. Also JavaScript handles signed integers differently compared to Java. When we perform bitwise operations on a signed integer, it treats the number as if it were unsigned. Therefore, there is no difference between ~a and ~(a & 0xFFFFFFFF).
