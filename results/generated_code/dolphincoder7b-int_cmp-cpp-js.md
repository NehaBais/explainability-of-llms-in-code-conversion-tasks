I have converted the given C++ code to JavaScript. Here is the result:

```javascript
let prompt = require('prompt');
prompt.start();

prompt.get(['a', 'b'], function (err, result) {
    if  (!(result.a || result.b))  {
        console.error("could not read the numbers");
        return;
    }

    // test for less-than
    if  (result.a < result.b)
      console.log(result.a + " is less than " + result.b);

    // test for equality
    if  (result.a === result.b)
      console.log(result.a + " is equal to " + result.b);

    // test for greater-than
    if  (result.a > result.b)
      console.log(result.a + " is greater than " + result.b);
});
```

Note that you will need to install `prompt` package using npm command: `npm install prompt`. 

You can use this code with Node.js runtime environment to test it.
Please replace "a" and "b" variables with numbers of your choice to see the output in your console.

Also, please remember that JavaScript doesn't have a direct equivalent for the C++ input stream (`std::cin`). Instead, it uses a `prompt` module which you can prompt the user for inputs using `prompt.get()`. 

You will be prompted for input (two integers) and the corresponding message will be displayed based on the comparison results.
