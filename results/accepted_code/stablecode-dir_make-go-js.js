const fs = require('fs');

function createDirectory(path) {
    try {
        if (!fs.existsSync(path))) {
            fs.mkdirSync(path, { recursive: true }));
            console.log(`Directory ${path} was created successfully`);
        } else {
            console.log(`Directory ${path} already exists`);
        }
    } catch (err) {
        if (err.code === 'ENOENT') {
            fs.mkdirSync(path, { recursive: true }));
            console.log(`Directory ${path} was created successfully`);
        } else throw err;
    }
}