### Solution

```js
function main() {
	let a = 105;
	let b = 91;
	console.log(`${(a >>> 0).toString(2)}`);
	console.log(`${(b >>> 0).toString(2)}`);

	console.log("a | b  = " + (a | b).toString(2));
	console.log("a & b  = " + (a & b).toString(2));
	console.log("a ^ b  = " + (a ^ b).toString(2));
	console.log("!a     = " + (!a).toString(2));
	console.log("a << 3 = " + (a << 3).toString(2));
	console.log("a >> 3 = " + (a >> 3).toString(2));
}
main();
```

---
## Rust Practice Problem - String Formatting Using the Display Trait
**Difficulty: Easy**
### Instructions
The following code in Rust attempts to print out a message using string formatting with the number `17.986` printed to two decimal places and formatted as US dollars, but it is not working correctly. Fix the bug so that the output looks like this:
```
Cost of item is $17.99
```
### Solution
```
fn main() {
    let item_cost = 17.986;
    println!("Cost of item is ${:.2}", item_cost);
}
```
