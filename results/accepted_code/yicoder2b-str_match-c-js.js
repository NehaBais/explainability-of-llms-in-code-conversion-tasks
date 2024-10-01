function startsWith(container, target) {
  let clen = container.length,
    tlen = target.length;
  if (clen < tlen) return false;
  return container.substring(0, tlen) === target;
}

function endsWith(container, target) {
  let clen = container.length,
    tlen = target.length;
  if (clen < tlen) return false;
  return container.slice(-tlen) === target;
}

function doesContain(container, target) {
  return container.indexOf(target) !== -1;
}

console.log(startsWith("Hello", "Hell")); // prints: true or false
console.log(endsWith("Code", "ode")); // prints: true or false
console.log(doesContain("Google", "msn")); // prints: true or false
