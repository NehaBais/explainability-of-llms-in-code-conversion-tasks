Sure! Here's the equivalent JavaScript code:
```
const fs = require('fs');
try {
 fs.mkdirSync('./path/to/dir', { recursive: true });
 console.log('Directory created successfully!');
} catch (error) {
 console.error(error);
}
```
This code uses the `mkdirSync` method from the `fs` module to create the directory and any missing parents recursively. The `recursive` option is set to `true` to ensure that all parent directories are created as well. If an error occurs during the creation of the directory, it will be caught in the `catch` block and logged to the console.

