Program Example;
uses
  Windows;

Var
  path:string;
  seborro:bool;
  nombrefolder:string;
  lpPathName: PAnsiChar;




Begin
writeln('Ingrese el path completo del folder que quiere borrar:');
readln(path);
lpPathName:= PAnsiChar(AnsiString(path)) ;

seborro:=RemoveDirectoryA( lpPathName);

  if(seborro) then  begin
	  writeln('Se borro satisfactoriamente');
  end

	else
  begin
	  writeln('No se pudo borrar. Pruebe Nuevamente...');
    end;

    readln(path);
end.


