#include<fstream>
using namespace std;
ifstream cin("elicop.in");
ofstream cout("elicop.out");
int m; //nr de linii
int n; //nr de coloane
int k, i, j, a1, a2, b1, b2, val,l,c,afectat,u, v[105],ct,aux;
bool a[105][105];
int main()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
     for(j=1;j<=n;j++)
        cin>>a[i][j];
    cin>>k;
    for(i=1;i<=k;i++)
       { cin>>a1>>a2>>b1>>b2>>val;
         if(val==1)
          {  if( a1<b1 && a2>b2) {afectat=c=0;
                                  aux=a2;    /* |/  */   
                                               for(j=a1;j<=b1;j++) 
                                              { for(l=b2;l<=aux ;l++) {c++;if(a[j][l]==0) afectat++; }  aux--;}
               
             if(afectat>c/2) {u++;v[u]=i; }  
             if(afectat==0) ct++;             }
               
               
             else  {afectat=c=0;  aux=a2;    /*    \| */        for(j=a1;j<=b1;j++) 
                                                     {for(l=b2;l>=aux;l--) {c++;if(a[j][l]==0) afectat++; } aux++;}
                                                     
                                                  if(afectat>c/2) {u++;v[u]=i; }  
             if(afectat==0) ct++;            
                                                     
                                                     }
           }
         else /*                  */
         {    if(a1<b1 && a2>b2)       {afectat=c=0;
                                  aux=b2;    /*  /| */   
                                               for(j=b1;j>=a1;j--) 
                                              { for(l=a2;l>=aux;l--) {c++;if(a[j][l]==0) afectat++; }  aux++;}
               
             if(afectat>c/2) {u++;v[u]=i; }  
             if(afectat==0) ct++;             }            
         
         else {afectat=c=0;
                                  aux=b2;    /*  |\  */   
                                               for(j=b1;j>=a1;j--) 
                                              { for(l=a2;l<=aux;l++) {c++;if(a[j][l]==0) afectat++; }  aux--;}
               
             if(afectat>c/2) {u++;v[u]=i; }  
             if(afectat==0) ct++;             }   
         
         
         
         
             }       
       
       } //forul MARE
    //Afisare
    cout<<ct<<"\n"<<u<<" ";
    for(i=1;i<=u;i++)
    cout<<v[i]<<" ";
    
    return 0;
}
