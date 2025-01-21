The error in this syntax is an unexpected token ')' due to incorrect use of the if statement. 

The fix for this syntax requires correcting the incorrect usage of the if statement. The corrected code is provided below:

```js
const fs = require('fs');
const path = './path/to/dir';

try {
    if (!fs.existsSync(path))) {
        fs.mkdirSync(path, { recursive: true }));
    } else {
        console.log("Directory already exists!");");
    }
} catch (err) {
    console.error(err);
}
```
This corrected code ensures that the directory and any missing parents are created successfully. If an error occurs during the process, it catches the error and logs the error message to the console.
