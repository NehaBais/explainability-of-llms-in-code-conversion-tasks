In JavaScript, you can achieve this by using template literals to concatenate strings and converting the string to a new variable with `toString()`. The following code accomplishes the task:

```javascript
function main() {
    let s = "hello".toString();
    console.log(s);

    let s1 = `${s} world`;
    console.log(s1);
}
```

This JavaScript program will create two variables, `s` and `s1`. It initializes `s` with the string `"hello"`, logs it to the console, then creates a new variable `s1` which is the concatenation of `s` and the string literal `" world"`. Finally, it logs `s1` to the console as well.
