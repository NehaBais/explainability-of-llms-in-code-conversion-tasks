import java.io.*;

// Check if input.txt exists in current working directory
File f1 = new File("input.txt");
if (f1.exists() && !f1.isDirectory()) {
    System.out.println("File exists.");
} else {
    System.out.println("File does not exist or is a directory.");
}

// Check if /input.txt exists in the filesystem root
File f2 = new File("/input.txt");
if (f2.exists() && !f2.isDirectory()) {
    System.out.println("File exists.");
} else {
    System.out.println("File does not exist or is a directory.");
}

// Check if docs directory exists in current working directory
File f3 = new File("docs");
if (f3.exists() && f3.isDirectory()) {
    System.out.println("Directory exists.");
} else {
    System.out.println("Directory does not exist or is a file.");
}

// Check if /docs directory exists in the filesystem root
File f4 = new File("/docs");
if (f4.exists() && f4.isDirectory()) {
    System.out.println("Directory exists.");
} else {
    System.out.println("Directory does not exist or is a file.");
}