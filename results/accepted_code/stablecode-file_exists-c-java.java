import java.io.File;

public class Main {

    public static void main(String[] args) {
        
        // Check for input.txt file in current working directory
        File file1 = new File("input.txt");
        boolean exists1 = file1.exists();
        System.out.println("Does the file 'input.txt' exist in the current working directory? " + (exists1 ? "Yes" : "No")));
        // Check for input.txt file and docs directory in root of filesystem
        File file2 = new File("/input.txt");
        boolean exists2 = file2.exists();
        File dir3 = new File("/docs");
        boolean exists3 = dir3.exists();
        System.out.println("Does the file '/input.txt' exist in the root directory of the filesystem? " + (exists2 ? "Yes" : "No")));
        System.out.println("Does the directory '/docs' exist in the root directory of the filesystem? " + (exists3 ? "Yes" : "No"))));
    }
}