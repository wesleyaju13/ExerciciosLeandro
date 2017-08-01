/* 
 * File:   main.cpp
 * Author: Wesley Cristian Santos Almeida
 *
 * Created on 9 de Julho de 2017, 22:47
 */
/* Se (y == 8)
Se (x == 5)
Cout << "@@@@@" << "\ n";
outro
Cout << "#####" << "\ n";
Cout << "$$$$$" << "\ n";
Cout << "&&&&&" << "\ n";
6.1 - y = 8 e x = 5?
6.2 - y = 7 e x = 5?
6.2 - y = 8 e x = 4?
*/

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main (int argc, char** argv) {
int y = 8 ;
int x = 4 ;
	
if (y == 8) {
    if (x == 5) {
	cout << " @@@@@ " << endl;
    }else {
	cout << " ##### " << endl;
    }	
}

        cout << " $$$$$ " << endl;
        cout << " &&&&& " << endl;

    return 0;
}