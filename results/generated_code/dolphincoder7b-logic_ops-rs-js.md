The JavaScript code for the given Rust code is as follows:
```
function booleanOps(a, b){
    console.log(a + " and " + b + " -> " + (a && b));
    console.log(a + " or " + b + " -> " + (a || b));
    console.log(a + " xor " + b + " -> " + (a ^ b));
    console.log("not " + a + " -> " + (!a));
}

function main(){
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false)
}
```
The Rust code defines a function `boolean_ops` to take two logical (boolean) values and outputs the result of "and", "or", and "not" on both arguments. The function uses logical operations (`&&`, `||`, `!`) for each operation. Finally, it calls the `main` function to test the functionality of the code.
The JavaScript equivalent of the Rust code defines a function `booleanOps` that accepts two boolean values as arguments and performs logical operations on them. It then prints the results to the console using `console.log`. The `main` function is called at the end to demonstrate the usage of the `booleanOps` function with different boolean inputs.
