#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    do{
        cout<<"inserire il numero degli studenti nella classe: "<<endl;
        cin>>n;
        if(n<= 0){
            cout<<"inserire un numero diverso da zerzo"<<endl;
        }
    }while(n==0);

    vector<float> voto_medio(n);
    vector<string> nome(n);
    float media_classe = 0;
    for(int i=0; i < n; i++){
        cout<<"Inserire il nome dello studente:";
        cin>>nome[i];
        do{
            cout<<"Inserire il voto di "<<nome[i]<<":";
            cin>>voto_medio[i];
            if(voto_medio[i]==0){
                cout<<"Inserire un numero diverso da 0"<<endl;
            }
        }while(voto_medio[i]<= 0);
        media_classe = media_classe + voto_medio[i];
    }
    int deb = 0;
    int prom = 0;
    for(int i=0; i < n; i++){
        if(voto_medio[i]<6){
            cout<<"L'alunno "<<nome[i]<<" prenderà il debito con il voto:"<<voto_medio[i]<<endl;
            deb++;
        }
        else{
            cout<<"L'alunno "<<nome[i]<<" verrà promosso con il voto:"<<voto_medio[i]<<endl;
            prom++;
        }
    }
    cout<<"Gli alunni promossi sono:"<<prom<<"; Gli alunni che prenderanno il debito sono:"<<deb<<endl;
    media_classe = media_classe/n;
    cout<<"Il voto medio della classe è: "<<media_classe<<endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
