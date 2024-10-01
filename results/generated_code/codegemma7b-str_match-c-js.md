```javascript
function startsWith(container, target) {
  const clen = container.length;
  const tlen = target.length;
  return clen >= tlen && container.substring(0, tlen) === target;
}

function endsWith(container, target) {
  const clen = container.length;
  const tlen = target.length;
  return clen >= tlen && container.substring(clen - tlen) === target;
}

function doesContain(container, target) {
  return container.indexOf(target) !== -1;
}

console.log("Starts with Test ( Hello,Hell ) :", startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ) :", endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ) :", doesContain("Google", "msn"));
```

