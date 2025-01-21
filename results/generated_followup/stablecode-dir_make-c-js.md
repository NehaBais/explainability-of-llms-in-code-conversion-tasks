The error is on line 5 where it says `if (!fs.existsSync(path))) {`. The unexpected token ')' is due to a missing closing parenthesis in the if condition.

The fix for this issue is to add a closing parenthesis after the path variable inside the if condition like so `if (!fs.existsSync(path))){`. 

Here's the corrected code:
```js
const fs = require('fs');

function createDirectory(path) 
{
    try {
        if (!fs.existsSync(path))) {
            fs.mkdirSync(path, { recursive: true }));
        } else {
            console.log(`Directory ${path}} already exists.`);
        }
    } catch (error) {
        console.error(`Error occurred while creating directory: ${error.message}`);
    }
}
```
