function startsWith(container, target) {
  const clen = container.length;
  const tlen = target.length;
  if (clen < tlen) return false;
  return container.substring(0, tlen) === target;
}

function endsWith(container, target) {
  const clen = container.length;
  const tlen = target.length;
  if (clen < tlen) return false;
  return container.substring(clen - tlen) === target;
}

function doesContain(container, target) {
  return container.includes(target);
}

function printMatchLocation(container, target) {
  const index = container.indexOf(target);
  if (index !== -1) {
    console.log(`"${target}" found at index ${index} in "${container}"`);
  } else {
    console.log(`"${target}" not found in "${container}"`);
  }
}

function handleMultipleOccurrences(container, target) {
  let index = container.indexOf(target);
  while (index !== -1) {
    console.log(`"${target}" found at index ${index} in "${container}"`);
    index = container.indexOf(target, index + 1);
  }
}

console.log("Starts with Test ( Hello, Hell ) :", startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code, ode ) :", endsWith("Code", "ode"));
console.log("Contains Test ( Google, msn ) :", doesContain("Google", "msn"));

printMatchLocation("Google", "o"); // Optional: Print location of a single match
handleMultipleOccurrences("Hello World, Hello Universe", "Hello"); // Optional: Handle multiple occurrences
