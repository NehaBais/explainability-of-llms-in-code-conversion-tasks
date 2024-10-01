import java.io.*;

class CreateFile {
  public static void main(String[] args) throws Exception {
    File f = new File("output.txt");
    boolean b = f.createNewFile(); // creates a new file
    if (b) {
      System.out.println("file created successfully!");
    } else {
      System.out.println("File already exists.");
    }
  }
}
