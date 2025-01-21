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