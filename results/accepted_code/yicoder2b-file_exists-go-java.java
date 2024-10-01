import java.io.*;

class Main {
  public static void main(String[] args) {
    try {
      File inputFile = new File("input.txt");
      if (!inputFile.exists()) {
        System.out.println("Input file does not exist: " + inputFile.getAbsolutePath());
      } else if (inputFile.isDirectory()) {
        System.out.println("Input file is a directory : " + inputFile.getAbsolutePath());
      } else {
        System.out.println("Input file : " + inputFile.getAbsolutePath());
      }

      File docsDir = new File("docs");
      if (!docsDir.exists()) {
        System.out.println("Directory does not exist: " + docsDir.getAbsolutePath());
      } else if (docsDir.isDirectory()) {
        System.out.println("Directory is a directory : " + docsDir.getAbsolutePath());
      } else {
        System.out.println("Directory : " + docsDir.getAbsolutePath());
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
