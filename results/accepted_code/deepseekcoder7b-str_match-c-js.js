function startsWith(container, target) {
  return container.indexOf(target) === 0;
}

function endsWith(container, target) {
  return container.indexOf(target, container.length - target.length) >= 0;
}

function doesContain(container, target) {
  return container.indexOf(target) !== -1;
}

console.log(
  "Starts with Test ( 'Hello', 'Hell' ): " + startsWith("Hello", "Hell"),
);
console.log("Ends with Test ( 'Code', 'ode' ): " + endsWith("Code", "ode"));
console.log(
  "Contains Test ( 'Google', 'msn' ): " + doesContain("Google", "msn"),
);
