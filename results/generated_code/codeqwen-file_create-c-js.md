In JavaScript, the equivalent code would be:

```javascript
var fs = require('fs');

// Create an empty file with 0640 permissions in "here" (current working directory)
fs.openSync('./output.txt', 'wx+', parseInt("0640", 8));

// Create an empty directory with 0750 permissions in "/"
fs.mkdirSync('/docs', parseInt('0750', 8));

// Create another empty file with 0640 permissions in "/" (filesystem root)
fs.openSync('/output.txt', 'wx+', parseInt("0640", 8));

// Create another empty directory with 0750 permissions in "/docs"
fs.mkdirSync('/docs/docs', parseInt('0750', 8));
```
This JavaScript code creates two files and one directory, then again it creates two more directories within the 'docs' directory. Note that "parseInt('0640', 8)" is used to convert the string '0640' from base-10 to base-8 (octal). It is necessary because fs module in Node.js requires the permissions as a number, not as a string.
