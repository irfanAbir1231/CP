#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printStackElements(stack<int> stack)
{
    while (!stack.empty())
    {
        /* code */
        cout<<stack.top()<<endl;
        stack.pop();
    }
    

}
 
signed main()
{
 
//empty,size,push,pop,top
stack<int>numbersStack;
numbersStack.push(1);
numbersStack.push(2);
numbersStack.push(3);
numbersStack.push(4);
numbersStack.pop();

printStackElements(numbersStack);

// if (numbersStack.empty())
// {
//     /* code */
//     cout<<"Stack is empty"<<endl;
// }
// else{
//     cout<<"Stack is not empty"<<endl;
// }

// cout<<"Stack size is: "<<numbersStack.size()<<endl;
 
return 0;
}