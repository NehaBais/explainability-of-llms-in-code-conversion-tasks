This is the JavaScript version of your Golang code:

```js
function main() {
    let s = "ABCDEFGH";
    let n = 2, m = 3;

    // for reference
    console.log("Index:", "01234567");
    console.log("String:", s);
    // starting from n characters in and of m length
    console.log(`Start ${n}, length ${m}: ${s.substring(n, n + m)}`);
    // starting from n characters in, up to the end of the string
    console.log(`Start ${n}, to end: ${s.slice(n)}`);
    // whole string minus last character
    console.log(`All but last: ${s.slice(0, s.length - 1)}`);
    // starting from a known character within the string and of m length
    let dx = s.indexOf('D');
    console.log(`Start 'D', length ${m}: ${s.substring(dx, dx + m)}`);
    // starting from a known substring within the string and of m length
    let sx = s.indexOf('DE');
    console.log(`Start "DE", length ${m}: ${s.substring(sx, sx + m)}`);
}
```
Please note that JavaScript indexes start at 0. The substring function is inclusive of the first index and exclusive of the second one. Slice function is similar to Python's but it does not support non-integer values for indices.
