#include<iostream>
#include <string>
#include <vector>
#include<windows.h>
using namespace std;
int main(){
string path;
cout<<"Ingrese el path donde quiere crear un folder: \n";
cin>>path;
string nombrefolder;

cout<<"Ingrese el nombre de su archivo: \n";

cin>>nombrefolder;

string fullpath=path+"\\"+nombrefolder;

  bool secreo= CreateDirectoryA (fullpath.c_str(), NULL);


	if(secreo)
	cout<<"Se creo satisfactoriamente";
	else
	cout<<"No se pudo crear. Pruebe Nuevamente...";
   return 0;


}
 