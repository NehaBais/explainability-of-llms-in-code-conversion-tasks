# Solution 1:
```java
import java.io.*;  
class CreateFile {  
   public static void main (String [] args) throws Exception{  
      File f=new File("output.txt");    
      boolean b=f.createNewFile();//creates a new file   
      if(b){  
        System.out.println("file created successfully!");  
      } else {  
         System.out.println("File already exists.");  
      }  
    }  
} 
```
# Solution 2:

import java.io.*;  
class CreateDirectory{  
 public static void main (String [] args) throws Exception{  
     File f=new File("docs");  
     boolean b=f.mkdir(); //creates a new directory(folder);  
        if(b){  
          System.out.println("file created successfully!");  
         } else {  
              System.out.println("Directory already exists.");  
             }  
      }  
} 
