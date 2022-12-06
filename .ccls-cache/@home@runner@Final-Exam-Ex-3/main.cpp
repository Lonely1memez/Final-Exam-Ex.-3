#include <iostream>

using namespace std;

int main()
{
  int n,temp,invalid=0,valid=0,res=-1;
  cout<<"Author: [Your Name]"<<endl<<endl;
  cout<<"Enter number of candidates --> ";//read number of candidates
  cin>>n;
  int f[n];
  for(int i=0;i<n;i++)
  {//set count of votes for each candidate to 0 initially
    f[i]=0;
  }
  cout<<"Enter votes --> ";
  while(true)
  {
    cin>>temp;
    if(temp==0)//use 0 as sentine value
    break;
    if(temp>0 and temp<=n)
    {
      f[temp-1]++;//increment vote count
      valid++;//increment valid vote count
    }
    else
    invalid++;//increment invalid vote count
  }
  for(int i=0;i<n;i++)
  {
    if(res<f[i])
    res=f[i];//get the maximum value of votes
  }
  cout<<"There are "<<valid<<" valid votes and "<<invalid<<" invalid votes."<<endl;///print the count of valid and invalid votes
  for(int i=n-1;i>=0;i--)
  {
    if(f[i]==res)
    {
      cout<<"Candidate "<<(i+1)<<" won the election with "<<res<<" votes."<<endl;//print the Candidate with maximum count
      break;
    }
  }
return 0;
}