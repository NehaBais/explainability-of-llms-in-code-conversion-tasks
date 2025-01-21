const fs = require("fs");
const path = require("path");

// Create output.txt in the current working directory
fs.writeFile("output.txt", "", (err) => {
  if (err) throw err;
  console.log('The file "output.txt" has been created.');
});

// Create output.txt in the root directory
fs.writeFile("/output.txt", "", (err) => {
  if (err) throw err;
  console.log('The file "/output.txt" has been created.');
});

// Create docs directory in the current working directory
fs.mkdirSync("docs");
console.log(
  'The directory "docs" has been created in the current working directory.',
);

// Create docs directory in the root directory
fs.mkdirSync("/docs", (err) => {
  if (err) throw err;
  console.log('The directory "/docs" has been created.');
});
