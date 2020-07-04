#include<iostream>
#include<fstream>
using namespace std;
void enjoy(),learn(),banner();//prototype
int main()
{
    char name[30],ch;
    banner();
    
    cout<<endl<<"Hello ! hope you are fine , can you please enter your name !"<<endl;
    cin.getline(name,30);
    cout<<endl<<"hey then Mr./mrs."<<name<< "am your assistant Zz00mee"<<endl;
    cout<<endl<<"umm, May I help you(y/n)"<<endl;
    
    cin>>ch;
    if(ch=='y')
    {
        enjoy();
    }
    else if(ch=='Y')
    {
        enjoy();
    }
    else if(ch=='n')
    {
        cout<<"I hope you'll need me some time's , you can come to me at any time"<<endl;
        exit(0);
    }
    else if(ch=='N')
    {
        cout<<"I hope you'll need me some time's , you can come to me at any time"<<endl;
        exit(0);
    }
    else
    {
        cout<<"Invalid option!!";
        exit(0);
    }
    return 0;
}
void enjoy()
{
    int op;
    cout<<endl<<"Thanks for choosing our services !";
    cout<<endl<<"1.Learning";
    cout<<endl<<"2.Playing music";
    cout<<endl<<"3.Watch videos";
    cout<<endl<<"4.Others";
    cout<<endl<<"5.Exit";
    cout<<endl<<"Please choose an option :"<<endl;
    cin>>op;
    if(op==1)
    {
        learn();
    }
    else if(op==2)
    {
        cout<<"ERROR 404";
        cout<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if(op==3)
    {
        cout<<"ERROR 404";
        cout<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if(op==4)
    {
        cout<<"ERROR 404";
        cout<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if (op==5)
    {
        cout<<endl<<"I hope you'll need me some time's , you can come to me at any time ";
        exit(0);
    }
    else
    {
        cout<<endl<<"Please choose a correct option";
        exit(0);
    }
    
}
void learn()
{
    int ch;
    cout<<endl<<"What kind of learning do you need ";
    cout<<endl<<"1.Programming";
    cout<<endl<<"2.Science";
    cout<<endl<<"3.Ethical Hacking";
    cout<<endl<<"4.CyberSecurity";
    cout<<endl<<"5.none of the above";
    cout<<endl<<"Choose an option:"<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"ERROR 404"<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if(ch==2)
    {
        cout<<"ERROR 404";
        cout<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if(ch==3)
    {
        cout<<"ERROR 404";
        cout<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if(ch==4)
    {
        cout<<"ERROR 404";
        cout<<endl<<"Program is under maintanence ";
        exit(0);
    }
    else if(ch==5)
    {
        cout<<"ERROR 404";
        cout<<endl<<"I hope you'll need me some time's , you can come to me at any time ";
        exit(0);
    }
    else
    {
        cout<<endl<<"Choose a correct option ";
        exit(0);
    }
}
void banner()
{
    string str;
    fstream file("f1.txt",ios::in);
    while(getline(file,str))
    {
        cout<< str << endl;

    }
    file.close();
}