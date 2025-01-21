Here is the equivalent JavaScript code for your C code:

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

console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));

// Optional requirements:
function findOccurrences(container, target) {
  let occurrences = [];
  let pos = container.indexOf(target);
  
  while(pos !== -1){
    occurrences.push(pos);
    pos = container.indexOf(target, pos + 1);
  }

  return occurrences;
}

console.log("Find All Occurrences ( Google,oo ) : " + findOccurrences("Google", "oo").join(", "));
```
This JavaScript code does the same as your C code. It has two additional functions `findOccurrences` that finds all occurrences of a target string in another string. The results are returned as an array and printed out.
