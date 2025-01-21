const fs = require('fs');
const path = require('path');

function createFile(filePath) 
{
    let stream = fs.createWriteStream(filePath);
    stream.on('finish', function() 
    {
        console.log(`Created file at ${filePath}}`));
    });
}

function createDirectory(dirPath) 
{
    fs.mkdir(dirPath, (err) => {
        if (err) 
        {
            return console.error(`Failed to create directory: ${err.message}`));
        }
        console.log(`Created directory at ${dirPath}}`));
    }));
}


// Create the file in current working directory
createFile('./output.txt');


// Create the file in filesystem root
const rootDir = path.parse(__dirname).root;
createFile(`${rootDir}/output.txt`));


// Create directory 'docs' in current working directory 
createDirectory('./docs/'));


// Create directory ' docs ' in filesystem root
createDirectory( `${rootDir}/ docs / ` ));