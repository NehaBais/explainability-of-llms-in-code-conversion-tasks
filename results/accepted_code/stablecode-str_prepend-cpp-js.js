let myStrings = ["prepended to", "my string"];
let prepended = myStrings.reduce((acc, cur) => acc + cur, ''), '');
console.log(prepended);