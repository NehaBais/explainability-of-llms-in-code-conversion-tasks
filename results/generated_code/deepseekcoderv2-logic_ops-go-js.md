#### Answer 1:

```javascript
function printLogic(a, b) {
  console.log("a and b is " + (a && b));
  console.log("a or b is " + (a || b));
  console.log("not a is " + (!a));
}
```
#### Answer 2:

Here's the code in JavaScript using TypeScript syntax - 


function printLogic(a: boolean, b: boolean): void {
    console.log(`a and b is ${a && b}`);
    console.log(`a or b is ${a || b}`);
    console.log(`not a is ${!a}`);
}
