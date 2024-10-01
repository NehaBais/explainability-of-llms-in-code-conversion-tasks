import java.io.File;

public class FileSizeChecker {

    public static void main(String[] args) {
        // Get size of file in current working directory
        long currentDirectorySize = getFileSize("input.txt"));
        System.out.println("Size of 'input.txt' in the current working directory : " + (currentDirectorySize / 1024) + " KB");

        // Get size of file in root directory
        long rootDirectorySize = getFileSize("c:/input.txt"));
        System.out.println("Size of 'input.txt' in the root directory : " + (rootDirectorySize / 1024) + " KB");
    }

    private static long getFileSize(String filePath) {
        File file = new File(filePath);
        return file.length();
    }
}