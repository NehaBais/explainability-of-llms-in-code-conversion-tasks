Here is the JavaScript version of your C code:

```javascript
function startsWith(container, target) {
    return container.indexOf(target) === 0;
}

function endsWith(container, target) {
    return container.indexOf(target, container.length - target.length) >= 0;
}

function doesContain(container, target) {
    return container.indexOf(target) !== -1;
}

console.log("Starts with Test ( 'Hello', 'Hell' ): " + startsWith('Hello','Hell'));
console.log("Ends with Test ( 'Code', 'ode' ): " + endsWith('Code','ode'));
console.log("Contains Test ( 'Google', 'msn' ): " + doesContain('Google','msn'));
```

This script runs the same three tests as your C program and outputs their results to the console: if the first string starts with, ends with or contains the second string respectively. It uses JavaScript String methods like `indexOf` which can be used for all these test cases. For location of match in doesContain function you would need a different method.

