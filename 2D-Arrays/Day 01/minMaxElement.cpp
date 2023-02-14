
                                                          // min and max element //


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row=3;
	int col=3;
    int minElement=INT_MAX;
    int maxElement=INT_MIN;
	for(int i=0; i<row; i++)
	{
	    
	    for(int j=0; j<col; j++)
	    {
	        cout<<arr[i][j];
	    }
        cout<<" "<<endl;
	}
	
	std::cout << "Min and Max element" << std::endl;
	for(int i=0; i<row; i++)
	{
	    
	    for(int j=0; j<col; j++)
	    {
	        if(arr[i][j]<minElement)
	        minElement=arr[i][j];
	        
	        if(arr[i][j]>maxElement)
	        maxElement=arr[i][j];
	        
	    }
        
	}
	std::cout << minElement << std::endl;
	std::cout << maxElement << std::endl;
    
}


                                                                        // Output //

                                                                              123 
                                                                              456 
                                                                              789 
                                                                              Min and Max element
                                                                              1
                                                                              9
