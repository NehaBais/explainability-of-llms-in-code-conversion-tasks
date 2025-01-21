const fs = require("fs");

// Check if 'input.txt' exists and is a file
let checkInputTxt = async () => {
  try {
    await fs.accessSync("input.txt");
    console.log("'input.txt' exists and is a file.");
  } catch (error) {
    console.error("'input.txt' does not exist or is not a file.");
  }
};

// Check if '/input.txt' exists and is a file
let checkInputTxtRoot = async () => {
  try {
    await fs.accessSync("/input.txt");
    console.log("'/input.txt' exists and is a file.");
  } catch (error) {
    console.error("'/input.txt' does not exist or is not a file.");
  }
};

// Check if 'docs' directory exists and is a directory
let checkDocsDir = async () => {
  try {
    await fs.accessSync("docs");
    console.log("'docs' directory exists and is a directory.");
  } catch (error) {
    console.error("'docs' directory does not exist or is not a directory.");
  }
};

// Check if '/docs' directory exists and is a directory
let checkDocsDirRoot = async () => {
  try {
    await fs.accessSync("/docs");
    console.log("'/docs' directory exists and is a directory.");
  } catch (error) {
    console.error("'/docs' directory does not exist or is not a directory.");
  }
};

// Call the functions to check the files/directories
checkInputTxt();
checkInputTxtRoot();
checkDocsDir();
checkDocsDirRoot();
