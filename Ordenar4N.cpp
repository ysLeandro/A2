#include<iostream>
using namespace std;

int main()
{
        float n1,n2,n3,n4,p1,p2,p3,p4,tmp,ord=0;
        cout<<"ingrese cuatro numeros n1 n2 n3 n4: ";
        cin>>n1>>n2>>n3>>n4;
        do{
                if(n1<n2){
                        p1=n1;
                        if(n2<n3){
                                p2=n2;
                                if(n3<n4){
                                        p3=n3;
                                        p4=n4;
                                        ord=1;
                        }else{
                tmp=n3;
                n3=n4;
                n4=tmp;

                        }

                        }else{

                        tmp=n2;
                        n2=n3;
                        n3=tmp;

                        }

                }else{
                tmp=n1;
                n1=n2;
                n2=tmp;

                }
        }while(ord==0);

                cout<<"Los numeros ordenados son : "<<p1<<","<<p2<<","<<p3<<","<<p4<<endl;
return 0;
}
