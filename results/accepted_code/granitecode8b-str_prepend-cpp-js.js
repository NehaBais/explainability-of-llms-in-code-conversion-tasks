const myStrings = ["prepended to", "my string"];
let prepended = "";
for (const s of myStrings) {
  prepended += s;
}
console.log(prepended);
