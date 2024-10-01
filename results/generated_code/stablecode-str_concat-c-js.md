Here is the JavaScript equivalent of your C code:

```javascript
function sconcat(s1, s2) {
    let s0 = new Array(s1.length + s2.length).join('');

    for (let i = 0; i < s1.length; i++) {
        s0[i] = s1[i];
    }

    for (let i = 0; i < s2.length; i++) {
        s0[s1.length + i] = s2[i];
    }

    return s0.join('');
}

const s = "hello";
console.log(`${s} literal`));
console.log(`${s}${s}"`));

let s2;
s2 = sconcat(s, ' literal'));
console.log(s2);
```
This code defines a function `sconcat()` that concatenates two strings together. The result is stored in an array of characters and then joined back into a single string before being returned by the function.
The main part of the code consists of declaring a string variable `s` with the value "hello", and then using `console.log()` to print out both a string literal that just contains the word "hello", as well as another string literal that is concatenated with the original string `s`. The output will be:

'hello' literal
'helloliteral'

