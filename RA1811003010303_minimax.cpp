#include<bits/stdc++.h>
using namespace std; 

int minimax(int depth, int nodeIndex, bool isMax,
 int scores[], int h)
{
 if (depth == h)
 return scores[nodeIndex];

 if (isMax)
 return max(minimax(depth+1, nodeIndex*2, false, scores, h),
 minimax(depth+1, nodeIndex*2 + 1, false, scores, h));

 else
 return min(minimax(depth+1, nodeIndex*2, true, scores, h),
 minimax(depth+1, nodeIndex*2 + 1, true, scores, h));
}

int max1;
int max2;
int max3;
int max4;
int min1;
int min2; 
int Optimal;
int log2(int n)
{
 return (n==1)? 0 : 1 + log2(n/2);
}
int main()
{
 int scores[1234];
 int nn;
 cout<<"Enter The no. of Nodes: ";
 cin>>nn;
 cout<<"Enter The costs of the Nodes: ";
 for(int i =0; i<nn; i++)
 {cin>>scores[i];}
 int n = sizeof(scores)/sizeof(scores[0]);
 int h = log2(n);
 int res = minimax(0, 0, true, scores, h);
 if(scores[0]>scores[1])
 {
 cout<<"For D: cost= "<< scores[0]<<"\n";
 max1 = scores[0];
 }
 else{
 cout<<"For D: cost= "<< scores[1] <<"\n";
 max1 = scores[1]; 
 }

 if(scores[2]>scores[3])
 {
 cout<<"For E: cost= "<< scores[2]<<"\n";
 max2 = scores[2];
 }
 else{
 cout<<"For E: cost= "<< scores[3] <<"\n";
 max2 = scores[3];
 }

 if(scores[4]>scores[5])
 {
 cout<<"For F: cost= "<< scores[4]<<"\n";
 max3 = scores[4];
 }
 else{
 cout<<"For F: cost= "<< scores[5] <<"\n";
 max3 = scores[5];
 }

 if(scores[6]>scores[7])
 {
 cout<<"For G: cost= "<< scores[6]<<"\n"; 
 max4 = scores[6];
 }
 else{
 cout<<"For G: cost= "<< scores[7] <<"\n";
 max4 = scores[7];
 }

 if(max1>max2)
 {
 cout<<"For B: cost= "<<max2<<"\n";
 min1=max2;
 }
 else{
 cout<<"For B: cost= "<<max1<<"\n";
 min1=max1;
 }

 if(max3>max4)
 {
 cout<<"For C: cost= "<<max4<<"\n";
 min2=max4;
 }
 else{
 cout<<"For C: cost= "<<max3<<"\n";
 min2=max3; 
 }



 cout<<"Cost values in First(MAX) level is:";
 cout<<max1<<" ";
 cout<<max2<<" ";
 cout<<max3<<" ";
 cout<<max4<<" "<<"\n";
 cout<<"Cost values in First(MIN) level is:";
 cout<<min1<<" ";
 cout<<min2<<" "<<"\n";

 if(min1>min2)
 {
 Optimal=min1;

 }

 else{
 Optimal=min2;

 }
 
 cout << "The Optimal value is : " <<Optimal<< endl;

 return 0;
} 

