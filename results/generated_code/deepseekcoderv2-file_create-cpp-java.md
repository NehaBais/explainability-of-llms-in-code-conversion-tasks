
## Code in C++:

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    // Create a file named "output.txt" and write "Hello, World!" to it
    ofstream outputFile("output.txt");
    if (outputFile) {
        outputFile << "Hello, World!";
        outputFile.close();
    } else {
        cerr << "Failed to create or open the file." << endl;
    }
    
    // Create a directory named "docs" in the current working directory
    if (mkdir("docs", S_IRWXU | S_IRGRP | S_IROTH) == 0) {
        cout << "Directory created successfully." << endl;
    } else {
        cerr << "Failed to create the directory." << endl;
    }
    
    return 0;
}

## Code in Java:
```java
import java.io.*;
import java.nio.file.*;
public class CreateFileDirectory {
    public static void main(String[] args) throws IOException {
        // Create a file named "output.txt" and write "Hello, World!" to it
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("output.txt"))) {
            writer.write("Hello, World!");
        } catch (IOException e) {
            System.err.println("Failed to create or open the file: " + e.getMessage());
        }
        
        // Create a directory named "docs" in the current working directory
        if (Files.createDirectory(Paths.get("docs")).toFile().exists()) {
            System.out.println("Directory created successfully.");
        } else {
            System.err.println("Failed to create the directory.");
        }
    }
}
```
