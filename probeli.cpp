#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;

int main(int argc, char *argv[]) {
      if (argc > 1) {
    	ifstream f(argv[1]);
    	if(f.is_open()) {
    		int p1,p2;
    		string stroka;
    		//ifstream f(name);
    		stroka.assign((istreambuf_iterator<char>(f.rdbuf())), istreambuf_iterator<char>());
    		cout<<stroka;
    		p1=stroka.find_first_of(" ");
    		p2=stroka.find_last_of(" ");
   	 	if(p1!=p2)
    		{
     			stroka=stroka.substr(p1,(p2-p1));     
        	    	}
		
    	        ofstream f1(argv[2]);
		stroka.erase(0,1);
		f1<<stroka;
    	 	f.close();
       		f1.close();
	    }
    	else {
        	 cout << "Файл не открыт" <<endl;
        	 return 0;
             }
    } else 
        cout<<"Не заданы имена файлов"<<endl;


   
   }

