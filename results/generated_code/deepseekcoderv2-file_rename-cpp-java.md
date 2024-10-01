*/

#include <cstdio>
int main() {
	std::rename("input.txt","output.txt"); //here in current working directory (CWD)
	std::rename("/input.txt","/output.txt"); //in root folder
	
    std::rename("docs", "mydocs");  //here in CWD
    std::rename("/docs", "/mydocs"); //in root
    return 0;
}
