

                                                                // Search element in 2D array  //


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int flag=0;
	int row=3;
	int col=3;
    int key=10;
	for(int i=0; i<row; i++)
	{
	    int sum=0;
	    for(int j=0; j<col; j++)
	    {
	        cout<<arr[i][j];
	    }
        cout<<" "<<endl;
	}
	
	std::cout << "Search element in 2D array" << std::endl;
	for(int i=0; i<row; i++)
	{
	    
	    for(int j=0; j<col; j++)
	    {
	        if(key==arr[i][j])
	        flag=1;
	    }
        
	}
    if(flag==1)
    std::cout << "True" << std::endl;
    else
    std::cout << "False" << std::endl;
	return 0;
}

                                                                       // Output  //


                                                                          123 
                                                                          456 
                                                                          789 
                                                                          Search element in 2D array
                                                                          False
