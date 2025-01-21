The error occurs because the variable `indx` is declared twice. The fix is to remove the second declaration.

```js
const indx = s.indexOf(chars);
console.log(s.slice(indx, indx + m));
```
