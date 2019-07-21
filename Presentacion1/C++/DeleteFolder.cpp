#include<iostream>
#include <string>
#include <vector>
#include<windows.h>
using namespace std;
int main(){
string path;
cout<<"Ingrese el path completo del folder que quiere borrar: \n";
cin>>path;

   bool seborro=RemoveDirectoryA (path.c_str());

	if(seborro)
	cout<<"Se borro satisfactoriamente";
	else
	cout<<"No se pudo borrar. Pruebe Nuevamente...";
	
   return 0;


}
 