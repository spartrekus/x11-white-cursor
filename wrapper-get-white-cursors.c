
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>

int main( int argc, char *argv[])
{
    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    if ( argc == 3)
      if ( strcmp( argv[1] , "get" ) ==  0 ) 
      if ( ( strcmp( argv[2] , "cursor" ) ==  0 ) 
      || ( strcmp( argv[2] , "cursors" ) ==  0 ) )
      {
          printf( " GET CURSOR \n" );
          system( " curl https://codeload.github.com/spartrekus/x11-white-cursor/zip/master > file.zip  " );
          if ( fexist( "file.zip" ) == 1 ) 
	    system( " unzip file.zip  ; unzip x11-white-cursor-master/x11-white-cursor-3.zip  " );
          printf( " GET CURSOR - DONE \n" );
	  return 0;
      }
	
	
	    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    if ( argc == 3)
      if ( strcmp( argv[1] , "get" ) ==  0 ) 
      if ( ( strcmp( argv[2] , "crystalwhite" ) ==  0 ) 
      || ( strcmp( argv[2] , "crystal" ) ==  0 ) )
      {
          printf( " GET CURSOR \n" );
          system( " curl https://raw.githubusercontent.com/spartrekus/x11-white-cursor/master/crystalwhite-cursor.zip > file.zip  " );
          if ( fexist( "file.zip" ) == 1 ) 
	    system( " unzip file.zip    " );
          printf( " GET CURSOR - DONE \n" );
	  return 0;
      }
	
	
	
	
   return 0;
}



