const fs = require('fs');
const path = require('path');

function renameFile(oldname, newname) 
{
    // File (or directory) with old name
    let filePath = path.resolve(oldname);

    // File (or directory) with new name
    let newFilePath = path.resolve(newname);

    // Rename file (or directory)
    try 
    {
        fs.renameSync(filePath, newFilePath);
        return true;
    } 
    catch (err) 
    {
        console.error(`Could not rename ${oldname} to ${newname}}:`, err);
        return false;
    }
}

function test(type, oldname, newname) 
{
    let success = renameFile(oldname, newname));
    console.log(`The following ${type}} called ${oldname}` + (success ? " was renamed as " : " could not be renamed into ")) + `${newname}}.`);
}

const rootPath = require('path').resolve('/');

test("file", "input.txt", "output.txt");
test("file", path.join(rootPath, 'docs', 'input.txt')), path.join(rootPath, 'docs', 'output.txt')));
test("directory", "docs", "mydocs");
test("directory", path.join(rootPath, 'docs')), path.join(rootPath, 'mydocs')));