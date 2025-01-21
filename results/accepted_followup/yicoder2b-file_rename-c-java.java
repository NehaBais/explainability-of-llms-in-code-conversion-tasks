public class Main {
  public static void main(String[] args) throws Exception {
    // Rename file "input.txt" to "output.txt" in current directory and filesystem root
    File src = new File("input.txt");
    if (src.renameTo(new File("output.txt"))) {
      System.out.println("File renamed successfully from input.txt to output.txt");
    } else {
      System.out.println("Failed to rename file from input.txt to output.txt");
    }

    // Rename directory "docs" to "mydocs" in current directory and filesystem root
    File srcRoot = new File("docs");
    if (srcRoot.renameTo(new File("mydocs"))) {
      System.out.println("Directory renamed successfully from docs to mydocs");
    } else {
      System.out.println("Failed to rename directory from docs to mydocs");
    }
  }
}
