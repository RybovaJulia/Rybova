#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int a=0;
int x, n, i;  
float s, ch, e, f;
e=0.001;
    n = 1;           
    ch = 1;             
    s = 0;              
                        
    while (ch > e)      
    {                   
        f = 1;          
                        
        for (i = 1; i <= n; i++)
            f *=i; 
            
        ch =x/f;
        s += ch;     
        n++;              
    }
    cout<<s;
}   
return 0;
}
 

