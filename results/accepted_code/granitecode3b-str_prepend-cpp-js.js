const myStrings = ["prepended to", "my string"];
const prepended = myStrings.reduce((a, b) => a + b, "");
console.log(prepended);
