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