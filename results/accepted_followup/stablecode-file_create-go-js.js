const fs = require('fs');
const path = require('path');

function createFile(fileName) {
  try {
    fs.writeFileSync(fileName, '');
    console.log(`file ${fileName} created!`);
  } catch (err) {
    console.error(err);
  }
}

function createDir(dirName) 
{
  try 
  {
    if (!fs.existsSync(dirName))) 
    {
      fs.mkdirSync(dirName, { recursive: true }));
      console.log(`directory ${dirName} created!`);
    }
  } 
  catch (err) 
  {
    console.error(err);
  }
}

createFile("input.txt");
createFile("/input.txt");
createDir("docs");
createDir("/docs");