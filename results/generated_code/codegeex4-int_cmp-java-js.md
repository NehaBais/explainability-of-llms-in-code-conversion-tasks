Here's how you can convert the given Java code into JavaScript. This implementation will use the prompt function to get the integers from the user, and the console.log function for displaying messages.

```javascript
let nbr1 = parseInt(prompt("Enter first integer:"));
let nbr2 = parseInt(prompt("Enter second integer:"));

if(nbr1<nbr2)
    console.log(`${nbr1} is less than ${nbr2}`);

if(nbr1>nbr2)
    console.log(`${nbr1} is greater than ${nbr2}`);

if(nbr1==nbr2)
    console.log(`${nbr1} is equal to ${nbr2}`);
```

Please note that the `parseInt` function in JavaScript will convert the input prompt into an integer. Also, please note that the backticks `` `...`` ` `` are used for template literals in JavaScript, which allows us to embed expressions inside a string by wrapping them in `${}`. 

Please also remember that this code can be run on modern browsers with their JavaScript engine but is not suitable for Node.js environment as it uses the prompt function which doesn't exist in server side JavaScript and is generally used in browsers only.
