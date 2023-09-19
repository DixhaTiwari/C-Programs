/*   Find the second largest element in the given
 Array. (short process) */

 #include<stdio.h>
 #include<limits.h>
 int main()
 {
    int i;

    int arr[7]= {91,87,38,63,45,87,80};  //This array is a mix of all complicated arrays
    //int arr[7]= {1,2,3,4,5,6,7};
    //int arr[7]= {7,6,5,4,3,2,1};
    //int arr[7]= {1,3,7,2,4,5,7};

    int Largest = INT_MIN;
    int Second_Largest = INT_MIN;

    for(i=0;i<=6;i++)
    {
        if (Largest<arr[i])
        {
            Second_Largest = Largest;
            Largest = arr[i];
        }
      else if(Second_Largest < arr[i] && Largest != arr[i] )     // Largest>arr[i] &&  Largest = arr[i] --> This is for arrys which has double elements              
            {                              // Yeh wala part imp h ubad khabad
             Second_Largest = arr[i];      // ya decreasing array k liye 
            }
        }
    printf("The Second Largest no. of this array is %d",Second_Largest);

    return 0;
 }