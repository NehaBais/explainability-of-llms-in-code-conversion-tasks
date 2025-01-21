The equivalent code in Java would look like this:

```java
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		int[] nums2factor = { 2059, 223092870, 3135, 45 };
		
		for (int i=0; i<nums2factor.length; i++) {
			Factors ftors = new Factors();
			factors(nums2factor[i], ftors);
			
			System.out.println("Factors of " + nums2factor[i] + " are: ");
			for(int j=0; j<ftors.list.size(); j++) {
				System.out.print(ftors.list.get(j) + (j == ftors.list.size() - 1 ? "" : ", "));
			}
			
			System.out.println();
		}
	}

	static class Factors{
		int[] list;
		int count;

		Factors(){
			this.list = new int[0];
			this.count = 0;
		}

		void add(int value){
			list = new int[list.length + 1];
			for (int i=0; i<count; i++){
				list[i] = this.list[i];
			}
			list[count++] = value;
		}
	}
	
	static void factors(int num, Factors ftors) {
		int[] flist = new int[301]; 
        int flix = 0;
        
        for (int dvsr=1; dvsr*dvsr < num; dvsr++) {
            if (num % dvsr != 0) continue;

			ftors.add(dvsr);
			
            ftors.add(num/dvsr);

        }
        
        if (dvsr*dvsr == num) 
        	ftors.add(dvsr);
		
		ftors.count = flix;
    }	
}
```

This Java code does almost the same as your C code. It calculates factors of numbers, and for every integer in the array `nums2factor`, it prints out its factors.
