 Here is the JavaScript version of your C code:

```javascript
function startsWith(container, target) {
    let clen = container.length;
    let tlen = target.length;
    
    if (clen < tlen)
        return 0;

    return container.substr(0, tlen) === target;
}

function endsWith(container, target) {
    let clen = container.length;
    let tlen = target.length;
    
    if (clen < tlen)
        return 0;

    return container.substr(clen - tlen) === target;
}

function doesContain(container, target) {
    return container.indexOf(target) !== -1;
}

console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello","Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code","ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google","msn"));
```

In this version of the code:
- The string length is determined using `length` property instead of `strlen`. 
- The substrings are sliced using `substr` method.
- The substring comparison is done with strict (`===`) equality operator instead of `strncmp`. 
- The index of target in container is checked for non-equality to `-1`, because if the target does not exist within the string, `indexOf()` returns `-1`.
