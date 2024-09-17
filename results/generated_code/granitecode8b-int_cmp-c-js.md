Here's the converted code from C to JavaScript:
```
let input = readline().split(' ');
let a = parseInt(input[0]);
let b = parseInt(input[1]);
if (a < b) {
 console.log(`${a} is less than ${b}`);
} else if (a == b) {
 console.log(`${a} is equal to ${b}`);
} else {
 console.log(`${a} is greater than ${b}`);
}
```
Note: In the JavaScript code, we first read user input using `readline()` and split it into two integers using `split()`. Then, we use `parseInt()` to convert the input strings into integers. Finally, we use conditional statements (`if`, `else if`, and `else`) to compare the two integers and display the appropriate message.
Here are some test cases for each comparison operator:
```
1 2
1 is less than 2

3 3
3 is equal to 3

4 2
4 is greater than 2
```

