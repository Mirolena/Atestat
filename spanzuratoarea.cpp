#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
char carac[256],cuv[30],ch;
void citire()
{
    cout<<"===========Spanzuratoarea==========="<<'\n';
    cout<<"Player 1: Introduceti cuvantul: ";
    ch=getch();
    int n=0,i,v;
    while(ch!=13) ///codul lui Enter este 13
    {
        if(ch>='a'&&ch<='z')
        {
            cuv[n]=ch;
            carac[n]='_';
            n++;
            cout<<"*";
        }
        ch=getch();
    }
    carac[strlen(cuv)]='\0';
    cout<<"\nPlayer 2: Introduceti litere pana ghiciti cuvantul: "<<endl;
}
void spanzuratoarea(char cuv[256], char carac[256])
{
    char ch;
    int ok=0,i,k=0, o;
    int n=strlen(cuv);
    while(k<6 && ok==0)
    {
        o=0;
        cin>>ch;

        for(i=0; i<strlen(cuv); i++)
        {
            if(cuv[i]==ch)
            {
                carac[i]=ch;
                cout<<carac<<endl;
                o=1;
            }
        }
        if(strcmp(cuv, carac)==0 && k!=6)
        {
            ok=1;
            cout<<"Ai castigat!!"<<" Cuvantul este:"<<carac;
        }

        if(o==0)
        {
            k++;

            {
                if(k==1 )
                {
                    cout<<"._________. " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|       o   o " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|"<<endl;
                    cout<<"|"<<endl;
                    cout<<"|"<<endl;
                    cout<<"|"<<endl;
                    cout<<"|"<<endl;
                    cout<<"----"<<endl;
                    cout<<"Mai incearca"<<"        Vieti: "<<6-k<<endl;
                }
                if(k==2)
                {
                    cout<<"._________. " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|        000 " <<endl;
                    cout<<"|       0   0 " <<endl;
                    cout<<"|        000 " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"----"<<endl;
                    cout<<"Mai incearca: "<<"      Vieti: "<<6-k<<endl;
                }
                if(k==3)
                {
                    cout<<"._________. " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|       o   o " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|       / o " <<endl;
                    cout<<"|      /  o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"----"<<endl;
                    cout<<"Mai incearca: "<<"      Vieti: "<<6-k<<endl;
                }
                if(k==4)
                {
                    cout<<".________. " <<endl;
                    cout<<"|        | " <<endl;
                    cout<<"|       ooo " <<endl;
                    cout<<"|      o   o " <<endl;
                    cout<<"|       ooo " <<endl;
                    cout<<"|        | " <<endl;
                    cout<<"|        o " <<endl;
                    cout<<"|      / o \\"<<endl;
                    cout<<"|     /  o  \\"<<endl;
                    cout<<"|        o " <<endl;
                    cout<<"|        o " <<endl;
                    cout<<"----"<<endl;
                    cout<<"Mai incearca: "<<"      Vieti: "<<6-k<<endl;
                }
                if(k==5)
                {
                    cout<<"._________. " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|       o   o " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|       / o \\"<<endl;
                    cout<<"|      /  o  \\ "<<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|        /  " <<endl;
                    cout<<"|       /   " <<endl;
                    cout<<"----" <<endl;
                    cout<<"Mai incearca "<<"      Vieti: "<<6-k<<endl;
                }

                if(k==6)
                {
                    cout<<"._________. " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|       o   o " <<endl;
                    cout<<"|        ooo " <<endl;
                    cout<<"|         | " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|       / o \\ "<<endl;
                    cout<<"|      /  o  \\ "<<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|         o " <<endl;
                    cout<<"|        / \\ " <<endl;
                    cout<<"|       /   \\" <<endl;
                    cout<<"----"<<endl;
                    cout<<"\n\tSfarsitul jocului! Cuvantul era "<<cuv<<endl;
                }
            }
        }
    }
}

int main()
{
    char joc[51];

    cout<<"Esti gata de un joc? Tasteaza <<da>> ca sa incepi! "<<endl<<endl;

    cin.getline(joc,3);

    if(strcmp(joc,"da")==0)
    {
        citire();
        spanzuratoarea(cuv, carac);
    }
    return 0;

}
