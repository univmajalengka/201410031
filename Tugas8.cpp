//menampilkan setengah piramida
#include <iostream> 
using namespace std;
  
int main() {
    int i,j,n;
    cout<<"<>=========================================<>"<< endl;
    cout<<"<>=========================================<>"<< endl;
	  cout<<"<>======><MEMBUAT SETENGAH PIRAMIDA><======<>"<< endl;
	  cout<<"<>=========================================<>"<< endl;
	  cout<<"<>=========================================<>"<< endl;
    cout << "Masukan Baris Setengah Piramida: ";
    cin >> n;
 
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
  
    return 0;
}
