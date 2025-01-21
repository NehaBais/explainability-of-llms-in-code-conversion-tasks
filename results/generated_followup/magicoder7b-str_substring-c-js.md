 The error "SyntaxError: Unexpected token 'in'" is appearing because JavaScript does not allow using reserved words (like "in", "null") as variable names in function parameters. This restriction is put in place to prevent potential bugs and confusion caused by similar looking variables.

A simple fix for this problem would be to rename the parameter from "in" to something else that is more descriptive, like "substring". Here's what your code might look like:

```js
function str_fromstr(s, substring, m) {
  let pos = s.indexOf(substring);
  if (pos === -1) return null;
  else return substring(s, pos , m);
}
```
In this corrected code, "in" has been renamed to "substring".
