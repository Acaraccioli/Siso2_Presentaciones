#include<iostream>
#include <string>
#include <vector>
#include<windows.h>
using namespace std;
int main(){
string path;
string path2;
string path3;
WIN32_FIND_DATA data;
 HANDLE file;
cout<<"Ingrese el path completo del folder que quiere borrar: \n";
cin>>path;
path3=path;
path+="\\*";


file = FindFirstFile(path.c_str(), &data); 
	
   do
   {
      if (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
      {
      	path2="";
      	path2=path3+"\\"+data.cFileName;
         RemoveDirectoryA (path2.c_str());
      }
      
   }
   while (FindNextFile(file, &data) != 0);
   
	FindClose(file);


   bool seborro=RemoveDirectoryA (path3.c_str());

	if(seborro)
		cout<<"Se borro satisfactoriamente";
	else
		cout<<"No se pudo borrar. Pruebe Nuevamente...";
	cin>>path;

   return 0;


}
 