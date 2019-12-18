#include <iostream> 
using namespace std; 
  
// CPP function to find the  
// second most frequent character  
// in a given string 'str'  
char getSecondMostFreq(string str)  
{  
    // count number of occurrences of every character.  
    int count[256] = {0}, i;  
    for (i = 0; str[i]; i++)  
        (count[str[i]])++;  
  
    // Traverse through the count[] and 
    // find second highest element.  
    int first = 0, second = 0;  
    for (i = 0; i < 256; i++)  
    {  
        /* If current element is smaller  
        than first then update both  
        first and second */
        if (count[i] > count[first])  
        {  
            second = first;  
            first = i;  
        }  
  
        /* If count[i] is in between first  
        and second then update second */
        else if (count[i] > count[second] &&  
                count[i] != count[first])  
            second = i;  
    }  
  
    return second;  
}  
  
// Driver code  
int main()  
{  
    string str = "geeksforgeeks";  
    char res = getSecondMostFreq(str);  
    if (res != '\0')  
        cout << "Second most frequent char is " << res;  
    else
        cout << "No second most frequent character";  
    return 0;  
}  
  
// This code is contributed by rathbhupendra#include <iostream>

