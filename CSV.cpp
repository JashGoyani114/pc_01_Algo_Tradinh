#include<bits/stdc++.h>


typedef long long ll;

using namespace std;
int main(){
   
string fname="April 22 NIFTY.csv";
vector<vector<string> > content;
vector<string> row;
string line, word;

fstream file (fname, ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		cout<<"Could not open the file\n";

	float arr[20];
	for(int i=1;i<content.size();i++){
		string a="";
		int b=0;
		float d;
		for(int j=5;j<13;j++){
			a+=content[i][4][j];
		}
		d=stof(a);
		arr[i]=d;
	}




	float arr3[20];
	arr3[0]=0;
	arr3[1]=0;
	arr3[2]=0;
	for(int i=3;i<content.size();i++){
		float sum=0;
		sum=arr[i]+arr[i-1]+arr[i-2];
		sum/=3;
		arr3[i]=sum;
	}
	// for(int i=3;i<20;i++){
	// 	cout<<fixed<<setprecision(2)<<arr3[i]<<endl;
	// } to print the moving average 

	float arr5[20];
	arr5[0]=0;
	arr5[1]=0;
	arr5[2]=0;
	arr5[3]=0;
	arr5[4]=0;
	for(int i=5;i<content.size();i++){
		float sum=0;
		sum=arr[i]+arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4];
		sum/=5;
		arr5[i]=sum;
	}
	// for(int i=5;i<20;i++){
	// 	cout<<fixed<<setprecision(2)<<arr5[i]<<endl;
	// } to print the moving average
	
return 0;
}