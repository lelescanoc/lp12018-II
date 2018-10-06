#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double>metros;
    double x;
    double menor;
    double mayor;
    string y;
    string unimayor;
    string unimenor;
    int c=1;
    double v=0;
    double vmenor=0;
    double vmayor=0;
    double suma=0;
    double m=0;
    while(cin>>x>>y)
	{
        if(y=="m" || y=="in" || y=="ft" || y=="cm")
		{
            if(x!='#')
			{
                if(y=="m")
				{
                        v=x*100;
                }
                else if(y=="in")
				{
                        v=x*2.54;
                }
                else if(y=="ft")
				{
                        v=x*30.48;
                }
                else if(y=="cm")
				{
                        v=x;
                }
                if(c==1)
				{
                    menor=x;
                    mayor=x;
                    vmenor=v;
                    vmayor=v;
                    unimenor=y;
                    unimayor=y;
                    cout<<menor<<unimenor<<" es el menor hasta ahora"<<endl;
                    cout<<mayor<<unimayor<<" es el mayor hasta ahora"<<endl;
                    c++;
                }
                else
				{
                    if(v<vmenor)
					{
                        menor=x;
                        vmenor=v;
                        unimenor=y;
                        cout<<menor<<unimenor<<" es el menor hasta ahora"<<endl;
                        cout<<mayor<<unimayor<<" es el mayor hasta ahora"<<endl;
                    }
                    if(v>mayor){
                        mayor=x;
                        vmayor=v;
                        unimayor=y;
                        cout<<menor<<unimenor<<" es el menor hasta ahora"<<endl;
                        cout<<mayor<<unimayor<<" es el mayor hasta ahora"<<endl;
                    }
                }
                if(y=="m")
					{
                        m=x;
                    }
                else if(y=="in")
					{
                        m=x*0.0254;
                    }
                else if(y=="ft")
					{
                        m=x*0.3048;
                    }
                else if(y=="cm")
					{
                        m=x*0.01;
                    }
                    metros.push_back(m);
                    sort(metros.begin(),metros.end());
                    for(int i=0;i<metros.size(); i++)
                    {
                        cout<<metros[i]<<" ";
                    }
                    cout<<""<<endl;
                    suma=suma+m;
                    cout<<"La suma es "<<suma<<" en metros"<<endl;
            }
            else{
                return 0;
            }
           }
         else{
            cout<<"No conozco esa unidad"<<endl;
         }
    }
}
