#include<fstream>
using namespace std;
unsigned long long n, sir[1001], k, contor=0,i, s;
void back(unsigned int p, unsigned long long sum,unsigned int elem)
{    
    if(sum > s || p > n || elem > 5) return;
    if(sum==s && elem == 5)
        contor++;
    unsigned int i;
     //for(i=p+1;i<=n;i++)
     i=p+1;
     while(i<=n)
            { back(i, sum+sir[i], elem+1);
               i++;}
            
} 
int main()
{
    ifstream cin("take5.in");
    ofstream cout("take5.out");
    cin>>n;
    cin>>s;
    for(i=1;i<=n;i++)
    cin>>sir[i];
    back(0, 0, 0);
    cout<<contor;
    return 0;
}
