let myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((a, b) => a.concat(b));
console.log(prepended);
