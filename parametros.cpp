#include <iostream>
#include <string>
using namespace std;

int main(int args, char *argv[]){
	if(args > 1)
	{
		string cp(argv[1]);
		if(cp == "-f")
		{
			cout<<"modificador: "<<cp<<endl;
		}
	}
	return 0;
}
