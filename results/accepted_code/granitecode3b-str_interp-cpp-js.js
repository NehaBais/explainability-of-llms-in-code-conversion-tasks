const original = "Mary had a X lamb.";
const toBeReplaced = "X";
const replacement = "little";
const newString = original.replace(
  original.indexOf(toBeReplaced),
  toBeReplaced.length,
  replacement,
);
console.log(`String after replacement: ${newString}`);
