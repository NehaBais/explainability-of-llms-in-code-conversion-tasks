const fs = require('fs');

function checkIfExists(file) 
{
  return new Promise((resolve, reject) => 
  {
    fs.stat(file, (err, stats) => 
    {
      if (err) 
      {
        reject(err);
      } 
      else if (stats.isDirectory())) 
      {
        console.log(`${file} is a directory`));
      } 
      else 
      {
        console.log(`${file} is a file`));
      }
    });
  })
}

async function main() 
{
  const files = [
    'input.txt',
    'docs',
    '/input.txt',
    '/docs',
  ];

  for (let i = 0; i < files.length; i++) 
  {
    try 
    {
      await checkIfExists(files[i]));
    } 
    catch (error) 
    {
      console.log(`${files[i]} does not exist`));
    }
  }
}

main();