const fs = require("fs");

try {
  // Rename file in current working directory
  fs.renameSync("input.txt", "output.txt");

  // Rename directory in current working directory
  fs.renameSync("docs", "mydocs");

  // For renaming files and directories at the filesystem root you need to use process.env.HOME or __dirname (the directory of the currently executing script)
  fs.renameSync(
    process.env.HOME + "/input.txt",
    process.env.HOME + "/output.txt",
  );
  fs.renameSync(process.env.HOME + "/docs", process.env.HOME + "/mydocs");

  // For renaming directories in the root directory.
  fs.renameSync(__dirname + "/input.txt", __dirname + "/output.txt");
  fs.renameSync(__dirname + "/docs", __dirname + "/mydocs");
} catch (error) {
  console.log("An error occurred: ", error);
}
