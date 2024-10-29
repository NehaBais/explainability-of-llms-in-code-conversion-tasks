import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws Exception{
        Path path = Paths.get("./path/to/dir");
        System.out.println(mkdirp(path));
    }
    
    public static boolean mkdirp(Path p) throws Exception {
        if (Files.exists(p)) { // Directory already exists, nothing to do return true
            return true;
        } else { 
          try{
              Files.createDirectories(p); // Create directory and any missing parents
              return true;
           }catch(FileAlreadyExistsException e){
               System.out<｜begin▁of▁sentence｜>.print("Directory already exists");
               return false;
           } catch (IOException ex) { 
                System.err.println("Error creating directory: " + p);
                return false;
           }  
        }
    }
}