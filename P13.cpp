#include <iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;
using std::stoi;
long long int a,c,num;
string str,str1;
long long int p(long long int a,long long int c)
{
   long long int x=0;
    long long int y=0;
    double z=0.;
    double i=0.;
    double j;
    double k=0.;
    while(c!=0)
    {
        y=c%10;
        c=c/10;
        i=pow(a,z);
        j=i*y;
        k=k+j;
        z=z+1;
    }
    //cout<<k<<endl;
    return k;
}

void print(long long int k)
{
    stringstream sss;
    sss<<k;
    sss>>str1;
    string str2[10][5];
    str2[0][0]="*****";
    str2[0][1]="*   *";
    str2[0][2]="*   *";
    str2[0][3]="*   *";
    str2[0][4]="*****";
    str2[1][0]="    *";
    str2[1][1]="    *";
    str2[1][2]="    *";
    str2[1][3]="    *";
    str2[1][4]="    *";
    str2[2][0]="*****";
    str2[2][1]="    *";
    str2[2][2]="*****";
    str2[2][3]="*    ";
    str2[2][4]="*****";
    str2[3][0]="*****";
    str2[3][1]="    *";
    str2[3][2]="*****";
    str2[3][3]="    *";
    str2[3][4]="*****";
    str2[4][0]="*   *";
    str2[4][1]="*   *";
    str2[4][2]="*****";
    str2[4][3]="    *";
    str2[4][4]="    *";
    str2[5][0]="*****";
    str2[5][1]="*    ";
    str2[5][2]="*****";
    str2[5][3]="    *";
    str2[5][4]="*****";
    str2[6][0]="*****";
    str2[6][1]="*    ";
    str2[6][2]="*****";
    str2[6][3]="*   *";
    str2[6][4]="*****";
    str2[7][0]="*****";
    str2[7][1]="    *";
    str2[7][2]="    *";
    str2[7][3]="    *";
    str2[7][4]="    *";
    str2[8][0]="*****";
    str2[8][1]="*   *";
    str2[8][2]="*****";
    str2[8][3]="*   *";
    str2[8][4]="*****";
    str2[9][0]="*****";
    str2[9][1]="*   *";
    str2[9][2]="*****";
    str2[9][3]="    *";
    str2[9][4]="*****";
  
  for (int j=0;j<=4;j++)
  {
    for (int i=0;i<str1.length();i++)
    {
      cout<<str2[str1[i]-'0'][j];
      if(i!=str1.length()-1)
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}

int main()
{   
    int aa=0;
    while(cin>>a>>str)
    {
        if(aa)
        {
          cout<<endl;
        }
        aa=1;
        stringstream ss;
        ss<<str;
        ss>>c;
        int k=p(a,c);
        print(k);
        }
}
