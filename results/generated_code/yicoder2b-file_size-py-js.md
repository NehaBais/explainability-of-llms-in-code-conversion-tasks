The equivalent code in JavaScript would be:

```javascript
const os = require('os');

const size1 = os.stat('input.txt').size;
const size2 = os.stat('/input.txt').size;
```
Please note that, `os.stat` function returns a Stats object, which has a 'size' property indicating the file size in bytes. 

However, both JavaScript and Python have different ways to get the path of current working directory. If you are using NodeJS or any other environment where paths can be relative to a specific location (like your project folder), you would need to pass the path as an absolute path. On the other hand, if you're using plain JavaScript or any other environment where path is always absolute, then just pass '/input.txt' will suffice.
