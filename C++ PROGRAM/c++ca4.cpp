#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
class diabetes
{
private:
char name[40];
float age;
int wt;
float ht;
char sex;
char s[20];
public:
void welcome_screen(void);
void getvalue(void);
void getlevel1_symptoms(void);
void getlevel2_symptoms(void);
void getlevel3_symptoms(void);
int analyse_symptoms(int);
char display_message(int,int);
};
void diagnosis(void)
{
char c;
cout<<" ********* Welcome to Disease Detection system *********\n";
cout<<"1)(D) to Diabetes\n2)(C) to Cancer\n";
cin>>c;
if(c=='D'||c=='d'){
}
else{
cout<<"This feature will be added in future updates.for this time enjoy diabetes. ;) \n";
getch();
}
}
void diabetes::welcome_screen()
{
cout<<"############Welcome to Diabetes Detection system##############\n";
}
void diabetes::getvalue()
{
cout<<"Patient information\n";
cout<<"Name:\n";
cout<<"Age:\n";
cout<<"Weight:\n";
cout<<"Height:\n";
cout<<"Gender(M/F):\n";
cin>>name;
cin>>age;
cin>>wt;
cin>>ht;
cin>>sex;
getch();
}
void diabetes::getlevel1_symptoms(void)
{
int i=0;//0
cout<< " *** DIABETES DIAGONOSIS FORM *** \n";
cout<<"Appetite (H(HIGH),(L(LOW),/N(NORMAL):\n" ;
cin>>s[i];//1
++i;
cout<<"Thirst H(HIGH),/L(LOW)/N(NORMAL):\n ";
cin>>s[i];//2
++i;
cout<<"Frequency of urination H(HIGH),/L(LOW),/N(NORMAL):\n";
cin>>s[i];//3
++i;
cout<<"Vision (I(IMPAIRMENT),/N(NORMAL)\n";
cin>>s[i];//4
++i;
cout<<"Urine Sugar(P(PASSIVE)/A(ACTIVE)\n;";
cin>>s[i];//5
++i;
cout<<"Ketonurea(P(PASSIVE)/A(ACTIVE)\n";
cin>>s[i];//6
++i;
cout<<"Fasting of blood sugar(H(HIGH)/L(LOW)/N(NOMAL)\n";
cin>>s[i];//7
++i;
cout<<"RBS(H(HIGH)/L(LOW)/N(NORMAL)\n";
cin>>s[i];//8
++i;
cout<<"Family history of diabetes(P(PASSIVE)/A(ACTIVE)\n";
cin>>s[i];//9
++i;
cout<<"OGTT(D(Diabetes)/N(Normal)\n";
cin>>s[i];
++i;
}
int diabetes::analyse_symptoms(int n)
{
int i=0;
int count=0;
int result=0;
switch(n)
{
case 1:
if(s[9]=='D' )//if it ogtt is +ve than it is true
result=-1;
else
if(s[5]=='P'&& s[6]=='P' && s[7]=='H')
result=-1;
else
{
for(i=0;i<10;i++)
{
if(s[i]=='H'||s[i]=='P'||s[i]=='D'||s[i]=='I')
count++;
}
if(count>5)//if it pass more than 5 condition than it is true
result=-1;
}
break;
case 2: if((s[0]=='P')||(s[1]=='P')||(s[2]=='P')||(s[3]=='H')||(s[4]=='P')||(s[5]=='P')||(s[6]=='P'))
result=-1;
else
result=0;
break;
case 3: if((s[0]=='Y')&&(s[1]=='N')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||
(s[0]=='Y')&&(s[1]=='B')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||
(s[0]=='Y')&&(s[1]=='N')&&(s[2]=='M')&&(s[3]=='P')&&(s[4]=='P')||
(s[0]=='Y')&&(s[1]=='N')&&(s[2]=='Y')&&(s[3]=='P')&&(s[4]=='P'))
result=0;
else
result=-1;
break;
default:break;
}
return(result);
}
char diabetes::display_message(int n,int m)
{
char ch;
switch(n)
{
case 1:
switch(m);
{
case 0:
cout<<"Diabetes Negative\n";
cout<<"Press key to quit.\n";
exit(0);
case -1:
cout<<"Diabetes Positive \n";
cout<<"Proceed (Y/N) ?\n";
cin>>ch;
break;
}
case 2:
switch(m)
{
case 0:
cout<<"It is Primary Diabetes.\n";
cout<<"Proceed(Y/N)?\n";
cin>>ch;
break;
case -1:
cout<<"It is Secondary Diabetes.\n";
cout<<"Press key to quit";
getch();
break;
}
break;
case 3:switch(m)
{
case 0:
cout<<"It is insulin diabetes\n";
cout<<"Press key to quit\n";
getch();
break;
case -1:
cout<<"It is not insulin dependent diabetes\n";
cout<<"Press key to quit.\n";
getch();
break;
}
}
return (ch);
}
void diabetes::getlevel2_symptoms()
{
int j=0;
cout<<"Pancreatitis(P/A):\n";
cin>>s[j];
j++;
cout<<"Carcinoma(P/A):\n";
cin>>s[j];
++j;
cout<<"Cirhhosis(P/A):\n";
cin>>s[j];
++j;
cout<<" HCTS (H/L/N):\n";
cin>>s[j];
++j;
cout<<"Hepatitis(P/A):\n";
cin>>s[j];
++j;
cout<<" Hormonal Disorder(P/A):\n";
cin>>s[j];
++j;
cout<<" Pancreatectomy(P/A):\n";
cin>>s[j];
++j;
return;
}
void diabetes::getlevel3_symptoms()
{
int k=0;
cout<<"Age(young(Y)/Middle aged(M)/Elderly(E))\n";
cin>>s[k];
++k;
cout<<"Body Weight(normal(N)/Above normal(A)/Below normal(B)/obese)\n";
cin>>s[k];
++k;
cout<<"Duration(weeks(W)/Months(M)/Years(Y))\n";
cin>>s[k];
++k;
cout<<"Ketonurea(P/A)\n";
cin>>s[k];
++k;
cout<<"Auto Antibodies(P/A)\n";
cin>>s[k];
++k;
return;
}
int main()
{
int disease,n;
string text;
cout<<" ********* Welcome to Medicine Recommandation System *********\n";
cout<<"Please Select the type of Disease\n1.Ance\n2.Allergies\n3.Dandruff\n4.Fever\n5.General Diseases\n6.Disease Detection System"<<endl;
cin>>disease;
switch(disease)
{
case 1:
if(disease==1)
{
cout<<"Please Select the type of Medicine you want\n1.gives smooth, soft, supple and fresh feeling to the skin\n2.It helps to reduce swelling. It can help reduce tenderness and pain when applied on a red, swollen pimple.\n";
cout<<"3.Mild to moderate acne (spots)\n4.RET 0.025% is a prescription medicine that is used to reduce fine wrinkles\n5.treatment of dry scaly skin disorders of the scalp"<<endl;
cin>>n;
if(n==1)
{
ifstream f("1.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==2)
{
ifstream f("2.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==3)
{
ifstream f("3.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==4)
{
ifstream f("4.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==5)
{
ifstream f("5.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
}
break;
case 2:
if(disease==2)
{
cout<<"Please Select the type of Medicine you want\n1.gives smooth, soft, supple and fresh feeling to the skin\n2.It helps to reduce swelling. It can help reduce tenderness and pain when applied on a red, swollen pimple.\n";
cout<<"3.Mild to moderate acne (spots)\n4.RET 0.025% is a prescription medicine that is used to reduce fine wrinkles\n5.treatment of dry scaly skin disorders of the scalp"<<endl;
cin>>n;
if(n==1)
{
ifstream f("6.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==2)
{
ifstream f("7.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==3)
{
ifstream f("8.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==4)
{
ifstream f("9.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==5)
{
ifstream f("10.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
}
break;
case 3:
if(disease==3)
{
cout<<"Please Select the type of Medicine you want\n1.gives smooth, soft, supple and fresh feeling to the skin\n2.It helps to reduce swelling. It can help reduce tenderness and pain when applied on a red, swollen pimple.\n";
cout<<"3.Mild to moderate acne (spots)\n4.RET 0.025% is a prescription medicine that is used to reduce fine wrinkles\n5.treatment of dry scaly skin disorders of the scalp"<<endl;
cin>>n;
if(n==1)
{
ifstream f("11.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==2)
{
ifstream f("12.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==3)
{
ifstream f("13.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==4)
{
ifstream f("14.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==5)
{
ifstream f("15.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
}
break;
case 4:
if(disease==4)
{
cout<<"Please Select the type of Medicine you want\n1.gives smooth, soft, supple and fresh feeling to the skin\n2.It helps to reduce swelling. It can help reduce tenderness and pain when applied on a red, swollen pimple.\n";
cout<<"3.Mild to moderate acne (spots)\n4.RET 0.025% is a prescription medicine that is used to reduce fine wrinkles\n5.treatment of dry scaly skin disorders of the scalp"<<endl;
cin>>n;
if(n==1)
{
ifstream f("16.txt");
while(f.good())
{
text=f.get();
cout<<text;
}
}
else if(n==2)
{
ifstream f("17.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==3)
{
ifstream f("18.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==4)
{
ifstream f("19.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==5)
{
ifstream f("20.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
}
break;
case 5:
if(disease==5)
{
cout<<"Please Select the type of Medicine you want\n1.gives smooth, soft, supple and fresh feeling to the skin\n2.It helps to reduce swelling. It can help reduce tenderness and pain when applied on a red, swollen pimple.\n";
cout<<"3.Mild to moderate acne (spots)\n4.RET 0.025% is a prescription medicine that is used to reduce fine wrinkles\n5.treatment of dry scaly skin disorders of the scalp"<<endl;
cin>>n;
if(n==1)
{
ifstream f("21.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==2)
{
ifstream f("22.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==3)
{
ifstream f("23.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==4)
{
ifstream f("24.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
else if(n==5)
{
ifstream f("25.csv");
while(!f.eof())
{
f>>text;
cout<<"\n"<<text;
}
}
}
break;
case 6:
char ch,choice,cho;
float m;
int n=1;
diagnosis();
diabetes dts;
dts.welcome_screen();
dts.getvalue();
dts.getlevel1_symptoms();
m=dts.analyse_symptoms(n);
choice=dts.display_message(m,n);
choice=toupper(choice);
if(choice=='Y')
{
++n;
dts.getlevel2_symptoms();
m=dts.analyse_symptoms(n);
choice=dts.display_message(n,m);
choice=toupper(choice);
if(choice=='Y')
{
++n;
dts.getlevel3_symptoms();
m=dts.analyse_symptoms(n);
cho=dts.display_message(n,m);
cho=toupper(cho);
if(cho=='Y')
{
++n;
dts.getlevel3_symptoms();
m=dts.analyse_symptoms(n);
choice=dts.display_message(m,n);
}
}
}
break;
}
return 0;
}
