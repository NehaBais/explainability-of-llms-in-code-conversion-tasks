This is the equivalent JavaScript code for the C++ code above. Note that in JavaScript, we use `fs.promises` instead of the `filesystem` namespace and have to import it using `const fs = require('fs').promises`.

Here's the complete JavaScript code:

```javascript
const path = require('path');
const fs = require('fs').promises;

async function mkdirp(dir) {
    dir = path.resolve(dir);

    if (await fs.exists(dir)) {
        return;
    }

    try {
        await fs.mkdir(dir, { recursive: true });
    } catch (err) {
        console.error(`Couldn't create directory '${dir}':`, err);
        throw err;
    }
}

const dir = './path/to/directory';

(async () => {
    try {
        await mkdirp(dir);
        console.log('Directory created successfully');
    } catch (err) {
        console.error(`Error creating directory '${dir}':`, err);
    }
})();
```

For more information on the `fs` module and its methods, you can refer to [the Node.js documentation](https://nodejs.org/api/fs.html).
