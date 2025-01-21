const fs = require('fs');
const path = require('path');

function fileExists(dir, filename) 
{
  let filePath = path.join(dir, filename);

  if (fs.existsSync(filePath))) 
  {
    console.log(`${filePath} exists`));
    
    if (fs.statSync(filePath)).isDirectory()) 
    {
      console.log(' is a directory');
    } 
    else 
    {
      const fileSize = fs.statSync(filePath).size;
      console.log(`with a file size of ${fileSize} bytes.`));
    }
  } 
  else 
  {
    console.log(`${filePath} does not exist.`));
  }
}