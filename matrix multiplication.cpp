//program of matrix multipication
#include <iostream>
using namespace std;
int main()
{
	//variable declaration
  	int m, n, p, q, c, d, k, sum = 0;
  	int first[10][10], second[10][10], multiply[10][10];
	//output statement
  	cout<<"Enter number of rows and columns of first matrix\n";
	//input statement
  	cin>>m>>n;
	//output statement
  	cout<<"Enter elements of first matrix\n";
		//for loop
  		for (c = 0; c < m; c++)
    		for (d = 0; d < n; d++)
	//input statement
     	cin>>first[c][d];
	//output statement
 	cout<<"Enter number of rows and columns of second matrix\n";
	//input statement
  	cin>>p>>q;
	//if condition
  	if (n != p)
	//output statement
    	cout<<"The matrices can't be multiplied with each other\n";
  	else
  	{	  //output statement
  		  cout<<"Enter elements of second matrix\n";
		  	//for loop
   	 		for (c = 0; c < p; c++)
    			for (d = 0; d < q; d++)
		//input statement
		cin>>second[c][d];
    		for (c = 0; c < m; c++) {
      		for (d = 0; d < q; d++) {
        	for (k = 0; k < p; k++) {
	  //processing logic
          sum = sum + first[c][k]*second[k][d];
        }
        multiply[c][d] = sum;
        sum = 0;
      }
    }
    //output statement
    cout<<"Product of the matrices:\n";
    for(c=0;c<m;c++)  
    {  
        for(d=0;d<q;d++)  
    cout<<multiply[c][d]<<" ";  
  
    cout<<"\n";  
    }
  }
  return 0;
}  

