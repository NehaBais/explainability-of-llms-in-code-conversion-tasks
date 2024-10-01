The JavaScript version of your Java code is as follows:

```JavaScript
fs.existsSync('docs/input.txt');
fs.existsSync('/docs/input.txt');
```

Note that `fs` is a Node.js module and can be imported using `require("fs")`. Additionally, the `existsSync()` method returns a boolean indicating whether the file exists or not, so you don't need to check for `false`, like in Java.

In JavaScript, the current working directory is determined by Node.js based on where the script was run from. If you're running this code from a different location, make sure to adjust the paths accordingly.
