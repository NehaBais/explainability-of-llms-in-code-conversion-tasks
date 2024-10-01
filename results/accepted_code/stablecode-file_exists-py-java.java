import java.io.File;

public class Main {
    public static void main(String[] args) {
        
        // For current working directory
        File fileInDir = new File("input.txt");
        System.out.println(fileInDir.exists() ? "Exists" : "Does not exist"));

        File dirInDir = new File("docs");
        System.out.println(dirInDir.exists() ? "Exists" : "Does not exist"));

        // For file and directory in filesystem root
        File fileInRoot = new File("/input.txt"));
        System.out.println(fileInRoot.exists() ? "Exists" : "Does not exist"));

        File dirInRoot = new File("/docs");
        System.out.println(dirInRoot.exists() ? "Exists" : "Does not exist"));
    }
}