function startsWith(container, target) {
  return container.startsWith(target);
}

function endsWith(container, target) {
  return container.endsWith(target);
}

function doesContain(container, target) {
  let locations = [];
  for (let i = 0; i <= container.length - target.length; i++) {
    if (container.substring(i, i + target.length) === target) {
      locations.push(i); // for optional requirement of location
    }
  }
  return locations.length > 0 ? true : false; //for multiple occurrences
}

console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
