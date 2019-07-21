Program Directory;
uses
  Windows;

Var
  path:string;

  nombrefolder:string;
  lpPathName: PAnsiChar;
  fileHandle: THandle ;
  data: _WIN32_FIND_DATAA;

Begin
writeln('Ingrese el path completo del folder que quiere enlistar:');
readln(path);
path:= Concat(path,'\\*');


lpPathName:= PAnsiChar(AnsiString(path)) ;

   fileHandle:= FindFirstFileA(  lpPathName,data);
   FindNextFileA(fileHandle, data);
   FindNextFileA(fileHandle, data);

  repeat

      if (data.dwFileAttributes = FILE_ATTRIBUTE_DIRECTORY) then
        begin
         writeln(data.cFileName);
        end;

   until (FindNextFileA(fileHandle, data) = false);

   FindClose(fileHandle);

   readln(path);
end.


