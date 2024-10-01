const fs = require("fs");
try {
  // Rename file in current working directory
  fs.renameSync("input.txt", "output.txt");
  console.log("File renamed successfully!");

  //Rename Directory in current working directory
  fs.renameSync("docs", "mydocs");
  console.log("Directory renamed successfully!");

  // Rename file at filesystem root
  fs.renameSync("/input.txt", "/output.txt");
  console.log("Root File renamed successfully!");

  //Rename Directory in filesystem root
  fs.renameSync("/docs", "/mydocs");
  console.log("Root directory renamed successfully!");
} catch (error) {
  console.log("Error occured: " + error.message);
}
