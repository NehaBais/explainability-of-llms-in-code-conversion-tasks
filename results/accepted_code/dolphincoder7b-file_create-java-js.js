let fs = require("fs"); // Importing file system module
const path = require("path"); // Importing path module for creating directories
try {
  if (!fs.existsSync("output.txt"))
    // Checking if output.txt exists
    fs.writeFileSync("output.txt", ""); // Creating output.txt if it doesn't exist

  if (!fs.existsSync(path.join("/", "output.txt")))
    // Checking if /output.txt exists
    fs.writeFileSync(path.join("/", "output.txt"), ""); // Creating /output.txt if it doesn't exist

  if (!fs.existsSync("docs"))
    // Checking if docs directory exists
    fs.mkdirSync("docs"); // Creating docs directory if it doesn't exist

  if (!fs.existsSync("/docs"))
    // Checking if /docs directory exists
    fs.mkdirSync("/docs"); // Creating /docs directory if it doesn't exist
} catch (err) {
  console.error(err); // Error handling
}
