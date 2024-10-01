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
