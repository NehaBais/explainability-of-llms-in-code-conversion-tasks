import java.io.File;

public class Main {
    public static void main(String[] args) {
        verifyFileExistence("docs/input.txt");
        verifyFileExistence("/docs/input.txt");
    }

    static void verifyFileExistence(String path) {
        File file = new File(path);
        if (file.exists()) {
            System.out.println("File exists: " + path);
        } else {
            System.out.println("File doesn't exist: " + path);
        }
    }
}