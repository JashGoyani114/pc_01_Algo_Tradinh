#include<bits/stdc++.h>

using namespace std;
#define long long int;
int main() {
    int n;cin>>n;    
	int Stock_price[n];
    int Buy,Sell;
    int Max_profit=-1;
    int profit;
    
	for(int i=0;i<n;i++)
	{
	    cin>>Stock_price[i];
	}
    int Min=Stock_price[0];

    for(int i=1;i<n;i++)
    {
         if(Stock_price[i]>Min)
         {
            profit=Stock_price[i]-Min;
            if(profit>Max_profit)
              {
                  Max_profit=profit;
                  Sell=i;
              }
            
         }
         else
         {
             Buy=i;
             Min=Stock_price[i];
         }

    }
    if(Max_profit>0)
    {
        cout<<"Buy at "<<Buy+1<<endl<<"Sell at "<<Sell+1<<endl<<"The Profit earned will be "<<Max_profit<<endl;
    }
    else
    {
        cout<<"Don't Catch a Falling Knife"<<endl;
    }
    
return 0;
}
