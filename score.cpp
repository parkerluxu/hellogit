#include<iostream>
#include<cmath>
#include<fstream>
#include<string>

int main(){
using namespace std;
string data;
int total=0;
int boytotal=0;
int girltotal=0;
int boynumber=0;
int girlnumber=0;

struct student{
	string name;
	string sex;
	float score=0;
};
student stuscore[30];
int i;
freopen("score.csv","r",stdin);
string line;
string name,sex,score;
while(getline(cin,line))
{
	i=0;
	stringstream ss(line);
	getline(ss,name,",");
	getline(ss,sex,",");
	getline(ss,score,",");
	sex.erase(0.1);
	score.erase(0,1);
	float sc=stof(score);
	student stuscore[i]=(name,sex,sc);
}
for(int a=0;a<=i;a++)
cout<<stuscore[a].score<<" ";
/*for(int a=0;a<=i;a++)
{
	total+=stuscore[a].score;
}
int average=total/(i+1);

for(int a=0;a<=i;a++)
{
	
	if(stuscore[a].sex=="male") {
		boytotal+=stuscore[a];
		boynumber++;
}
	else continue;

}
int boyaverage=boytotal/boynumber;

for(int a=0;a<=i;a++)
{
	
	if(stuscore[a].sex=="female") {
		girltotal+=stuscore[a];
		girlnumber++;
}
	else continue;

}
int girlaverage=girltotal/girlnumber;

student order[30];
for(int a=0;a<=i;a++)
{
	order[a]=stuscore[a];
}

for(int a=0;a<=i;a++)
{
	for(int b=i;b>0;b--)
	{
		if(order[b].score>order[b-1].score) 
		{
			student x=order[b];
			order[b]=order[b-1];
			order[b-1]=x;
		}
		else continue;
	}
}
cout<<"average of all: "<<average<<endl;
cout<<"average of male: "<<boyaverage<<endl;
cout<<"average of female: "<<girlaverage<<endl;
cout<<"order of their score: "<<endl;
for(int a=0;a<=i;a++)
{
	cout<<order[a].name<<endl;
	cout<<order[a].sex<<endl;
	cout<<order[a].score<<endl;
	cout<<endl;
}
*/
infile.close();
return 0;
}

