#include <iostream>
#include <stdio.h>
using namespace std;

int main(int args, char *argv[])
{
	FILE *pFile;
	char read;

	if(args > 1)
	{
		const char * file = argv[1];
		pFile = fopen(file,"r");
	}
	else
	{
		cout<<"no file"<<endl;
		return 1;
	}
	
	if(pFile == NULL)
		perror("Error abriendo archivo");
	else
	{
		cout<<"##"<<" ";
		for(int i=0;i<10;i++)
		{
			cout<<"0"<<i<<" ";
		}
		
		cout<<endl;
		int columns=0;
		int rows=0;
		cout<<"0"<<rows<<" ";
		
		while(!feof(pFile))
		{
			read = fgetc(pFile);
			if(read != '\0')
			{
				if(columns<10)
				{
					printf("%X", read);
					printf("%c", ' ');
					columns++;
				}else
				{
					printf("%c", '\n');
					columns=0;
					rows++;
					cout<<"0"<<rows<<" ";
				}
			}
		}
	}
	cout<<endl;
	fclose(pFile);
	return 0;
}
