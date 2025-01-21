let myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((acc, str) => acc + str, "");
console.log(prepended);
