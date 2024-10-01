Below is the equivalent JavaScript code for your given C program:

```javascript
function startsWith(container, target) {
    let clen = container.length, tlen = target.length;
    if (clen < tlen) 
        return false;
    return container.substring(0, tlen) === target;
}

function endsWith(container, target) {
    let clen = container.length, tlen = target.length;
    if (clen < tlen) 
        return false;
    return container.slice(-tlen) === target;
}

function doesContain(container, target){
    return container.indexOf(target) !== -1;
}

console.log(startsWith("Hello", "Hell")); // prints: true or false
console.log(endsWith("Code", "ode")); // prints: true or false
console.log(doesContain("Google", "msn")); // prints: true or false
```

This script first checks if the strings are at least as long as the target string. If they're not, it returns false. It then uses substring or slice to check if the beginning of the container is equal to the target. For doesContain, it uses indexOf to see if the target string appears anywhere in the container and returns true or false accordingly.
