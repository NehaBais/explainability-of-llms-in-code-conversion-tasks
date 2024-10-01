Sure, the equivalent JavaScript code for your Python function would be as follows:

```javascript
function logic(a, b) {
    console.log('a and b:', a && b);
    console.log('a or b:', a || b);
    console.log('not a:', !a);
}
```
The "and" operator in JavaScript returns the first argument if it's false, otherwise it returns the second one. The "or" operator also returns the first truthy value, or the last one otherwise. The "!" operator is used to negate a boolean value.
