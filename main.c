/*
+----------------------------------------------------+
|    software written by EclipseSpark                |
|              and converted & completed in C++      |
|                   by TheZero                       |
|                                                    |
|              FrozenBox network                     |
|                         &                          |
|                       HackerNetwork                |
|                                                    |
|      www.frozenbox.tk & www.hackernetwork.tk       |
|                                                    |
|this software is under COPYLEFT license             |
|and you can share, modify and redistribute it       |
|with the same license citing the originals authors  |
|and adding your name to this software               |
+----------------------------------------------------+
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void usage(char *programName)
{
   cout<<"Usage: "<<programName<<" <action> <format> <source> <destination> \n \t\t for multiple sources use \" like: \"<source 1> <source 2> .. <source n>\"\n";
   cout<<"\tactions: compress decompress \n\tformats: tar tar.gz tar.bz2 gz\n";
}

int main(int argc, char *argv[])
{
/*
   argv[0] == program name
   argv[1] == action (compress decompress)
   argv[2] == format
   argv[3] == source[s]
   argv[4] == destination
   

*/
   char* op;

   if(argc < 3)
   {
      usage(argv[0]);
   }
   else if(argv[1] == "compress" || argv[1] == "c")
      {
         if(argc == 4)
         {
          if(argv[2] == "tar")
            {
                string ciao = "tar cf ";
            strcpy(op,ciao.c_str());
            strcat(op,argv[4]);
            strcat(op,argv[3]);
            system(op);
            }
            else if(argv[2] == "tar.gz")
            {
            string ciao = "tar czf ";
            strcpy(op,ciao.c_str());
            strcat(op,argv[4]);
            strcat(op,argv[3]);
            system(op);
            }
            else if(argv[2] == "tar.bz2")
            {
            string ciao = "tar cjf ";
            strcpy(op,ciao.c_str());
            strcat(op,argv[4]);
            strcat(op,argv[3]);
            system(op);
            }
         }
         else if(argv[2] == "gz" || argv[2] == "gzip")
            {
               string ciao = "gzip ";
            strcpy(op,ciao.c_str());
            strcat(op,argv[3]);
            system(op);
            }
         else if(argv[2] == "bz" || argv[2] == "bzip")
         {
            string ciao = "tbzip ";
         strcpy(op,ciao.c_str());
         strcat(op,argv[3]);
            system(op);
         }
         else
         {
            cout<<"!! error !!"<<endl;
         }
      }
      else if(argv[1] == "decompress" || argv[1] == "d")
      {
         if(argv[2] == "tar")
         {
            string ciao = "tar xf ";
         strcpy(op,ciao.c_str());
         strcat(op,argv[3]);
            system(op);
         }
         else if(argv[2] == "tar.gz")
         {
            string ciao = "tar xzf ";
         strcpy(op,ciao.c_str());
         strcat(op,argv[3]);
            system(op);
         }
         else if(argv[2] == "bz" || argv[2] == "bzip")
         {
            string ciao = "bzip ";
         strcpy(op,ciao.c_str());
         strcat(op,argv[3]);
            system(op);
         }
         else if(argv[2] == "gz" || argv[2] == "gzip")
         {
            string ciao = "gzip -d ";
         strcpy(op,ciao.c_str());
         strcat(op,argv[3]);
            system(op);
         }
         else if(argv[2] == "tar.bz2")
         {
         string ciao = "tar xjf ";
         strcpy(op,ciao.c_str());
         strcat(op,argv[3]);
            system(op);
         }
      }
     
      return 0;
}
