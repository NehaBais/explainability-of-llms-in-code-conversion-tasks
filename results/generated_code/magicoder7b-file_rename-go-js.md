 In JavaScript, you can use the `fs` module's `renameSync()` method to achieve this task. Here is how the equivalent code would look:

```javascript
const fs = require('fs');

try {
    fs.renameSync('input.txt', 'output.txt');
    fs.renameSync('docs', 'mydocs');
    fs.renameSync('/input.txt', '/output.txt');
    fs.renameSync('/docs', '/mydocs');
} catch (err) {
    console.error(err);
}
```
Please note that the `fs` module is a built-in module in Node.js, but you might need to install it if you're not using Node.js.
Also, keep in mind that this will only work when ran from the root of your filesystem since Node.js's fs module operates relative to the process working directory, which is typically your application's current working directory.
