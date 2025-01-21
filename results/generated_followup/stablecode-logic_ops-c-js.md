The error is caused by an unexpected token ')' at the end of line 2 in the provided JavaScript code. The fix for this issue would be to remove the extra closing parenthesis ')' at the end of line 2. 

Here's the corrected code:

```js
function printLogic(a, b) 
{
    console.log("a and b is " + (a && b)));
    console.log("a or b is " + (a || b)));
    console.log("not a is " + (!a)));
}
```
