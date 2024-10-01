public class FileChecker {
    public static void printFileSize(String f) {
        if (f == null || f.isEmpty()) {
            System.out.println("Invalid file path.");
            return;
        }
        try {
            File file = new File(f);
            long size = file.length();
            System.out.println("Size of " + f + ": " + size + " bytes");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}

public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
}