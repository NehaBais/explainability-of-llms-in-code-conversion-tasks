const fs = require("fs");

function renameFiles() {
  const err = "File move error";
  try {
    fs.renameSync("input.txt", "output.txt");
    fs.renameSync("docs", "mydocs");
    fs.renameSync("/input.txt", "/output.txt");
    fs.renameSync("/docs", "/mydocs");
  } catch (error) {
    console.log(err, error);
  }
}

// Call the function
renameFiles();
