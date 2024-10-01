Here is the converted code from C to JavaScript that demonstrates the three types of string matching as required:
1. Determining if the first string starts with second string: `startsWith` function
2. Determining if the first string contains the second string at any location: `doesContain` function
3. Determining if the first string ends with the second string: `endsWith` function
```javascript
function startsWith(container, target) {
 return container.startsWith(target);
}
function doesContain(container, target) {
 return container.includes(target);
}
function endsWith(container, target) {
 return container.endsWith(target);
}
console.log(`Starts with Test ( Hello,Hell ) : ${startsWith("Hello","Hell")}`);
console.log(`Ends with Test ( Code,ode ) : ${endsWith("Code","ode")}`);
console.log(`Contains Test ( Google,msn ) : ${doesContain("Google","msn")}`);
```
The optional requirements of printing the location of the match for part 2 and handling multiple occurrences of a string for part 2 are not implemented in this converted code. If you need these features, please let me know.

