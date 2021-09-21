#include <iostream>
using namespace std;
int main()
    {
     int x[5],a;
      cout<<"number of elements:"<<"\n";
      cin>>a;
      cout<<"enter elements:"<<"\n";
      for(int i=0;i<a;i++)
      {
        cin>>x[i];
      }
      cout<<"you entered:"<<"\n";
      for(int i=0;i<a;i++)
      {
       {
        cout<<x[i]<<"   ";
       }
	   cout<<endl;
      }
      return 0;
    }
