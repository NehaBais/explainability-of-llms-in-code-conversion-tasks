const fs 
= require('fs');
const path 
= require('path');

function renameFile(src, dest) 
{
    try 
    {
        fs.renameSync(src, dest);
        console.log(`Renamed ${src} to ${dest}}`);
    } catch (err) 
    {
        console.error(err);
    }
}

const inputFile 
= 'input.txt';
const outputFile 
= 'output.txt';
const docsDir 
= 'docs';
const myDocsDir 
= 'mydocs';


// Rename in the current working directory
renameFile(inputFile, outputFile);


// Rename in a different working directory
const rootDir 
= '/';
const inputFileRoot 
= path.join(rootDir, inputFile));;
const outputFileRoot 
= path.join(rootDir, outputFile));;
const docsDirRoot 
= path.join(rootDir, docsDir)));
const myDocsDirRoot 
= path.join(rootDir, myDocsDir)));
renameFile(inputFileRoot, outputFileRoot);
renameFile(docsDir, myDocsDir);
renameFile(inputFileRoot, outputFileRoot);
renameFile(docsDirRoot, myDocsDirRoot);