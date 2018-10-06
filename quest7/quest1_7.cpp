
#include <iostream>

using namespace std;

int main()
{
    double x;
    double y;
    while(cin>>x>>y){
            if(x!='#'||y!='#'){
                cout<<x<<" "<<y<<endl;
                if(x<y){
                    cout<<x<<" es el minimo "<<endl;
                    cout<<y<<" es el maximo "<<endl;
                    if(y-x<=1.0/100){
                    cout<<"son casi iguales"<<endl;
                }
                }
                else if(y<x){
                    cout<<y<<" es el minimo "<<endl;
                    cout<<x<<" es el maximo "<<endl;
                    if(x-y<=(1.0/100)){
                    cout<<"son casi iguales"<<endl;
                    }
                }
                else{
                    cout<<"son iguales"<<endl;
                }
            }
            else{
                return 0;
                }

    }

}
