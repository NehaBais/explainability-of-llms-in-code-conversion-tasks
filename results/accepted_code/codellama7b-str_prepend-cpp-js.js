let myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((a, b) => a + b, "");
console.log(prepended);
