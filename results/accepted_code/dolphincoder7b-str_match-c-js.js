function startsWith(container, target) {
  return container.startsWith(target);
}

function endsWith(container, target) {
  const reversedContainer = [...container].reverse().join(""); // reverse the container string
  const reversedTarget = [...target].reverse().join(""); // reverse the target string
  return reversedContainer.endsWith(reversedTarget); // check if reversed container ends with reversed target
}

function doesContain(container, target) {
  return container.includes(target);
}

console.log("Starts with Test ( Hello,Hell ): ", startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ): ", endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ): ", doesContain("Google", "msn"));
