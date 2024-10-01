import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) throws IOException {
    // Check for regular file in current working directory
    File inputFile = new File("input.txt");
    if (inputFile.exists() && inputFile.isFile()) {
      System.out.println("input.txt is a regular file");
    } else {
      System.out.println("input.txt is not a regular file");
    }

    // Check for directory in current working directory
    File docsDir = new File("docs");
    if (docsDir.exists() && docsDir.isDirectory()) {
      System.out.println("docs is a directory");
    } else {
      System.out.println("docs is not a directory");
    }

    // Check for regular file in root of file system
    File inputRootFile = new File("/input.txt");
    if (inputRootFile.exists() && inputRootFile.isFile()) {
      System.out.println("/input.txt is a regular file");
    } else {
      System.out.println("/input.txt is not a regular file");
    }

    // Check for directory in root of file system
    File docsRootDir = new File("/docs");
    if (docsRootDir.exists() && docsRootDir.isDirectory()) {
      System.out.println("/docs is a directory");
    } else {
      System.out.println("/docs is not a directory");
    }
  }
}
