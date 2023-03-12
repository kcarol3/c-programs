#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    char c;

    try {
        file.open("C:\\Users\\Karol\\Documents\\Qt_projekty\\lab9_zad_1\\kod.txt");
        if (file.is_open()){
            while(!file.eof()){
                file.get(c);
                if(c=='/'){
                    if(file.peek()=='/'){
                        file.ignore(256,'\n');
                        cout<<endl;
                        continue;
                    }
                }else {
                 cout<<c;
                }
            }
            file.close();
        } else{
            char msg[] = "Blad otwierania pliku";
            throw msg;
       }
    } catch (char* e) {
        cerr << e <<endl;
    }

}
