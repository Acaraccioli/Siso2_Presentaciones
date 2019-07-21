#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
  
 WIN32_FIND_DATA data;
 HANDLE file;

string path;
cout<<"Ingrese el path completo del folder que quiere enlistar: \n";
cin>>path;
path+="\\*";

 	file = FindFirstFile(path.c_str(), &data); 
	FindNextFile(file, &data);
   	FindNextFile(file, &data);
   do
   {
      if (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
      {
         cout<<data.cFileName<<endl;
      }
      
   }
   while (FindNextFile(file, &data) != 0);
   
   FindClose(file);
   return 0;
}
