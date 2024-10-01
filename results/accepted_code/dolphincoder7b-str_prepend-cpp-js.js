let myStrings = ["prepended to", "my string"];
const prependedString = myStrings.reduce((a, b) => a + b);
console.log(prependedString);
