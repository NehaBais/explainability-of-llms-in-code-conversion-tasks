function startsWith(container, target) {
  let clen = container.length;
  let tlen = target.length;
  if (clen < tlen) {
    return false;
  }
  return container.substring(0, tlen) === target;
}

function endsWith(container, target) {
  let clen = container.length;
  let tlen = target.length;
  if (clen < tlen) {
    return false;
  }
  return container.substring(clen - tlen) === target;
}

function doesContain(container, target) {
  return container.indexOf(target) !== -1;
}

console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
