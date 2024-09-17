Here is the equivalent JavaScript code for your Golang program:

```javascript
let n1 = prompt('Enter number: ');
let n2 = prompt('Enter number: ');

n1 = parseInt(n1);
n2 = parseInt(n2);

if (n1 < n2) {
    console.log(`${n1} less than ${n2}`);
} else if (n1 == n2) {
    console.log(`${n1} equal to ${n2}`);
} else {
    console.log(`${n1} greater than ${n2}`);
}
```

The JavaScript code does the same thing as your Golang program: it gets two integers from the user, then checks if the first integer is less than, equal to, or greater than the second integer. It uses console log for printing messages and prompt function to get user inputs. Note that JavaScript doesn't have a built-in equivalent of Go's Scan function for reading user input. For this, we use `prompt` function which pops up a dialog box to let the user enter information.
