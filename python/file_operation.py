import os 
import shutil

print("File Opeations") 
print("1.Creation of new file") 
print("2.Reading the data from file") 
print("3.Delete the file") 
print("4.Rename the file") 
print("5.Copy the file")
print("6.List the files in directories") 
print("7.Display the current working directory") 
print("8.Appending/ Writing the content to the file") 

fo = open("aaa.txt", "w")
fo.close()

c = int(input("Enter your choice: ")) 

if(c==1):
 fo = open("sample.txt", "w") 
 print("sample.txt file created successfully !") 
 fo.write("Python is a interpreter Language.") 
 fo.close()

elif(c==2):
     fo = open("sample.txt", "r") 
     str = fo.read()
     print("Content of file is : ", str) 
     fo.close()

elif(c==3):
     os.remove('sample.txt') 
     print("File deleted successfully") 

elif(c==4):
     shutil.move('aaa.txt', 'bbb.txt') 
     print("File renamed successfully") 
elif(c==5):
     shutil.copy('bbb.txt', 'D:\\Python') 
     print("File copies successfully") 
elif(c==6):
 filepath = os.listdir('.') 
 print(filepath) 

elif(c==7):
 pwd = os.getcwd()
 print(pwd) 

elif(c==8):
 fo = open("sample.txt", "w")
 fo.write("Python is high level general-purpose language.") 
 print("File append successfully")
 fo.close()
