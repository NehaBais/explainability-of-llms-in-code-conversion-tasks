let original = "Mary had a X lamb.";
let toBeReplaced = "X";
let replacement = "little";
let newString = original.replace(new RegExp(toBeReplaced, "g"), replacement);
console.log("String after replacement:", newString);
