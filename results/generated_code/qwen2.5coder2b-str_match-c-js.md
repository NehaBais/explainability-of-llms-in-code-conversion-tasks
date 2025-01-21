Here is the JavaScript equivalent of your C code:

```javascript

function startsWith(container, target) {
    var clen = container.length,
        tlen = target.length;

    if (clen < tlen)
        return false;
    
    for(var i = 0; i <= clen - tlen ; i++) {
        if(container.substr(i,tlen) == target) 
            return true;
    }
    return false;
}

function endsWith(container, target) {
    var clen = container.length,
        tlen = target.length;

    if (clen < tlen)
        return false;

    for(var i = 0; i <= clen - tlen ; i++) {
        if(container.substring(i,tlen).toLowerCase() == target.toLowerCase()) 
            return true;
    }
    return false;
}

function doesContain(container, target) {
    var result = container.includes(target);
    if(result)
       return true;

    return false;
}

console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello","Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code","ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google","msn"));
```
In JavaScript, the `includes()` method is used to check if a string contains another string. It returns `true` if it does and `false` otherwise.

For the optional requirement of printing location of the match for part 2, we need to handle multiple occurrences of a string by using the `indexOf()` method which returns the index of the first occurrence of the substring in the given string.
  
The `startsWith()` function works by iterating through each character in the container and checking if it matches the target. If it does, it checks if the remaining part of the container is also equal to the target.

The `endsWith()` function does the same as the `startsWith()` function but checks from the end of the container.

The `doesContain()` function uses JavaScript's built-in functionality (`includes()`) which efficiently handles this requirement.
