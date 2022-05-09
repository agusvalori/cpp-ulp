#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int  sumatoria = 0;

    for (int i = 1; i <=10; i++)
    {
        sumatoria+=pow(i,2);
        cout<<i<<"² ="<<pow(i,2)<<endl;
        
    }

    cout<<"La sumatoria es: "<<sumatoria<<endl;
    
   
}
