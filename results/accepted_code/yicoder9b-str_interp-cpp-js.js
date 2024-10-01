let original = "Mary had a X lamb.";
let toBeReplaced = "X";
let replacement = "little";

original = original.split(toBeReplaced).join(replacement);
console.log(`String after replacement: ${original}`);
