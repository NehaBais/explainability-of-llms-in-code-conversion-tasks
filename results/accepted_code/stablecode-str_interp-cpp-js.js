let original = "Mary had a X lamb.";
let toBeReplaced = "X";
let replacement = "little";

let newString = original.replace(
  original.indexOf(toBeReplaced),
  toBeReplaced.length,
  replacement,
);

console.log("String after replacement: ", newString);
