

                                                                    // Print 2D array rowwise //
                                                                    
   
   
  #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int row=3;
	int col=3;
	std::cout << "Normal 2D array" << std::endl;
	for(int i=0; i<row; i++)
	{
	    int sum=0;
	    for(int j=0; j<col; j++)
	    {
	        std::cout << arr[i][j] <<" ";
	    }
	   // std::cout << sum << std::endl;
	   cout<<endl;
	}
	std::cout << "Row" << std::endl;
		for(int i=0; i<row; i++)
	{
	    int sum=0;
	    for(int j=0; j<col; j++)
	    {
	        std::cout << arr[j][i]<<" ";
	    }
	   // std::cout << sum << std::endl;
	   std::cout << " " << std::endl;
	}
	return 0;
}


                                                                  // Your output  //
                                                                  
                                                                  Normal 2D array
                                                                  
                                                                  
                                                                    1 2 3 
                                                                    4 5 6 
                                                                    7 8 9 
                                                                    Row
                                                                    1 4 7  
                                                                    2 5 8  
                                                                    3 6 9  
