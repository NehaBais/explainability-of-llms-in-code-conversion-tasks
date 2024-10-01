import java.io.*;

public class Main {
  public static void main(String[] args) {
    File f = new File("input.txt");
    if (f.exists()) {
      System.out.println("File exists.");
    } else {
      System.out.println("File does not exist.");
    }

    File rootDirF = new File("/docs");
    if (rootDirF.exists()) {
      System.out.println("Directory in filesystem root exists.");
    } else {
      System.out.println("Directory in filesystem root does not exist.");
    }

    f = new File(System.getProperty("user.dir") + "/input.txt");
    if (f.exists()) {
      System.out.println("File exists in current directory.");
    } else {
      System.out.println("File does not exist in current directory.");
    }

    rootDirF = new File("/" + System.getProperty("user.dir") + "/docs");
    if (rootDirF.exists()) {
      System.out.println("Directory exists in filesystem root of current directory.");
    } else {
      System.out.println("Directory does not exist in filesystem root of current directory.");
    }
  }
}
