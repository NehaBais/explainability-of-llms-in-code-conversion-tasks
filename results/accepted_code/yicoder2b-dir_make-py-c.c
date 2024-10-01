import os

    def mkdirp(path) :
#Check if directory exists, if not then create it.
               if not os.path.isdir(path) :os.makedirs(path) #makes new directories as needed by the path else :print('Directory already exists')