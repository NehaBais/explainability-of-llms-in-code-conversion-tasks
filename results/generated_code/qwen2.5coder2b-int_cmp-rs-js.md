Sure, here's the JavaScript equivalent of your Rust code:

```javascript
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter the first integer: ', (first) => {
    rl.question('Enter the second integer: ', (second) => {
        const a = parseInt(first, 10);
        const b = parseInt(second, 10);

        if(a < b){
            console.log(`${a} is less than ${b}`);
        } else if(a == b){
            console.log(`${a} equals ${b}`);
        } else if(a > b){
            console.log(`${a} is greater than ${b}`);
        }

        rl.close();
    });
});
```

Note that JavaScript doesn't have the same type system as Rust, so it's necessary to use `parseInt` function to convert input strings into numbers.

Also note that this code expects an integer for both inputs. If you want your user to be able to input non-integer values, you should add some error handling or additional prompts.
