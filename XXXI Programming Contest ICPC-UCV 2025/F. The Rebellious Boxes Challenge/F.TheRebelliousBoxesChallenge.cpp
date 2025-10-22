#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main()
{
    int N,M,A,V,T;
    cin>>N>>M>>A>>V;
    cin>>T;
    
    double area_base = (double)N * M;
    double area_ocupada = 0.0;
    
    for(int i=0;i<T;i++){
        int X,Y,D;
        cin>>X>>Y>>D;
        double radio = (double)D / 2.0;
        area_ocupada += numbers::pi * pow(radio, 2);
    }
    
    double area_libre = area_base - area_ocupada;
    double volum = (double)A * area_libre;
    
    if((double)V >= volum){
        cout<<"Overflow";
    }else{
        cout<<"No overflow";
    }
    return 0;
}
