The following is the JavaScript equivalent of the Rust code:

```javascript
function printSubstring(s, n, m) {
    console.log(s.substring(n, n + m));
    console.log(s.substring(n));
    console.log(s.split('').reverse().substring(1).split('').join(''));
    let cpos = s.indexOf('b');
    if (cpos !== -1)
        console.log(s.substring(cpos, cpos + m));

    let spos = s.indexOf("けd");
    if (spos !== -1)
        console.log(s.substring(spos, spos + m));
}

let s = "abc文字化けdef";
printSubstring(s, 2, 3);
```
This code works by using JavaScript's built-in string methods `substring`, `indexOf` and `split`. The function takes a string and the starting index (n) and length (m) as arguments. The first two parameters pass to the `substring` method. The third parameter in the first call passes an end index, which is given by adding m to n. For the fourth and fifth calls, `indexOf` is used to find the position of the characters 'b' and 'けd', respectively. This position is then passed as the start index to `substring`.
