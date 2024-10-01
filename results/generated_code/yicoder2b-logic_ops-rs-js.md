Sure, here is the equivalent JavaScript code for the given Rust code:

```javascript
function boolean_ops(a, b){
  console.log('%s and %s -> %s', a ? 'true' : 'false', b ? 'true' : 'false', (a && b) ? 'true': 'false');
  console.log('%s or %s -> %s', a ? 'true' : 'false', b ? 'true' : 'false', (a || b) ? 'true': 'false');
  console.log('%s xor %s -> %s', a ? 'true' : 'false', b ? 'true' : 'false', (a ^ b) ? 'true': 'false');
  console.log('not %s -> %s', a ? 'true' : 'false', (!a) ? 'true' : 'false');
}

boolean_ops(true, true);
boolean_ops(true, false);
boolean_ops(false, true);
boolean_ops(false, false)
```
This JavaScript code is doing exactly the same thing as the Rust code. It prints out the boolean operations of two input parameters and "not" operation on a parameter.
