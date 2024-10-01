'''
import re
def startswith(string,subString):#to check if string starts with substring passed as argument.
    return subString in string and (string[0] == subString[0])

def endswith(string,substring):#to check whether a given string ends with the substring passed as an argument.
    return substring in string and (string[-1]==substring[-1])


def find_all(s,sub):
    l = []
    for m in re.finditer(sub, s):
        l.append(m.start())
    return l

def contains(string,substring):#to check whether substring is present in the string passed as argument.
    if len(set(substring) - set(string)) == 0:
       return True
    else:
        return False    

while (True):
    s=input("enter first String\n")
    st=input("enter Second String\n")
    print("\nString contains the substring from starting \t",startswith(s,st))#to check whether string is starting with substring.
    print("\nString ends with the given string \t",endswith(s,st))#to check whether string ends with a substring passed as argument to function endswith()
    st_ind=find_all(s,st) #function call to find all index where substring is present in main string.
    if (len(st_ind)!=0): 
        print("\nSubstring found at these indices \t",end="")
        for i in st_ind:
            print("{}".format(i), end=" ") #to display all the index where substring is present.
    else:
         print("\nsubstring not found.")
    if contains(s,st):#function call to check whether string conatins subString or not.
        print("\nGiven String contaiin given substring")
    else:
        print("given String doesnot contain given SubString") 

