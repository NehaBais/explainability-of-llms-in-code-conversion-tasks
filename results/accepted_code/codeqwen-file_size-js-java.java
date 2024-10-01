import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Get the file from the current working directory
    File input1 = new File("input.txt");
    System.out.println("Size of input.txt: " + input1.length());

    // Get the file from the root directory
    File input2 = new File("/input.txt");
    System.out.println("Size of c:/input.txt: " + input2.length());
  }
}
