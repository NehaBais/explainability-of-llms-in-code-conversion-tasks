const fs = require("fs");

try {
  // Creating empty file "output.txt" in current directory and size of 0 bytes.
  fs.closeSync(fs.openSync("output.txt", "w"));

  // This operation will not work on the root directory due to security restrictions.
  try {
    fs.closeSync(fs.openSync("/output.txt", "w"));
  } catch (err) {
    console.error(`Error: ${err}`);
  }

  // Creating an empty directory "docs" in the current working directory and root.
  fs.mkdirSync("docs"); // Here

  try {
    fs.mkdirSync("/docs"); // Root
  } catch (err) {
    console.error(`Error: ${err}`);
  }
} catch (err) {
  console.error(`Error: ${err}`);
}
