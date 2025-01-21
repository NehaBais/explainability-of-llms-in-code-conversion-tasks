using System.IO;

class Program {
  static void Main() {
    // Define paths for input.txt and docs in the current directory
    string currentDirectoryInputPath = "input.txt";
    string currentDirectoryDocsPath = "docs";

    // Define path for input.txt and docs in the root directory
    string rootDirectoryInputPath = "/path/to/root/input.txt";
    string rootDirectoryDocsPath = "/path/to/root/docs";

    // Check if files exist in the current directory
    Console.WriteLine("Checking if " + currentDirectoryInputPath +
                      " exists: " + File.Exists(currentDirectoryInputPath));
    Console.WriteLine("Checking if " + currentDirectoryDocsPath +
                      " exists: " + Directory.Exists(currentDirectoryDocsPath));

    // Check if directories exist in the current directory
    Console.WriteLine("Checking if " + rootDirectoryDocsPath +
                      " exists: " + Directory.Exists(rootDirectoryDocsPath));
  }
}