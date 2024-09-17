 Here is the JavaScript version of your Rust code:

```js
function main() {
    const a = 105;
    const b = 91;
    console.log("a      = " + ("000000" + (a >>> 0).toString(2)).slice(-8));
    console.log("b      = " + ("000000" + (b >>> 0).toString(2)).slice(-8));
    console.log("a | b  = " + ("000000" + ((a || b) >>> 0).toString(2)).slice(-8));
    console.log("a & b  = " + ("000000" + (a & b >>> 0).toString(2)).slice(-8));
    console.log("a ^ b  = " + ("000000" + ((~a) | b >>> 0).toString(2)).slice(-8));
    console.log("!a     = " + ("000000" + (~a >>> 0).toString(2)).slice(-8));
    console.log("a << 3 = " + ("000000" + ((a << 3) >>> 0).toString(2)).slice(-8));
    console.log("a >> 3 = " + ("000000" + ((a >> 3) >>> 0).toString(2)).slice(-8));
}
```
Here are the explanations for each line:

- `a | b` means that we take the bitwise OR of a and b.
- `a & b` is the bitwise AND operation between a and b.
- `~a` is the bitwise NOT of a. 
- The `|`, `&`, and `^` operations are performed with JS like in Rust. `<<` for left shift, `>>` for right shift. We use `(x >>> 0)` to convert x into an unsigned integer, as JS can have different types for numbers (like integers and floats). 
- For the bitwise NOT `~`, we again make sure that it's an unsigned integer with `(~a >>> 0)`.
