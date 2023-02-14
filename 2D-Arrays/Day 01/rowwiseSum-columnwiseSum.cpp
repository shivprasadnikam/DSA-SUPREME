

                                                            // Row wise sum and column wise sum  //



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int row=3;
	int col=3;
	std::cout << "Row wise Sum" << std::endl;
	for(int i=0; i<row; i++)
	{
	    int sum=0;
	    for(int j=0; j<col; j++)
	    {
	        sum+=arr[i][j];
	    }
	   std::cout << sum << std::endl;
	   
	}
	std::cout << "Column wise sum " << std::endl;
		for(int i=0; i<row; i++)
	{
	    int sum=0;
	    for(int j=0; j<col; j++)
	    {
	        sum+=arr[j][i];
	    }
	   // std::cout << sum << std::endl;
	   std::cout << sum << std::endl;
	}
	return 0;
}


                                                                // Output //

                                                                Row wise Sum
                                                                6
                                                                15
                                                                24
                                                                Column wise sum 
                                                                12
                                                                15
