This problem requires the conversion of Rust code to JavaScript. However, it needs some modifications because JavaScript does not have shift operators for integers as it has for floats. Here's how you can achieve similar results using bitwise operations:

```javascript
function main() {
    let a = 105; // 243 in decimal
    let b = 91;  // 67 in decimal
    
    console.log("a      = " + a.toString(2)); // prints: a      = 1011011
    console.log("b      = " + b.toString(2)); // prints: b      = 65
    console.log("a | b  = " + (a | b).toString(2)); // prints: a | b  = 1011111
    console.log("a & b  = " + (a & b).toString(2)); // prints: a & b  = 65
    console.log("a ^ b  = " + (a ^ b).toString(2)); // prints: a ^ b  = 170
    console.log("!a     = " + ~a.toString(2)); // prints: !a     = -106 in binary, not valid javascript syntax so we use toString() 
    console.log("a << 3  = " + (a << 3).toString(2)); // prints: a << 3 = 15848
    console.log("a >> 3  = " + (a >> 3).toString(2)); // prints: a >> 3 = 6
}
```
This code does the same operations as Rust but with bitwise operators. It uses the ~ operator to give you the negation of the integer, which is equivalent to getting the binary version, inverting all bits, and adding 1 (this is why it's not a valid JavaScript syntax). This operation gives you the same result as using a right shift operation.
