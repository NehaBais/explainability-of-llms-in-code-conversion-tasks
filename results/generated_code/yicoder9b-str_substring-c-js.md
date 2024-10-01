Here is the JavaScript version of your C code:

```javascript
function substring(s, n, m) {
    if (typeof s !== 'string') return null;
    if (m < 0) m = s.length + m - n + 1;
    if (n < 0 || m < 0) return null;
    s = s.slice(n, s.length);
    return s.substring(0, m);
}
function str_wholeless1(s) {
    return substring(s, 0, s.length - 1);
}
function str_fromch(s, ch, m) {
    var index = s.indexOf(ch);
    if (index === -1) return null;
    return substring(s, index, m);
}
function str_fromstr(s, inStr, m) {
    var index = s.indexOf(inStr);
    if (index === -1) return null;
    return substring(s, index ,m);
}
const TEST = function(A) {
    let result = A();
    if (result == null) console.log('--error--');
    else {
        console.log(result);
        // No need to free the memory in JavaScript since it is handled by the browser/node.js
    }
};
var s = "hello world shortest program";
TEST(() => substring(s, 12, 5)); // get "short"
TEST(() => substring(s, 6, -1)); // get "world shortest program"
TEST(() => str_wholeless1(s));  // "... progra"
TEST(() => str_fromch(s, 'w', 5)); // "world"
TEST(() => str_fromstr(s, "ro", 3)); // "rog"
```
This JavaScript code behaves exactly as the original C code but with some differences due to language features. The JavaScript version does not require manual memory management like in C, thus we don't have to free any memory. Also the `TEST` function here is a bit different from its C counterpart because JavaScript functions can be passed around and called later unlike parameters of C function which are evaluated when the function is invoked.
