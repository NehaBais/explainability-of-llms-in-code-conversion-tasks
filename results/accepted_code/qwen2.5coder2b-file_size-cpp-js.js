// Importing the fs module to handle file system operations in Node.js
const fs = require("fs");

/**
 * Retrieves the size of a file at the specified path.
 * @param {string} filePath - The path to the file.
 */
function getFileSize(filePath) {
  return new Promise((resolve, reject) => {
    fs.stat(filePath, (err, stats) => {
      if (err) {
        reject(err);
      } else {
        resolve(stats.size);
      }
    });
  });
}

// Main function
async function main() {
  try {
    // Handling the file size of 'input.txt' in the current working directory
    const inputFilePath = "./input.txt";
    const inputFileSize = await getFileSize(inputFilePath);
    console.log(`The size of '${inputFilePath}' is ${inputFileSize} bytes.`);

    // Handling the file size of 'input.txt' in the file system root
    const rootInputFilePath = "/input.txt";
    const rootInputFileSize = await getFileSize(rootInputFilePath);
    console.log(
      `The size of '${rootInputFilePath}' is ${rootInputFileSize} bytes.`,
    );
  } catch (error) {
    // Handling any errors that occur during the file size retrieval process
    console.error("Error retrieving file sizes:", error);
  }
}

// Invoking the main function to start the script execution
main();
