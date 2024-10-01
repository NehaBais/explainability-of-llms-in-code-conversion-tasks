Sure! Here's the equivalent JavaScript code for the given problem:
```javascript
function startsWith(container, target) {
 return container.startsWith(target);
}

function endsWith(container, target) {
 return container.endsWith(target);
}

function doesContain(container, target) {
 return container.includes(target);
}
console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello","Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code","ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google","msn"));
```
This code defines three functions: `startsWith`, `endsWith`, and `doesContain`, which perform the same functionality as the C code. The `main` function calls these functions to demonstrate their usage with sample strings.

