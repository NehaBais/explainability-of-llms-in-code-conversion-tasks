const fs = require("fs");

function main() {
  const err = "File move error";
  try {
    fs.renameSync("input.txt", "output.txt");
    fs.renameSync("docs", "mydocs");
    fs.renameSync("/input.txt", "/output.txt");
    fs.renameSync("/docs", "/mydocs");
  } catch (err) {
    console.error(err);
  }
}
