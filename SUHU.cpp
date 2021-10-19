#include <iostream>

using namespace std;

int main()
{
    cout<<"                                             PERUBAHAN BENDA BENTUK PADA SUHU                      "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int  suhu;
    cout<<"                       Suhu Benda   =  ";
    cin>>suhu;
         if (suhu>0)
         {
             if(suhu>100)
             {
                 cout<<"                       Bentuk Benda = gas";
             }
             else
             {
                 cout<<"                       Bentuk Benad = cair";
             }
         }
         else
         {
             cout<<"                       Bentuk Benda = padat ";
         }
     cout<<endl;
     cout<<endl;
     cout<<endl;
     return 0;
}


