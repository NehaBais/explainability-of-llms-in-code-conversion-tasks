const fs 
= require('fs');
const path 
= require('path');

const FILE_NAME 
= "output.txt";
const DIR_NAME 
= "docs";

function create(root) {
    let filePath = path.join(root, FILE_NAME));
    let dirPath = path.join(root, DIR_NAME));

    try {
        fs.mkdirSync(dirPath);
        fs.writeFileSync(filePath, '');
    } catch (err) {
        console.error(`Error: 
${err}}`));
        process.exit(1));
    }
}

create('.').and(create('/'))))