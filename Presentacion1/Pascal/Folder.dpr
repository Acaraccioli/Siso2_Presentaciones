Program Folder;
uses
  Windows;

Var
  path:string;
  secreo:bool;
  nombrefolder:string;
  lpPathName: PAnsiChar;

Begin
writeln('Ingrese el path donde quiere crear un folder:');
readln(path);


writeln('Ingrese el nombre de su archivo:');
readln(nombrefolder);
path:=Concat(path,'\',nombrefolder);

lpPathName:= PAnsiChar(AnsiString(path)) ;

secreo:=CreateDirectoryA( lpPathName, 0);

  if(secreo) then  begin
	  writeln('Se creo satisfactoriamente');
  end

	else
  begin
	  writeln('No se pudo crear. Pruebe Nuevamente...');
    end;


end.

