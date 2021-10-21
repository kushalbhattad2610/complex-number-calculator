#include<iostream>
using namespace std;

class complex{
    int real1;
    int imag1;
    int real2;
    int imag2;
    public:
    void add(int a, int b,int c,int d){
        real1=a;
        imag1=b;
        real2=c;
        imag2=d;
        int real= real1+real2;
        int imag= imag1+imag2;
        if(imag>=0){
            cout<<real<<" + "<<imag<<" i"<<endl;
        }else{
            cout<<real<<" - "<<0-imag<<" i"<<endl;
        }
    }

    void sub(int a,int b,int c,int d){
        real1=a;
        imag1=b;
        real2=c;
        imag2=d;
        int real= real1-real2;
        int imag= imag1-imag2; 
        if(imag>=0){
            cout<<real<<" + "<<imag<<" i"<<endl;
        }else{
            cout<<real<<" - "<<0-imag<<" i"<<endl;
        }    
    }

    void multiply(int a,int b,int c,int d){
        real1=a;
        imag1=b;
        real2=c;
        imag2=d;
        int real= real1*real2 - imag1*imag2;
        int imag= real1*imag2 + real2*imag1;
        if(imag>=0){
            cout<<real<<" + "<<imag<<" i"<<endl;
        }else{
            cout<<real<<" - "<<0-imag<<" i"<<endl;
        }
    }

    void divide(int a,int b,int c,int d){
        real1=a;
        imag1=b;
        real2=c;
        imag2=d;
        float real= real1*real2 + imag1*imag2;
        float imag= imag1*real2 - imag2*real1;
        float denomin= real2*real2 + imag2*imag2;
        if(imag>=0){
            cout<<real/denomin<<" + "<<imag/denomin<<" i"<<endl;
        }else{
            cout<<real/denomin<<" - "<<(0-imag)/denomin<<" i"<<endl;
        }
    }
};

int main(){
    int a,b,c,d;
    cout<<"real part of 1st number = ";
    cin>>a;
    cout<<"imag part of 1st number = ";
    cin>>b;
    cout<<"real part of 2nd number = ";
    cin>>c;
    cout<<"imag part of 2nd number = ";
    cin>>d;

    cout<<"First number is = "<<a<<" + "<<b<<" i\n";
    cout<<"Second number is = "<<c<<" + "<<d<<" i\n";

    cout<<"------------MENU------------\n 1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n 5.EXIT\n";
    while(1){
    int ch;
    cout<<"CHOICE = ";
    cin>>ch;
    complex z;
        switch(ch){
            case 1:
            z.add(a,b,c,d);
            break;

            case 2:
            z.sub(a,b,c,d);
            break;

            case 3:
            z.multiply(a,b,c,d);
            break;

            case 4:
            z.divide(a,b,c,d);
            break;

            case 5:
            return 0;

            default:
            cout<<"enter the valid input\n";
            break;
        }
    }
    return 0;
}