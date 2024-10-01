Here is the converted code in JavaScript:
```
const myStrings = ["prepended to", "my string"];
let prepended = "";
for (const s of myStrings) {
 prepended += s;
}
console.log(prepended);
```
The code above creates a string variable `prepended` and initializes it with an empty string. It then loops through the `myStrings` array, concatenating each string to the `prepended` variable. Finally, it logs the value of `prepended` to the console.

