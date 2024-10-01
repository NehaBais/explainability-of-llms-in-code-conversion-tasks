public class FileSystemCheck {
  public static void main(String[] args) {
    // Check if "input.txt" exists in the current working directory
    File file = new File("input.txt");
    System.out.println("Input file exists in current directory: " + file.exists());

    // Check if "docs" folder exists in the root of the filesystem
    File rootFolder = new File("/");
    File docsFolder = new File(rootFolder, "docs");
    System.out.println("Docs folder exists in root of filesystem: " + docsFolder.exists());
  }
}
